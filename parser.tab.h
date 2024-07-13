/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    MAIN = 258,                    /* MAIN  */
    INT = 259,                     /* INT  */
    INTPTR = 260,                  /* INTPTR  */
    CHAR = 261,                    /* CHAR  */
    VOID = 262,                    /* VOID  */
    CHARPTR = 263,                 /* CHARPTR  */
    CHAR_VAL = 264,                /* CHAR_VAL  */
    FLOAT = 265,                   /* FLOAT  */
    FLOAT_VAL = 266,               /* FLOAT_VAL  */
    FLOATPTR = 267,                /* FLOATPTR  */
    DOUBLE = 268,                  /* DOUBLE  */
    DOUBLE_VAL = 269,              /* DOUBLE_VAL  */
    DOUBLEPTR = 270,               /* DOUBLEPTR  */
    BOOLEAN = 271,                 /* BOOLEAN  */
    TRUE = 272,                    /* TRUE  */
    FALSE = 273,                   /* FALSE  */
    VAR = 274,                     /* VAR  */
    PUBLIC = 275,                  /* PUBLIC  */
    PRIVATE = 276,                 /* PRIVATE  */
    STATIC = 277,                  /* STATIC  */
    RETURN = 278,                  /* RETURN  */
    ID = 279,                      /* ID  */
    INT_VAL = 280,                 /* INT_VAL  */
    NONE = 281,                    /* NONE  */
    DO = 282,                      /* DO  */
    ARG_OP = 283,                  /* ARG_OP  */
    AND = 284,                     /* AND  */
    DIV = 285,                     /* DIV  */
    EQUAL = 286,                   /* EQUAL  */
    BIGGER_EQ = 287,               /* BIGGER_EQ  */
    BIGGER = 288,                  /* BIGGER  */
    SMALLER_EQ = 289,              /* SMALLER_EQ  */
    SMALLER = 290,                 /* SMALLER  */
    MINUS = 291,                   /* MINUS  */
    NOT = 292,                     /* NOT  */
    NOT_EQ = 293,                  /* NOT_EQ  */
    OR = 294,                      /* OR  */
    PLUS = 295,                    /* PLUS  */
    MUL = 296,                     /* MUL  */
    ADDRESS_OP = 297,              /* ADDRESS_OP  */
    DEREFERENCE = 298,             /* DEREFERENCE  */
    HEX_VAL = 299,                 /* HEX_VAL  */
    STRING_VAL = 300,              /* STRING_VAL  */
    IF = 301,                      /* IF  */
    ELSE = 302,                    /* ELSE  */
    STRING = 303,                  /* STRING  */
    FOR = 304,                     /* FOR  */
    INCREM = 305,                  /* INCREM  */
    DECREM = 306,                  /* DECREM  */
    WHILE = 307                    /* WHILE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 50 "parser.y"

		char *value;
		node *nPtr;
	

#line 122 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
