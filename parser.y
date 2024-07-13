	%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <stdarg.h>
	#include "node.h"
	#include "lex.yy.c"
	#include "symbol_table.h"
	#include "variable_assign.h"

	#define TYPEOF(var) _Generic((var), \
    char*: "STRING", \
    int: "INT", \
    float: "FLOAT", \
    double: "DOUBLE", \
    char: "CHAR", \
    default: "unknown")

	int yylex(void);
	void yyerror(char *);
	int yylineno;

	SymbolTable* symTable;
	VariableList* var_list;

	int isLeave(node* head);
	node* mkNode(char *value, int count,...);
	node* mkParent(char* value, node* child);
	void printTree(node* ast, int indent, int s, int l);
	SymbolTable* initializeSymbolTable();
	void addToSymbolTable(SymbolTable *table, const char *name);
	int lookupInSymbolTable(SymbolTable *table, const char *name);
	int functionCall(SymbolTable *table, const char *name);

	// Function to initialize the variable list
	VariableList* initialize_variable_list();

	// Function to add a variable to the list
	void add_variable(VariableList *list, const char *name, const char **type);
	void add_variable_2(VariableList *list, const char *name, const char *type);

	// Function to check variable type consistency
	int check_variable_type(VariableList *list, const char *name, const char **type);
	int check_variable_type_2(VariableList *list, const char **name, const char **type);

	// Function to free the variable list
	void free_variable_list(VariableList *list);
	%}

	%union {
		char *value;
		node *nPtr;
	}

	%token <value> MAIN INT INTPTR CHAR VOID CHARPTR CHAR_VAL FLOAT FLOAT_VAL FLOATPTR DOUBLE DOUBLE_VAL DOUBLEPTR BOOLEAN TRUE FALSE 
	%token <value> VAR PUBLIC PRIVATE STATIC RETURN ID INT_VAL NONE DO ARG_OP 
	%token <value> AND DIV EQUAL BIGGER_EQ BIGGER SMALLER_EQ SMALLER MINUS NOT NOT_EQ OR PLUS MUL ADDRESS_OP DEREFERENCE
	%token <value> HEX_VAL STRING_VAL IF ELSE STRING FOR INCREM DECREM WHILE

	%left OR
	%left AND
	%left EQUAL
	%left NOT_EQ
	%left BIGGER BIGGER_EQ SMALLER_EQ SMALLER
	%left PLUS MINUS
	%left MUL DIV


	%type <nPtr> function main expression expression_static main_func expressions expressions_static expressions_ne expressions_ne_static identifiers next_identifier pdecleration var_types type
	%type <nPtr> parameter_list functions func_body func_body_static statement statement_static assignment assignment_static update lhs if_else_block if_else_statement code_block func_call func_call_static
	%type <nPtr>  if if_else while do_while for statements statements_static statements_ne statements_ne_static variable_declaration variable_ass
	%type <nPtr> var_declr var_declr_ne  integer_value str_declaration var_start var_static
	%type <value> const_value op_unary integer 
	%%

	start:	functions		{printTree(mkNode("CODE1",1,mkParent("",$1)), 0, 0, 1);printf("\n");}
		|	main			{printTree(mkNode("CODE2",1,$1), 0, 0, 1);printf("\n");}
		|	functions main 	{printTree(mkNode("CODE3",2,mkParent("",$1),mkParent("",$2)), 0, 0, 1);printf("\n");}
		|	main functions 	{printTree(mkNode("CODE4",2,mkParent("",$1),mkParent("",$2)), 0, 0, 1);printf("\n");}
		;
								
	main:  	var_start var_types main_func '(' ')' ':' var_static '{' func_body_static '}'
						{	addToSymbolTableStatic(symTable,$3);
							$$ = mkNode("MAIN",7, mkNode($3,0),mkNode($7, 0),mkNode($1,0),mkParent("ARGS",mkNode("NONE", 0)),mkParent("RETURN",mkNode($2,0)), $9);
							}	

			
			|	var_start var_types main_func '(' ')' '{' func_body '}'
						{	addToSymbolTable(symTable,$3);
							$$ = mkNode("MAIN",7, mkNode($3,0),mkNode("NONSTATIC",0),mkNode($1,0),mkParent("ARGS",mkNode("NONE", 0)),mkParent("RETURN",mkNode($2,0)), $7);}	

			;
								
	functions:	function   				{$$ = $1;}
			|	functions function		{$$ = mkNode("",2,$1,$2);}
			;
														
	function: var_start var_types ID '(' parameter_list ')' ':' var_static '{' func_body_static '}'
			{
				addToSymbolTableStatic(symTable, $3); // Add function to symbol table
				$$ = mkNode("FUNC", 6, mkNode($3, 0), mkNode($8, 0), mkNode($1, 0), mkParent("ARGS ", $5), mkParent("RETURN", mkNode($2, 0)), $10);
			}
			| var_start var_types ID '(' ')' ':' var_static '{' func_body_static '}'
			{
				addToSymbolTableStatic(symTable, $3); // Add function to symbol table
				$$ = mkNode("FUNC", 7, mkNode($3, 0), mkNode($7, 0), mkNode($1, 0), mkParent("ARGS", mkNode("NONE", 0)), mkParent("RETURN", mkNode($2, 0)), $9);
			}
			| var_start var_types ID '(' parameter_list ')''{' func_body '}'
			{
				addToSymbolTable(symTable, $3); // Add function to symbol table
				$$ = mkNode("FUNC", 6, mkNode($3, 0), mkNode("NONSTATIC", 0), mkNode($1, 0), mkParent("ARGS ", $5), mkParent("RETURN", mkNode($2, 0)), $8);
			}
			| var_start var_types ID '(' ')' '{' func_body '}'
			{
				addToSymbolTable(symTable, $3); // Add function to symbol table
				$$ = mkNode("FUNC", 7, mkNode($3, 0), mkNode("NONSTATIC", 0), mkNode($1, 0), mkParent("ARGS", mkNode("NONE", 0)), mkParent("RETURN", mkNode($2, 0)), $7);
			};


	var_types:	CHAR				{$$ = "CHAR";}	
			|	CHARPTR				{$$ = "CHARPTR";}	
			|	INT					{$$ = "INT";}				
			|	INTPTR				{$$ = "INTPTR";}	
			|	FLOAT				{$$ = "FLOAT";}
			|	DOUBLE				{$$ = "DOUBLE";}
			|	FLOATPTR			{$$ = "FLOATPTR";}
			|	DOUBLEPTR			{$$ = "DOUBLEPTR";}
			|	BOOLEAN				{$$ = "BOOLEAN";}
			|	VOID				{$$ = "VOID";}
			;

	var_static:  
			STATIC				{$$ = "STATIC";}
			;		
	main_func:
				MAIN				{$$ = "main";}
			;
	var_start:  PUBLIC 				{$$ = "PUBLIC";}
			|   PRIVATE				{$$ = "PRIVATE";}
			;

			
	parameter_list:	pdecleration					{$$ = $1;}
			|	parameter_list ';' pdecleration		{$$ = mkNode("",2,$1,$3);}
			;
								
	pdecleration:	ARG_OP   var_types ':' identifiers 		{$$ = mkParent($2,$4);}
			|  		var_types ':' identifiers		{$$ = mkParent($1,$3);}
			;
								
	identifiers:	ID next_identifier 					{$$ = mkNode($1,1,$2);}
			|	ID  									{$$ = mkNode($1,0);}
			;

	next_identifier:	',' ID next_identifier 		{$$ = mkNode("",2,mkNode($2,0),$3);}
			|										{$$ = NULL;}
			;

	func_body:	functions var_declr statements RETURN expression ';'	{$$ = mkNode("BODY",4,mkParent("",$1),mkParent("VAR",$2),$3,mkParent("RET",$5));}
			|	var_declr statements RETURN expression ';'		{$$ = mkNode("BODY",3,mkParent("VAR",$1),$2,mkParent("RET",$4));}
			|	functions var_declr statements					{$$ = mkNode("BODY",3,mkParent("",$1),mkParent("VAR",$2),$3);}
			|	var_declr statements 					{$$ = mkNode("BODY",2,mkParent("VAR",$1),$2);}
			;

	func_body_static:	functions var_declr statements_static RETURN expression_static ';'	{$$ = mkNode("BODYSTATIC",4,mkParent("",$1),mkParent("VAR",$2),$3,mkParent("RET",$5));}
			|	var_declr statements_static RETURN expression_static ';'		{$$ = mkNode("BODY",3,mkParent("VAR",$1),$2,mkParent("RET",$4));}
			|	functions var_declr statements_static					{$$ = mkNode("BODY",3,mkParent("",$1),mkParent("VAR",$2),$3);}
			|	var_declr statements_static					{$$ = mkNode("BODY",2,mkParent("VAR",$1),$2);}
			;


	const_value: CHAR_VAL   {$$ = mkNode("CHAR",1,mkNode($1,0));}
			|	 HEX_VAL    {$$ = mkNode($1,0);}
			|	 INT_VAL	{$$ = mkNode("INT",1,mkNode($1,0));}
			|	 FLOAT_VAL	{$$ = mkNode($1,0);}
			|	 DOUBLE_VAL	{$$ = mkNode($1,0);}
			| PLUS DOUBLE_VAL { $$ = mkNode("+",1,mkNode($2,0));}
			| MINUS DOUBLE_VAL { $$ = mkNode("-",1,mkNode($2,0)); }
			| PLUS FLOAT_VAL { $$ = mkNode("+",1,mkNode($2,0));}
			| MINUS FLOAT_VAL { $$ = mkNode("-",1,mkNode($2,0)); }
			|	 TRUE 		{$$ = mkNode($1,0);}
			|    FALSE		{$$ = mkNode($1,0);}
			|	 NONE		{$$ = mkNode($1,0);}
			;

	integer: 	FLOAT   	{$$ = mkNode($1,0);}
			| DOUBLE_VAL		{$$ = mkNode($1,0);}
			| PLUS FLOAT_VAL {$$ = mkNode("+",1,mkNode($2,0));}
			| MINUS FLOAT_VAL{$$ = mkNode("-",1,mkNode($2,0));}
			| PLUS DOUBLE_VAL {$$ = mkNode("+",1,mkNode($2,0));}
			| MINUS DOUBLE_VAL{$$ = mkNode("-",1,mkNode($2,0));}
			|	HEX_VAL       {$$ = mkNode($1,0);}
			|	INT_VAL   {$$ = mkNode($1,0);}
			;                   
	expression:	ID									{$$ = mkNode($1,0);}
			|	integer								{$$ = $1;}	
			|	ID '[' expression ']'				{$$ = mkNode($1,3,mkNode("[",0),$3,mkNode("]",0));}
			|	const_value							{$$ = $1;}
			|	expression AND expression           {$$ = mkNode("AND",2,$1,$3);}
			|	expression EQUAL expression         {$$ = mkNode("==",2,$1,$3);}
			|	expression NOT_EQ expression        {$$ = mkNode("!=",2,$1,$3);}
			|	expression OR expression            {$$ = mkNode("OR",2,$1,$3);}
			|	expression BIGGER expression      	{$$ = mkNode(">",2,$1,$3);}
			|	expression BIGGER_EQ expression     {$$ = mkNode(">=",2,$1,$3);}
			|	expression SMALLER_EQ expression	{$$ = mkNode("<=",2,$1,$3);}
			|	expression SMALLER expression		{$$ = mkNode("<",2,$1,$3);}
			|	expression PLUS expression			{$$ = mkNode("+",2,$1,$3);}
			|	expression MINUS expression			{$$ = mkNode("-",2,$1,$3);}
			|	expression MUL expression			{$$ = mkNode("*",2,$1,$3);}
			|	expression DIV expression			{$$ = mkNode("/",2,$1,$3);}
			|	op_unary expression					{$$ = mkNode($1,1,$2);}
			|	MUL ID								{$$ = mkNode("*",1,mkNode($2,0));}
			|	'(' expression ')'					{$$ = $2;}
			|	'|' expression '|'					{$$ = mkNode("|",2,$2,mkNode("|",0));}
			|	func_call							{$$ = $1;}
			;
	expression_static:	ID									{$$ = mkNode($1,0);}
			|	integer								{$$ = $1;}	
			|	ID '[' expression ']'				{$$ = mkNode($1,3,mkNode("[",0),$3,mkNode("]",0));}
			|	const_value							{$$ = $1;}
			|	expression AND expression           {$$ = mkNode("AND",2,$1,$3);}
			|	expression EQUAL expression         {$$ = mkNode("==",2,$1,$3);}
			|	expression NOT_EQ expression        {$$ = mkNode("!=",2,$1,$3);}
			|	expression OR expression            {$$ = mkNode("OR",2,$1,$3);}
			|	expression BIGGER expression      	{$$ = mkNode(">",2,$1,$3);}
			|	expression BIGGER_EQ expression     {$$ = mkNode(">=",2,$1,$3);}
			|	expression SMALLER_EQ expression	{$$ = mkNode("<=",2,$1,$3);}
			|	expression SMALLER expression		{$$ = mkNode("<",2,$1,$3);}
			|	expression PLUS expression			{$$ = mkNode("+",2,$1,$3);}
			|	expression MINUS expression			{$$ = mkNode("-",2,$1,$3);}
			|	expression MUL expression			{$$ = mkNode("*",2,$1,$3);}
			|	expression DIV expression			{$$ = mkNode("/",2,$1,$3);}
			|	op_unary expression					{$$ = mkNode($1,1,$2);}
			|	MUL ID								{$$ = mkNode("*",1,mkNode($2,0));}
			|	'(' expression ')'					{$$ = $2;}
			|	'|' expression '|'					{$$ = mkNode("|",2,$2,mkNode("|",0));}
			|	func_call_static							{$$ = $1;}
			;				
	op_unary:	ADDRESS_OP 
			|	NOT
			|	MINUS
			;
								
	statement:	assignment ';'
			|	func_call
			|	if_else
			|	if 
			|	while
			|	do_while
			|	for
			|	'{' code_block '}'    {$$ = $2;}
			;

	statement_static:	assignment_static ';'
			|	func_call_static
			|	if_else
			|	if 
			|	while
			|	do_while
			|	for
			|	'{' code_block '}'    {$$ = $2;}
			;						
	assignment:	lhs '=' expression 		{$$ = mkNode("ASS3",2,mkNode("",1,$1),$3);}
			|	lhs '=' STRING_VAL 		{$$ = mkNode("ASS4",2,$1,mkNode($3,0));}
			;

	assignment_static:	lhs '=' expression_static 		
		{	
			
			if(check_variable_type_2(var_list, $1,$3) == 1) {
				$$ = mkNode("ASS5.1",2,mkNode("",1,$1),$3);

				}
				else if(check_variable_type_2(var_list, $1,$3) == -1){
					printf("Sorry wrong assignment type\n");
					YYABORT; 

				}
				else{

					$$ = mkNode("ASS5.2",2,mkNode("",1,$1),$3);
	

				}
			
		}
			|	lhs '=' STRING_VAL 		{$$ = mkNode("ASS6",2,$1,mkNode($3,0));}
			;	

	lhs:	ID									{$$ = mkNode($1,0);}
			|	'*' ID								{$$ = mkNode("*",1,mkNode($2,0));}			
			|	ID '[' expression ']'  				{$$ = mkNode($1,3,mkNode("[",0),$3,mkNode("]",0));}
			;
								
	code_block:	var_declr statements		{$$ = mkNode("BLOCK",2,mkParent("VAR",$1),$2);}
			;

	func_call: lhs '=' ID '(' expressions ')' ';'
			{
				if (functionCall(symTable, $3) == -1) {
					YYABORT; 

				}
				else{

					$$ = mkNode("FUNCTION_CALL", 1, mkNode("ASS7", 3, $1, mkNode($3, 0), mkParent("ARGS", $5)));
				}
			}

			| ID '(' expressions ')' ';'

			{
				if (functionCall(symTable, $1) == -1) {
					YYABORT; 
				}
				else {
					$$ = mkNode("FUNCTION_CALL", 2, mkNode($1, 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			}

			| ID '(' ')' ';'

			{
				if (functionCall(symTable, $1) == -1) {
					YYABORT; 

				}
				else {
					$$ = mkNode("FUNCTION_CALL", 2, mkNode($1, 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			}

			| lhs '=' ID '(' ')' ';'
			{
				if (functionCall(symTable, $3) == -1) {
					YYABORT; 
				}
				else {
					$$ = mkNode("FUNCTION_CALL", 2, mkNode($1, 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			};
	func_call_static: lhs '=' ID '(' expressions_static ')' ';'
			{
				if (functionCallStatic(symTable, $3) == -1 || functionCallStatic(symTable, $3) == 0) {
					YYABORT; 

				}
				else{

					$$ = mkNode("FUNCTION_CALL", 1, mkNode("ASS10", 3, $1, mkNode($3, 0), mkParent("ARGS", $5)));
				}
			}

			| ID '(' expressions_static ')' ';'

			{
				if (functionCallStatic(symTable, $1) == -1 || functionCallStatic(symTable, $1) == 0) {
					YYABORT; 
				}
				else {
					$$ = mkNode("FUNCTION_CALL", 2, mkNode($1, 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			}

			| ID '(' ')' ';'

			{
				if (functionCallStatic(symTable, $1) == -1 || functionCallStatic(symTable, $1) == 0) {
					YYABORT; 

				}
				else {
					$$ = mkNode("FUNCTION_CALL", 2, mkNode($1, 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			}

			| lhs '=' ID '(' ')' ';'
			{
				if (functionCallStatic(symTable, $3) == -1 || functionCallStatic(symTable, $3) == 0) {
					YYABORT; 
				}
				else {
					$$ = mkNode("FUNCTION_CALL", 2, mkNode($1, 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			};



	expressions:							{$$ = NULL;}
			|	expressions_ne				{$$ = $1;}
			;

	expressions_static:							{$$ = NULL;}
			|	expressions_ne_static				{$$ = $1;}
			;	

	expressions_ne:	expression						{$$ = $1;}
			|	expressions_ne ',' expression		{$$ = mkNode("",2,$1,$3);}
			;
			
	expressions_ne_static:	expression_static						{$$ = $1;}
			|	expressions_ne_static ',' expression_static		{$$ = mkNode("",2,$1,$3);}
			;

	if:		IF '(' expression ')' '{' if_else_block '}'	{$$ = mkNode("IF",2,$3,$6);}
			|	IF '(' expression ')'  if_else_statement 	{$$ = mkNode("IF",2,$3,$5);}
			;
								
	if_else:	IF '(' expression ')' '{' if_else_block '}' ELSE '{' if_else_block '}' 
												{$$ = mkNode("IF-ELSE",3,$3,$6,$10);}
			|	IF '(' expression ')' if_else_statement ELSE if_else_statement   
												{$$ = mkNode("IF-ELSE",3,$3,$5,$7);}
			|	IF '(' expression ')' if_else_statement ELSE '{' if_else_block '}' 
												{$$ = mkNode("IF-ELSE",3,$3,$5,$8);}
			|	IF '(' expression ')' '{' if_else_block '}' ELSE if_else_statement   
												{$$ = mkNode("IF-ELSE",3,$3,$6,$9);}
			;
	if_else_block:	code_block RETURN expression';' {$$ = mkNode("",2,$1,mkParent("RET",$3));}
			|	code_block							{$$ = $1;}
			|	RETURN expression ';'				{$$ = mkParent("RET",$2);}
			|	RETURN expression					{$$ = mkParent("RET",$2);}
			;

	if_else_statement:	statement				{$$ = $1;}
			|	RETURN expression ';'			{$$ = mkParent("RET",$2);}
			|	RETURN expression 				{$$ = mkParent("RET",$2);}
			;
								
	while:	WHILE '(' expression ')'  statement 	{$$ = mkNode("WHILE",2,$3,$5);}
			;

	do_while:	DO '{' code_block '}' WHILE '(' expression ')' ';'	{$$ = mkNode("DO-WHILE",2,$3,mkNode("WHILE",1,$7));}
			;

	for: FOR '(' assignment ';' expression ';' update ')' statement  {$$ = mkNode("FOR",4,$3,$5,$7,$9);}
			;

	update:	lhs '=' expression 		{$$ = mkNode("ASS11",2,mkNode("",1,$1),$3);}
			| 						{$$=NULL;}
			;

	statements:											{$$ = NULL;}
			|	statements_ne							{$$ = $1;}
			;
	statements_static:											{$$ = NULL;}
			|	statements_ne_static							{$$ = $1;}
			;							
	statements_ne:	statement						{$$ = $1;}
			|	statements_ne statement     		{$$ = mkNode("",2,$1,$2);}
			;
								
	statements_ne_static:	statement_static						{$$ = $1;}
			|	statements_ne_static statement_static     		{$$ = mkNode("",2,$1,$2);}
			;
								
	variable_declaration: VAR type ':' variable_ass ';'          {$$ = mkNode($2,1,$4);}
			| VAR type ':' ID ';'          {add_variable(var_list,$4,$2);$$ = mkNode($2,1,$4);}	
			| VAR type ':' identifiers ';'         				{add_variable(var_list,$4,$2);$$ = mkNode($2,1,$4);}	
			| STRING str_declaration     						{$$ =$2;}
			;

	str_declaration: ID '[' integer_value ']' '=' STRING_VAL ';' 
			{
				add_variable_2(var_list,$1,TYPEOF($6));
				$$ = mkNode("STRING",3,mkNode($1,0),mkNode("[",2,$3,mkNode("]",0)), mkNode("ASS9",1,mkNode($6,0)));
			}	
			| ID '[' integer_value ']' ';'						
			{
				$$ = mkNode("STRING",2,mkNode($1,0),mkNode("[",2,$3,mkNode("]",0)));
			}	
			| ID '[' integer_value ']' ','	str_declaration		{
				$$ = mkNode("STRING",3,mkNode($1,0),mkNode("[",2,$3,mkNode("]",0)),$6);
				}	
			;

	integer_value: integer 						{$$ = $1;}
				|	integer PLUS integer_value  {$$ = mkNode("+",0),$3;}
				|	integer MUL integer_value	{$$ = mkNode("*",0),$3;}
				|	integer MINUS integer_value	{$$ = 2,mkNode("-",0),$3;}
				;	
								
	variable_ass: ID '=' const_value ',' variable_ass	
			{
				if(check_variable_type(var_list, $1,$3) == 1) {
					$$ = mkNode("ASS1",3,mkNode($1,1,$3), mkParent("",$5));

				}
				else if(check_variable_type(var_list, $1,$3) == -1){
					YYABORT; 

				}
				else{
					$$ = mkNode("ASS2",3,mkNode($1,1,$3), mkParent("",$5));
	

				}
			}
			| ID '=' const_value					
			{
				if(check_variable_type(var_list, $1,$3) == 1){
					$$ = mkNode("ASSTOPO",1,mkNode($1,1, $3));

				}
				else if(check_variable_type(var_list, $1,$3) == -1){
					YYABORT; 
				}
				else {
					printf("Now adding the node \n \n");
				
					add_variable(var_list,$1,$3);

					$$ = mkNode("ASSTOPO2",1,mkNode($1,1, $3));
				}
			}

			;

	type:	var_types	{$$ = $1;}
		;
		
	var_declr:									{$$ = NULL;}
			|	var_declr_ne					{$$ = $1;}
			;
								
	var_declr_ne:	variable_declaration				{$$ = $1;}
			|	var_declr_ne variable_declaration		{$$ = mkNode("",2,$1,$2);}
			;
	%%

	int isLeave(node* head) 
	{
		int i;
		if(head == NULL)
			return 0;
		if(head->count == 0)
			return 0;
		for(i = 0;i<head->count;i++)
			if(head->sons[i]!= NULL && head->sons[i]->count > 0)
				return 0;
		return 1;
	}
	node* mkNode(char *value, int count,...) 
	{
		va_list ap;
		node *p;
		node **s;
		int i;
		int flag = 1;

		/* allocate node */
		if ((p = (node*)malloc(sizeof(node))) == NULL)
			yyerror("out of memory");
		
		/* copy information */
		p->value = value;
		p->count = count;
		if(count != 0)
		{
			if ((s = (node**)malloc(count * sizeof(node*))) == NULL)
				yyerror("out of memory");
			va_start(ap, count);
			for (i = 0; i < count; i++)
			{
				s[i] = va_arg(ap, node*);
				if(s[i] != NULL)
					flag = 0;
			}
			va_end(ap);
			p->sons = s;
			if(flag)
				return NULL;
		}
		else
		{
			p->sons = NULL;
		}
		return p;
	}

	node* mkParent(char* value, node* child)
	{
		if(child == NULL)
			return NULL;
		if(child->value != "")
		{
			return mkNode(value,1,child);
		}
		child->value = value;
		return child;
	}

	void printTree(node* ast, int indent, int s, int l)
	{
		int i = 0;
		int flag = 0;
		if(ast == NULL)
			return;
			
		if(ast->count > 0 && ast->value != "")
			printf("\n%*s( ",indent,"");
		if(!s && ast->count == 0)
			printf("\n%*s",indent,"");
		if(ast->value != "")	
		{
			printf("%s ",ast->value);
		}
		else
			indent--;
		
		for(i = 0; i < ast->count; i++)
		{
			if(ast->sons[i] != NULL)
			{
				if(isLeave(ast) || ast->value == "" || ast->value == "ARGS" || ast->value == "VAR")
					s = 1;
				else	
					s = 0;
				if(l)
				{
					if(strlen(ast->value) == 0)
						l = 0; 
					printTree(ast->sons[i],indent + strlen(ast->value)+1,s, l);
				}
				else
				{
					if(strlen(ast->value) != 0)
					{
						l = 1;
						printTree(ast->sons[i],indent + strlen(ast->value)+1,s, l);
					}
					else
						printTree(ast->sons[i],indent + 1,s, l);
				}
				if(ast->sons[i]->count > 0)
					flag = 1;
			}
		}
		
		if(flag == 1 && ast->value != "" && ast->value != "ARGS" && ast->value != "VAR")
			printf("\n%*s%s",indent,"",")");
		else if ((ast->count > 0 && ast->value != "") || ast->value == "ARGS" || ast->value == "VAR")
			printf(")");
	}

	void yyerror(char *s) {
		fprintf(stderr, "%s at line %d\nParser does not expect %s\n", s, yylineno ,yytext);
		

	}

	SymbolTable* initializeSymbolTable() {
		// Allocate memory for the SymbolTable structure
		SymbolTable* table = (SymbolTable*) malloc(sizeof(SymbolTable));
		if (table == NULL) {
			fprintf(stderr, "Memory allocation failed\n");
			return NULL;
		}


		// Initialize the count of entries to 0
		table->count = 0;

		// Optionally initialize the entries array
		for (int i = 0; i < MAX_SYMBOLS; ++i) {
			strcpy(table->entries[i].name, "check"); // Set the name to "check"
			table->entries[i].isStatic = 0;
		}

		return table;
	}

	void addToSymbolTable(SymbolTable *table, const char *name) {

		if (table->count < MAX_SYMBOLS) {
			// Check if the function is already declared
			if (lookupInSymbolTable(table, name) == -1) {
				// Add the function to the symbol table
				strcpy(table->entries[table->count].name, name);
				table->count++;


			} else {
				printf("Error: Function '%s' already declared.\n", name);
			}
		} else {
			printf("Error: Symbol table overflow.\n");
		}
	}
	void addToSymbolTableStatic(SymbolTable *table, const char *name) {

		if (table->count < MAX_SYMBOLS) {
			// Check if the function is already declared
			if (lookupInSymbolTable(table, name) == -1) {
				// Add the function to the symbol table
				strcpy(table->entries[table->count].name, name);
				table->entries[table->count].isStatic = 1;
				table->count++;


			} else {
				printf("Error: Function '%s' already declared.\n", name);
			}
		} else {
			printf("Error: Symbol table overflow.\n");
		}
	}
	int lookupInSymbolTable(SymbolTable *table, const char *name) {
		int i;
		for (i = 0; i < table->count; i++) {
			if (strcmp(table->entries[i].name, name) == 0) {
				return i; // Function found, return index
			}
		}
		return -1; // Function not found
	}

	int functionCall(SymbolTable *table, const char *name){
		int i;
		for (i = 0; i < table->count; i++) {
			if (strcmp(table->entries[i].name, name) == 0) {
				return i; // Function found, return index
			}
		}
		yyerror("Function is not Declared");
		return -1; // Function not found

	}

	int functionCallStatic(SymbolTable *table, const char *name){
		int i;
		for (i = 0; i < table->count; i++) {
			if (strcmp(table->entries[i].name, name) == 0) {
				if(table->entries[i].isStatic == 1){
					return 1;
				}
				else{
					yyerror("Function is not static");

					return 0;
				}
			}
		}
		yyerror("Function is not Declared");
		return -1; // Function not found

	}

	VariableList* initialize_variable_list() {
		// Allocate memory for the VariableList structure
		VariableList *list = (VariableList *)malloc(sizeof(VariableList));
		if (list == NULL) {
			fprintf(stderr, "Memory allocation failed\n");
			return NULL;
		}

		// Initialize the count of entries to 0
		list->count = 0;

		// Optionally initialize the entries array
		for (int i = 0; i < MAX_VARIABLES; ++i) {
			strcpy(list->entries[i].name, "check"); // Set the name to "check"
			strcpy(list->entries[i].type, "INT_VAL"); // Set the name to "check"

		}

		return list;
	}

	void add_variable(VariableList *list, const char *name, const char **type) {
		if (list->count >= MAX_VARIABLES) {
			fprintf(stderr, "Variable list is full\n");
			return;
		}
		printf("type is %s \n",*type);
		strcpy(list->entries[list->count].name, name);
		strcpy(list->entries[list->count].type, *type);

		list->count++;
	}

	void add_variable_2(VariableList *list, const char *name, const char *type) {
		if (list->count >= MAX_VARIABLES) {
			fprintf(stderr, "Variable list is full\n");
			return;
		}
		printf("type is %s \n",type);
		strcpy(list->entries[list->count].name, name);
		strcpy(list->entries[list->count].type, type);

		list->count++;
	}	


	int check_variable_type(VariableList *list, const char *name, const char **type) {
		for (int i = 0; i < list->count; i++) {
			if (strcmp(list->entries[i].name, name) == 0) {
				if(list->entries[i].type == *type){
					return 1;
				}
				else{
					return -1;
				}
				
			}
		}
	
		return 0; // If variable is not found, return true to allow new declaration
	}

	int check_variable_type_2(VariableList *list, const char **name, const char **type) {
		for (int i = 0; i < list->count; i++) {
			if (strcmp(list->entries[i].name, *name) == 0) {
				printf("first is %s\n",*type);
				printf("second is %s\n",list->entries[i].type);

				if(strcmp(list->entries[i].type, *type) == 0){

					return 1;
				}
				else{

					return -1;
				}
				
			}
		}
	
		return 0; // If variable is not found, return true to allow new declaration
	}

	int main(void) {
		symTable = initializeSymbolTable();
		if (symTable == NULL) {
			return 1; // Exit if initialization failed
		}
		var_list = initialize_variable_list();

		#if YYDEBUG
			yydebug = 1;
		#endif
		yyparse();
		free(symTable);
		free(var_list);
		return 0;
	}
