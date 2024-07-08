%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "parser.tab.h"

/* provides amount of lines*/
int yylineno;		
void yyerror(char *);

%}


%%
bool         {return BOOLEAN;}
char         {return CHAR;}
int          {return INT;}
float		 {return FLOAT;}
string       {return STRING;}
"int*"       {return INTPTR;}
"char*"      {return CHARPTR;}
"float*"      {return FLOATPTR;}
if           {return IF;}
else         {return ELSE;}
while        {return WHILE;}
for          {return FOR;}
do           {return DO;}
var		     {return VAR;}
"args>>"      {return ARG_OP;}
public       {return PUBLIC;}
private      {return PRIVATE;}
static       {return STATIC;}
return       {return RETURN;}
null         {return NONE;} 
void         {return VOID;}


&& {
    yylval.value = strdup(yytext);
    return AND;
    }   
& {
    yylval.value = strdup(yytext);
    return ADDRESS_OP;
    }
\/ {
    yylval.value = strdup(yytext);
    return DIV;
    }
"<-" {
    yylval.value = strdup(yytext);
    return '=' ;
    }
== {
    yylval.value = strdup(yytext);
    return EQUAL;
    }
> {
    yylval.value = strdup(yytext); 
    return BIGGER;
    }
>= {
    yylval.value = strdup(yytext);
    return BIGGER_EQ;
    }
\< {
    yylval.value = strdup(yytext);
    return SMALLER;
    }
\<= {
    yylval.value = strdup(yytext);
    return SMALLER_EQ;
    }
\- {
    yylval.value = strdup(yytext);
    return MINUS;
    }
\! {
    yylval.value = strdup(yytext);
    return NOT;
    }
\!= {
    yylval.value = strdup(yytext);
    return NOT_EQ;
    }
"||"	{
    yylval.value = strdup(yytext);
    return OR;
    }
\+ {
    yylval.value = strdup(yytext);
    return PLUS;
    }
\* {
    yylval.value = strdup(yytext);
    return MUL;
    }


true {
        yylval.value = strdup(yytext);
        return TRUE;
        }
false {
        yylval.value = strdup(yytext);
        return FALSE;
        }
'[^']' 	{
        yylval.value = strdup(yytext);
        return CHAR_VAL;
        }
\"[^"]*\" {
        yylval.value = strdup(yytext);
        return STRING_VAL ;
        }
[a-zA-Z][a-zA-Z0-9_]* {
        yylval.value = strdup(yytext);
        return ID;
        }
([1-9][0-9]*)|0 {
        yylval.value = strdup(yytext);
        return INT_VAL;
        }
[0-9]*\.?[0-9]*([eE][+-]?[0-9]+)? {
        yylval.value = strdup(yytext);
        return FLOATPTR;
        } 
0[x|X][0-9A-F]+ {
        yylval.value = strdup(yytext);
        return HEX_VAL ;
        }

: 					{return ':';}
; 					{return ';';}
, 					{return ',';}
"|"					{return '|';}
"{"					{return '{';}
"}"					{return '}';}
"("					{return '(';}
")"					{return ')';}
"["					{return '[';}
"]"					{return ']';}



\/\*([\n -)+-.0-~][/*]?[\n -)+-.0-~]+[/*]?[\n -)+-.0-~])*\*\/  {};
[ \t\r\f]+ 		   {;}						
\n				    ++yylineno;	    /* count new lines */
. 					yyerror("invalid character");

%%

int yywrap(void) {
	return 1;
}
