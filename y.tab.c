/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "node.h"
#include "lex.yy.c"
#include "symbol_table.h"
#include "variable_assign.h"

#define TYPEOF(var) _Generic((var), \
    char *: "STRING",               \
    int: "INT",                     \
    float: "FLOAT",                 \
    double: "DOUBLE",               \
    char: "CHAR",                   \
    default: "unknown")

int yylex(void);
void yyerror(char *);
int yylineno;

SymbolTable *symTable;
VariableList *var_list;

int isLeave(node *head);
node *mkNode(char *value, int count, ...);
node *mkParent(char *value, node *child);
void printTree(node *ast, int indent, int s, int l);
SymbolTable *initializeSymbolTable();
void addToSymbolTable(SymbolTable *table, const char *name);
int lookupInSymbolTable(SymbolTable *table, const char *name);
int functionCall(SymbolTable *table, const char *name);

// Function to initialize the variable list
VariableList *initialize_variable_list();

// Function to add a variable to the list
void add_variable(VariableList *list, const char *name, const char **type);
void add_variable_2(VariableList *list, const char *name, const char *type);

// Function to check variable type consistency
int check_variable_type(VariableList *list, const char *name, const char **type);
int check_variable_type_2(VariableList *list, const char **name, const char **type);

// Function to free the variable list
void free_variable_list(VariableList *list);

#line 121 "y.tab.c"

#ifndef YY_CAST
#ifdef __cplusplus
#define YY_CAST(Type, Val) static_cast<Type>(Val)
#define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type>(Val)
#else
#define YY_CAST(Type, Val) ((Type)(Val))
#define YY_REINTERPRET_CAST(Type, Val) ((Type)(Val))
#endif
#endif
#ifndef YY_NULLPTR
#if defined __cplusplus
#if 201103L <= __cplusplus
#define YY_NULLPTR nullptr
#else
#define YY_NULLPTR 0
#endif
#else
#define YY_NULLPTR ((void *)0)
#endif
#endif

/* Debug traces.  */
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
#define YYTOKENTYPE
enum yytokentype
{
  YYEMPTY = -2,
  YYEOF = 0,         /* "end of file"  */
  YYerror = 256,     /* error  */
  YYUNDEF = 257,     /* "invalid token"  */
  MAIN = 258,        /* MAIN  */
  INT = 259,         /* INT  */
  INTPTR = 260,      /* INTPTR  */
  CHAR = 261,        /* CHAR  */
  VOID = 262,        /* VOID  */
  CHARPTR = 263,     /* CHARPTR  */
  CHAR_VAL = 264,    /* CHAR_VAL  */
  FLOAT = 265,       /* FLOAT  */
  FLOAT_VAL = 266,   /* FLOAT_VAL  */
  FLOATPTR = 267,    /* FLOATPTR  */
  DOUBLE = 268,      /* DOUBLE  */
  DOUBLE_VAL = 269,  /* DOUBLE_VAL  */
  DOUBLEPTR = 270,   /* DOUBLEPTR  */
  BOOLEAN = 271,     /* BOOLEAN  */
  TRUE = 272,        /* TRUE  */
  FALSE = 273,       /* FALSE  */
  VAR = 274,         /* VAR  */
  PUBLIC = 275,      /* PUBLIC  */
  PRIVATE = 276,     /* PRIVATE  */
  STATIC = 277,      /* STATIC  */
  RETURN = 278,      /* RETURN  */
  ID = 279,          /* ID  */
  INT_VAL = 280,     /* INT_VAL  */
  NONE = 281,        /* NONE  */
  DO = 282,          /* DO  */
  ARG_OP = 283,      /* ARG_OP  */
  AND = 284,         /* AND  */
  DIV = 285,         /* DIV  */
  EQUAL = 286,       /* EQUAL  */
  BIGGER_EQ = 287,   /* BIGGER_EQ  */
  BIGGER = 288,      /* BIGGER  */
  SMALLER_EQ = 289,  /* SMALLER_EQ  */
  SMALLER = 290,     /* SMALLER  */
  MINUS = 291,       /* MINUS  */
  NOT = 292,         /* NOT  */
  NOT_EQ = 293,      /* NOT_EQ  */
  OR = 294,          /* OR  */
  PLUS = 295,        /* PLUS  */
  MUL = 296,         /* MUL  */
  ADDRESS_OP = 297,  /* ADDRESS_OP  */
  DEREFERENCE = 298, /* DEREFERENCE  */
  HEX_VAL = 299,     /* HEX_VAL  */
  STRING_VAL = 300,  /* STRING_VAL  */
  IF = 301,          /* IF  */
  ELSE = 302,        /* ELSE  */
  STRING = 303,      /* STRING  */
  FOR = 304,         /* FOR  */
  INCREM = 305,      /* INCREM  */
  DECREM = 306,      /* DECREM  */
  WHILE = 307        /* WHILE  */
};
typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define MAIN 258
#define INT 259
#define INTPTR 260
#define CHAR 261
#define VOID 262
#define CHARPTR 263
#define CHAR_VAL 264
#define FLOAT 265
#define FLOAT_VAL 266
#define FLOATPTR 267
#define DOUBLE 268
#define DOUBLE_VAL 269
#define DOUBLEPTR 270
#define BOOLEAN 271
#define TRUE 272
#define FALSE 273
#define VAR 274
#define PUBLIC 275
#define PRIVATE 276
#define STATIC 277
#define RETURN 278
#define ID 279
#define INT_VAL 280
#define NONE 281
#define DO 282
#define ARG_OP 283
#define AND 284
#define DIV 285
#define EQUAL 286
#define BIGGER_EQ 287
#define BIGGER 288
#define SMALLER_EQ 289
#define SMALLER 290
#define MINUS 291
#define NOT 292
#define NOT_EQ 293
#define OR 294
#define PLUS 295
#define MUL 296
#define ADDRESS_OP 297
#define DEREFERENCE 298
#define HEX_VAL 299
#define STRING_VAL 300
#define IF 301
#define ELSE 302
#define STRING 303
#define FOR 304
#define INCREM 305
#define DECREM 306
#define WHILE 307

/* Value type.  */
#if !defined YYSTYPE && !defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 50 "parser.y"

  char *value;
  node *nPtr;

#line 281 "y.tab.c"
};
typedef union YYSTYPE YYSTYPE;
#define YYSTYPE_IS_TRIVIAL 1
#define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

int yyparse(void);

/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                  /* "end of file"  */
  YYSYMBOL_YYerror = 1,                /* error  */
  YYSYMBOL_YYUNDEF = 2,                /* "invalid token"  */
  YYSYMBOL_MAIN = 3,                   /* MAIN  */
  YYSYMBOL_INT = 4,                    /* INT  */
  YYSYMBOL_INTPTR = 5,                 /* INTPTR  */
  YYSYMBOL_CHAR = 6,                   /* CHAR  */
  YYSYMBOL_VOID = 7,                   /* VOID  */
  YYSYMBOL_CHARPTR = 8,                /* CHARPTR  */
  YYSYMBOL_CHAR_VAL = 9,               /* CHAR_VAL  */
  YYSYMBOL_FLOAT = 10,                 /* FLOAT  */
  YYSYMBOL_FLOAT_VAL = 11,             /* FLOAT_VAL  */
  YYSYMBOL_FLOATPTR = 12,              /* FLOATPTR  */
  YYSYMBOL_DOUBLE = 13,                /* DOUBLE  */
  YYSYMBOL_DOUBLE_VAL = 14,            /* DOUBLE_VAL  */
  YYSYMBOL_DOUBLEPTR = 15,             /* DOUBLEPTR  */
  YYSYMBOL_BOOLEAN = 16,               /* BOOLEAN  */
  YYSYMBOL_TRUE = 17,                  /* TRUE  */
  YYSYMBOL_FALSE = 18,                 /* FALSE  */
  YYSYMBOL_VAR = 19,                   /* VAR  */
  YYSYMBOL_PUBLIC = 20,                /* PUBLIC  */
  YYSYMBOL_PRIVATE = 21,               /* PRIVATE  */
  YYSYMBOL_STATIC = 22,                /* STATIC  */
  YYSYMBOL_RETURN = 23,                /* RETURN  */
  YYSYMBOL_ID = 24,                    /* ID  */
  YYSYMBOL_INT_VAL = 25,               /* INT_VAL  */
  YYSYMBOL_NONE = 26,                  /* NONE  */
  YYSYMBOL_DO = 27,                    /* DO  */
  YYSYMBOL_ARG_OP = 28,                /* ARG_OP  */
  YYSYMBOL_AND = 29,                   /* AND  */
  YYSYMBOL_DIV = 30,                   /* DIV  */
  YYSYMBOL_EQUAL = 31,                 /* EQUAL  */
  YYSYMBOL_BIGGER_EQ = 32,             /* BIGGER_EQ  */
  YYSYMBOL_BIGGER = 33,                /* BIGGER  */
  YYSYMBOL_SMALLER_EQ = 34,            /* SMALLER_EQ  */
  YYSYMBOL_SMALLER = 35,               /* SMALLER  */
  YYSYMBOL_MINUS = 36,                 /* MINUS  */
  YYSYMBOL_NOT = 37,                   /* NOT  */
  YYSYMBOL_NOT_EQ = 38,                /* NOT_EQ  */
  YYSYMBOL_OR = 39,                    /* OR  */
  YYSYMBOL_PLUS = 40,                  /* PLUS  */
  YYSYMBOL_MUL = 41,                   /* MUL  */
  YYSYMBOL_ADDRESS_OP = 42,            /* ADDRESS_OP  */
  YYSYMBOL_DEREFERENCE = 43,           /* DEREFERENCE  */
  YYSYMBOL_HEX_VAL = 44,               /* HEX_VAL  */
  YYSYMBOL_STRING_VAL = 45,            /* STRING_VAL  */
  YYSYMBOL_IF = 46,                    /* IF  */
  YYSYMBOL_ELSE = 47,                  /* ELSE  */
  YYSYMBOL_STRING = 48,                /* STRING  */
  YYSYMBOL_FOR = 49,                   /* FOR  */
  YYSYMBOL_INCREM = 50,                /* INCREM  */
  YYSYMBOL_DECREM = 51,                /* DECREM  */
  YYSYMBOL_WHILE = 52,                 /* WHILE  */
  YYSYMBOL_53_ = 53,                   /* '('  */
  YYSYMBOL_54_ = 54,                   /* ')'  */
  YYSYMBOL_55_ = 55,                   /* ':'  */
  YYSYMBOL_56_ = 56,                   /* '{'  */
  YYSYMBOL_57_ = 57,                   /* '}'  */
  YYSYMBOL_58_ = 58,                   /* ';'  */
  YYSYMBOL_59_ = 59,                   /* ','  */
  YYSYMBOL_60_ = 60,                   /* '['  */
  YYSYMBOL_61_ = 61,                   /* ']'  */
  YYSYMBOL_62_ = 62,                   /* '|'  */
  YYSYMBOL_63_ = 63,                   /* '='  */
  YYSYMBOL_64_ = 64,                   /* '*'  */
  YYSYMBOL_YYACCEPT = 65,              /* $accept  */
  YYSYMBOL_start = 66,                 /* start  */
  YYSYMBOL_main = 67,                  /* main  */
  YYSYMBOL_functions = 68,             /* functions  */
  YYSYMBOL_function = 69,              /* function  */
  YYSYMBOL_var_types = 70,             /* var_types  */
  YYSYMBOL_var_static = 71,            /* var_static  */
  YYSYMBOL_main_func = 72,             /* main_func  */
  YYSYMBOL_var_start = 73,             /* var_start  */
  YYSYMBOL_parameter_list = 74,        /* parameter_list  */
  YYSYMBOL_pdecleration = 75,          /* pdecleration  */
  YYSYMBOL_identifiers = 76,           /* identifiers  */
  YYSYMBOL_next_identifier = 77,       /* next_identifier  */
  YYSYMBOL_func_body = 78,             /* func_body  */
  YYSYMBOL_func_body_static = 79,      /* func_body_static  */
  YYSYMBOL_const_value = 80,           /* const_value  */
  YYSYMBOL_integer = 81,               /* integer  */
  YYSYMBOL_expression = 82,            /* expression  */
  YYSYMBOL_expression_static = 83,     /* expression_static  */
  YYSYMBOL_op_unary = 84,              /* op_unary  */
  YYSYMBOL_statement = 85,             /* statement  */
  YYSYMBOL_statement_static = 86,      /* statement_static  */
  YYSYMBOL_assignment = 87,            /* assignment  */
  YYSYMBOL_assignment_static = 88,     /* assignment_static  */
  YYSYMBOL_lhs = 89,                   /* lhs  */
  YYSYMBOL_code_block = 90,            /* code_block  */
  YYSYMBOL_func_call = 91,             /* func_call  */
  YYSYMBOL_func_call_static = 92,      /* func_call_static  */
  YYSYMBOL_expressions = 93,           /* expressions  */
  YYSYMBOL_expressions_static = 94,    /* expressions_static  */
  YYSYMBOL_expressions_ne = 95,        /* expressions_ne  */
  YYSYMBOL_expressions_ne_static = 96, /* expressions_ne_static  */
  YYSYMBOL_if = 97,                    /* if  */
  YYSYMBOL_if_else = 98,               /* if_else  */
  YYSYMBOL_if_else_block = 99,         /* if_else_block  */
  YYSYMBOL_if_else_statement = 100,    /* if_else_statement  */
  YYSYMBOL_while = 101,                /* while  */
  YYSYMBOL_do_while = 102,             /* do_while  */
  YYSYMBOL_for = 103,                  /* for  */
  YYSYMBOL_update = 104,               /* update  */
  YYSYMBOL_statements = 105,           /* statements  */
  YYSYMBOL_statements_static = 106,    /* statements_static  */
  YYSYMBOL_statements_ne = 107,        /* statements_ne  */
  YYSYMBOL_statements_ne_static = 108, /* statements_ne_static  */
  YYSYMBOL_variable_declaration = 109, /* variable_declaration  */
  YYSYMBOL_str_declaration = 110,      /* str_declaration  */
  YYSYMBOL_integer_value = 111,        /* integer_value  */
  YYSYMBOL_variable_ass = 112,         /* variable_ass  */
  YYSYMBOL_type = 113,                 /* type  */
  YYSYMBOL_var_declr = 114,            /* var_declr  */
  YYSYMBOL_var_declr_ne = 115          /* var_declr_ne  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;

#ifdef short
#undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
#include <limits.h> /* INFRINGES ON USER NAME SPACE */
#if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#define YY_STDINT_H
#endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
#undef UINT_LEAST8_MAX
#undef UINT_LEAST16_MAX
#define UINT_LEAST8_MAX 255
#define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
#if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#define YYPTRDIFF_T __PTRDIFF_TYPE__
#define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
#elif defined PTRDIFF_MAX
#ifndef ptrdiff_t
#include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#endif
#define YYPTRDIFF_T ptrdiff_t
#define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
#else
#define YYPTRDIFF_T long
#define YYPTRDIFF_MAXIMUM LONG_MAX
#endif
#endif

#ifndef YYSIZE_T
#ifdef __SIZE_TYPE__
#define YYSIZE_T __SIZE_TYPE__
#elif defined size_t
#define YYSIZE_T size_t
#elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#define YYSIZE_T size_t
#else
#define YYSIZE_T unsigned
#endif
#endif

#define YYSIZE_MAXIMUM                               \
  YY_CAST(YYPTRDIFF_T,                               \
          (YYPTRDIFF_MAXIMUM < YY_CAST(YYSIZE_T, -1) \
               ? YYPTRDIFF_MAXIMUM                   \
               : YY_CAST(YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST(YYPTRDIFF_T, sizeof(X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
#if defined YYENABLE_NLS && YYENABLE_NLS
#if ENABLE_NLS
#include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#define YY_(Msgid) dgettext("bison-runtime", Msgid)
#endif
#endif
#ifndef YY_
#define YY_(Msgid) Msgid
#endif
#endif

#ifndef YY_ATTRIBUTE_PURE
#if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_PURE __attribute__((__pure__))
#else
#define YY_ATTRIBUTE_PURE
#endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
#if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_UNUSED __attribute__((__unused__))
#else
#define YY_ATTRIBUTE_UNUSED
#endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if !defined lint || defined __GNUC__
#define YY_USE(E) ((void)(E))
#else
#define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && !defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
#if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
  _Pragma("GCC diagnostic push")            \
      _Pragma("GCC diagnostic ignored \"-Wuninitialized\"")
#else
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                 \
  _Pragma("GCC diagnostic push")                            \
      _Pragma("GCC diagnostic ignored \"-Wuninitialized\"") \
          _Pragma("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
#endif
#define YY_IGNORE_MAYBE_UNINITIALIZED_END \
  _Pragma("GCC diagnostic pop")
#else
#define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
#define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && !defined __ICC && 6 <= __GNUC__
#define YY_IGNORE_USELESS_CAST_BEGIN \
  _Pragma("GCC diagnostic push")     \
      _Pragma("GCC diagnostic ignored \"-Wuseless-cast\"")
#define YY_IGNORE_USELESS_CAST_END \
  _Pragma("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_END
#endif

#define YY_ASSERT(E) ((void)(0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

#ifdef YYSTACK_USE_ALLOCA
#if YYSTACK_USE_ALLOCA
#ifdef __GNUC__
#define YYSTACK_ALLOC __builtin_alloca
#elif defined __BUILTIN_VA_ARG_INCR
#include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#elif defined _AIX
#define YYSTACK_ALLOC __alloca
#elif defined _MSC_VER
#include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#define alloca _alloca
#else
#define YYSTACK_ALLOC alloca
#if !defined _ALLOCA_H && !defined EXIT_SUCCESS
#include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
/* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
#endif
#endif
#endif
#endif

#ifdef YYSTACK_ALLOC
/* Pacify GCC's 'empty if-body' warning.  */
#define YYSTACK_FREE(Ptr) \
  do                      \
  { /* empty */           \
    ;                     \
  } while (0)
#ifndef YYSTACK_ALLOC_MAXIMUM
/* The OS might guarantee only one guard page at the bottom of the stack,
   and a page size can be as small as 4096 bytes.  So we cannot safely
   invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
   to allow for a few compiler-allocated temporary stack slots.  */
#define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#endif
#else
#define YYSTACK_ALLOC YYMALLOC
#define YYSTACK_FREE YYFREE
#ifndef YYSTACK_ALLOC_MAXIMUM
#define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#endif
#if (defined __cplusplus && !defined EXIT_SUCCESS && !((defined YYMALLOC || defined malloc) && (defined YYFREE || defined free)))
#include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
#endif
#ifndef YYMALLOC
#define YYMALLOC malloc
#if !defined malloc && !defined EXIT_SUCCESS
void *malloc(YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#endif
#endif
#ifndef YYFREE
#define YYFREE free
#if !defined free && !defined EXIT_SUCCESS
void free(void *); /* INFRINGES ON USER NAME SPACE */
#endif
#endif
#endif
#endif /* !defined yyoverflow */

#if (!defined yyoverflow && (!defined __cplusplus || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
#define YYSTACK_GAP_MAXIMUM (YYSIZEOF(union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
#define YYSTACK_BYTES(N) \
  ((N) * (YYSIZEOF(yy_state_t) + YYSIZEOF(YYSTYPE)) + YYSTACK_GAP_MAXIMUM)

#define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
#define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
  do                                                                   \
  {                                                                    \
    YYPTRDIFF_T yynewbytes;                                            \
    YYCOPY(&yyptr->Stack_alloc, Stack, yysize);                        \
    Stack = &yyptr->Stack_alloc;                                       \
    yynewbytes = yystacksize * YYSIZEOF(*Stack) + YYSTACK_GAP_MAXIMUM; \
    yyptr += yynewbytes / YYSIZEOF(*yyptr);                            \
  } while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
#ifndef YYCOPY
#if defined __GNUC__ && 1 < __GNUC__
#define YYCOPY(Dst, Src, Count) \
  __builtin_memcpy(Dst, Src, YY_CAST(YYSIZE_T, (Count)) * sizeof(*(Src)))
#else
#define YYCOPY(Dst, Src, Count)         \
  do                                    \
  {                                     \
    YYPTRDIFF_T yyi;                    \
    for (yyi = 0; yyi < (Count); yyi++) \
      (Dst)[yyi] = (Src)[yyi];          \
  } while (0)
#endif
#endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL 8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST 1310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS 65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS 51
/* YYNRULES -- Number of rules.  */
#define YYNRULES 192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES 410

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK 307

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                            \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                 \
       ? YY_CAST(yysymbol_kind_t, yytranslate[YYX]) \
       : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
    {
        0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        53, 54, 64, 2, 59, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 55, 58,
        2, 63, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 60, 2, 61, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 56, 62, 57, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
        2, 2, 2, 2, 2, 2, 1, 2, 3, 4,
        5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
        15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
        25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
        35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
        45, 46, 47, 48, 49, 50, 51, 52};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
    {
        0, 76, 76, 77, 78, 79, 82, 88, 94, 95,
        98, 103, 108, 113, 120, 121, 122, 123, 124, 125,
        126, 127, 128, 129, 133, 136, 138, 139, 143, 144,
        147, 148, 151, 152, 155, 156, 159, 160, 161, 162,
        165, 166, 167, 168, 172, 173, 174, 175, 176, 177,
        178, 179, 180, 181, 182, 183, 186, 187, 188, 189,
        190, 191, 192, 193, 195, 196, 197, 198, 199, 200,
        201, 202, 203, 204, 205, 206, 207, 208, 209, 210,
        211, 212, 213, 214, 215, 217, 218, 219, 220, 221,
        222, 223, 224, 225, 226, 227, 228, 229, 230, 231,
        232, 233, 234, 235, 236, 237, 239, 240, 241, 244,
        245, 246, 247, 248, 249, 250, 251, 254, 255, 256,
        257, 258, 259, 260, 261, 263, 264, 267, 287, 290,
        291, 292, 295, 298, 310, 323, 337, 348, 360, 373,
        387, 401, 402, 405, 406, 409, 410, 413, 414, 417,
        418, 421, 423, 425, 427, 430, 431, 432, 433, 436,
        437, 438, 441, 444, 447, 450, 451, 454, 455, 457,
        458, 460, 461, 464, 465, 468, 469, 470, 471, 474,
        479, 483, 488, 489, 490, 491, 494, 510, 530, 533,
        534, 537, 538};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST(yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name(yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
    {
        "\"end of file\"", "error", "\"invalid token\"", "MAIN", "INT",
        "INTPTR", "CHAR", "VOID", "CHARPTR", "CHAR_VAL", "FLOAT", "FLOAT_VAL",
        "FLOATPTR", "DOUBLE", "DOUBLE_VAL", "DOUBLEPTR", "BOOLEAN", "TRUE",
        "FALSE", "VAR", "PUBLIC", "PRIVATE", "STATIC", "RETURN", "ID", "INT_VAL",
        "NONE", "DO", "ARG_OP", "AND", "DIV", "EQUAL", "BIGGER_EQ", "BIGGER",
        "SMALLER_EQ", "SMALLER", "MINUS", "NOT", "NOT_EQ", "OR", "PLUS", "MUL",
        "ADDRESS_OP", "DEREFERENCE", "HEX_VAL", "STRING_VAL", "IF", "ELSE",
        "STRING", "FOR", "INCREM", "DECREM", "WHILE", "'('", "')'", "':'", "'{'",
        "'}'", "';'", "','", "'['", "']'", "'|'", "'='", "'*'", "$accept",
        "start", "main", "functions", "function", "var_types", "var_static",
        "main_func", "var_start", "parameter_list", "pdecleration",
        "identifiers", "next_identifier", "func_body", "func_body_static",
        "const_value", "integer", "expression", "expression_static", "op_unary",
        "statement", "statement_static", "assignment", "assignment_static",
        "lhs", "code_block", "func_call", "func_call_static", "expressions",
        "expressions_static", "expressions_ne", "expressions_ne_static", "if",
        "if_else", "if_else_block", "if_else_statement", "while", "do_while",
        "for", "update", "statements", "statements_static", "statements_ne",
        "statements_ne_static", "variable_declaration", "str_declaration",
        "integer_value", "variable_ass", "type", "var_declr", "var_declr_ne", YY_NULLPTR};

static const char *
yysymbol_name(yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-331)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-141)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
    {
        88, -331, -331, 29, 88, 88, -331, 1294, -331, 88,
        1294, -331, -331, -331, -331, -331, -331, -331, -331, -331,
        -331, -331, -331, 35, 11, -331, 23, 47, 162, 85,
        1294, 139, 61, 220, -331, 278, 118, 233, 98, 160,
        306, 1239, 233, 98, 160, -331, 154, 1294, 242, 98,
        200, -331, 212, -5, 222, -331, 233, 98, -331, 215,
        232, -331, 98, -331, 247, 251, -331, 212, -331, -21,
        257, 254, 265, 271, -5, 303, -331, 273, 279, -331,
        -331, -331, -331, -331, -331, 321, 212, -331, 322, -331,
        300, 297, 98, -331, 98, 315, 825, 339, 436, 345,
        311, 729, -5, 729, 0, 729, 323, 212, -331, -331,
        360, 729, -331, 222, 98, -331, 324, 825, -331, 17,
        -5, -331, 325, 316, -331, -331, -331, -331, -331, -331,
        359, 825, 204, 329, 331, -331, -331, -331, 150, 236,
        -331, 116, 334, 729, -331, -331, -331, -331, -331, 128,
        -331, -331, 268, -331, 269, 379, -331, -331, 729, 348,
        729, -331, -331, 1230, 729, 344, -331, 354, 350, 927,
        357, 1131, 361, 362, 365, 1148, -331, -331, 178, -331,
        1230, 977, -331, 366, -331, 394, 401, 373, -331, 442,
        770, -331, -331, 873, -331, -331, -331, -331, -331, -331,
        436, 436, 436, 214, 998, 729, -331, -331, -331, -331,
        -331, 1165, -331, 889, 729, 729, 729, 729, 729, 729,
        729, 729, 729, 729, 729, 729, 1230, 407, 374, 729,
        -331, 381, 79, 729, 483, 212, 524, -331, -331, 770,
        169, 410, 729, 378, 729, 386, 389, 1243, -331, 729,
        385, -331, 395, 403, -331, 196, -331, -331, 400, -331,
        -331, 298, 312, -331, 405, -331, -331, -331, -331, 242,
        424, -331, 940, -331, -331, 870, -331, 914, 156, 156,
        156, 156, 74, 522, 1256, 74, -331, 417, -331, 1230,
        418, 729, -3, -331, 426, 1011, -331, 416, 421, 419,
        565, 729, 423, 1182, -331, 902, 729, 729, 729, 729,
        729, 729, 729, 729, 729, 729, 729, 729, 1032, 461,
        430, 770, 606, -331, -331, -331, -331, -331, 465, -331,
        432, 428, 647, 729, 1045, 729, 5, 439, 794, 0,
        26, 440, -331, 441, 1243, 964, 444, 445, 1110, 447,
        827, 274, 309, 399, 481, 56, 358, 1098, 71, 452,
        459, -331, -331, 455, 460, 453, -331, -331, 457, 464,
        1199, -331, 1066, 729, 479, -3, -331, 466, 476, 188,
        473, 113, 688, 781, 474, -331, 482, 485, -331, 1079,
        824, 480, 729, 212, 486, 492, 493, -331, -331, -331,
        -3, -331, -331, 1230, -331, 495, 501, 510, -331, -331};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
    {
        0, 26, 27, 0, 3, 2, 8, 0, 1, 5,
        0, 4, 9, 16, 17, 14, 23, 15, 18, 20,
        19, 21, 22, 0, 0, 25, 0, 0, 0, 0,
        0, 0, 0, 0, 28, 0, 0, 0, 189, 0,
        0, 0, 0, 189, 0, 24, 0, 0, 0, 189,
        0, 191, 167, 190, 33, 31, 0, 189, 29, 0,
        0, 30, 189, 188, 0, 0, 178, 167, 13, 129,
        0, 0, 0, 0, 189, 0, 171, 0, 0, 110,
        112, 111, 113, 114, 115, 39, 168, 192, 0, 32,
        0, 0, 189, 7, 189, 0, 169, 0, 0, 38,
        0, 0, 189, 0, 0, 0, 0, 167, 130, 109,
        0, 0, 172, 35, 189, 12, 0, 169, 11, 129,
        189, 173, 0, 0, 118, 120, 119, 121, 122, 123,
        43, 170, 0, 0, 0, 56, 57, 63, 0, 0,
        62, 182, 0, 0, 44, 47, 48, 53, 54, 64,
        46, 55, 108, 107, 0, 0, 106, 45, 0, 0,
        0, 67, 65, 145, 0, 0, 84, 0, 142, 0,
        0, 0, 129, 0, 0, 0, 116, 132, 64, 126,
        125, 0, 34, 0, 6, 42, 0, 0, 117, 0,
        0, 174, 176, 0, 177, 175, 59, 61, 58, 60,
        0, 0, 0, 0, 0, 0, 52, 50, 51, 49,
        81, 0, 135, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
        131, 0, 0, 0, 0, 0, 0, 37, 10, 0,
        64, 0, 0, 0, 0, 67, 65, 0, 147, 0,
        0, 105, 0, 144, 124, 64, 128, 127, 0, 48,
        46, 0, 0, 45, 187, 185, 183, 184, 180, 0,
        0, 36, 0, 82, 83, 68, 79, 69, 73, 72,
        74, 75, 77, 70, 71, 76, 78, 0, 134, 146,
        0, 0, 189, 159, 150, 0, 162, 0, 0, 0,
        0, 0, 81, 0, 139, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
        0, 0, 0, 41, 52, 50, 51, 49, 0, 181,
        0, 66, 0, 0, 161, 0, 0, 0, 0, 166,
        135, 0, 40, 0, 145, 0, 82, 83, 68, 79,
        69, 73, 72, 74, 75, 77, 70, 71, 76, 78,
        0, 138, 148, 0, 0, 0, 186, 179, 0, 0,
        0, 160, 158, 0, 149, 189, 152, 0, 0, 134,
        135, 66, 0, 135, 0, 136, 0, 0, 157, 0,
        0, 0, 0, 0, 0, 0, 137, 133, 163, 155,
        189, 154, 153, 165, 164, 136, 0, 0, 137, 151};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
    {
        -331, -331, 564, 6, 2, 16, -9, -331, 219, -331,
        529, -31, 458, 31, 41, -168, -79, -16, -185, -159,
        -85, 449, 468, -331, -52, -62, -50, 9, -233, -313,
        -331, -331, 28, 34, -308, -330, 62, 129, 134, -331,
        -26, 456, -331, -331, 528, 318, 158, 256, -331, -1,
        -331};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
    {
        0, 3, 4, 49, 6, 32, 46, 27, 10, 33,
        34, 55, 89, 50, 95, 161, 162, 247, 248, 164,
        76, 121, 77, 122, 165, 336, 166, 251, 167, 252,
        168, 253, 80, 81, 337, 294, 82, 83, 84, 378,
        85, 130, 86, 131, 51, 66, 142, 134, 64, 107,
        53};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
    {
        78, 112, 79, 298, 257, 258, 5, 12, 376, 364,
        9, 12, 106, 61, 47, 78, 47, 79, 245, 141,
        335, 245, 245, 23, 172, 264, 24, 249, 373, 8,
        249, 249, 100, 59, 78, 26, 79, 52, 25, 101,
        170, 99, 52, 48, 123, 48, 36, 90, 67, -136,
        -136, 12, 174, -136, 299, 78, 52, 79, 187, 26,
        401, 96, 176, 63, 75, 123, 133, 391, 94, 395,
        186, 245, -136, -136, 60, -136, 28, 101, -136, 123,
        249, 177, -136, -136, 163, 169, 215, 171, 91, 175,
        -136, 96, 407, 117, 180, 181, 12, 225, 94, 369,
        29, 215, 291, 69, 215, 124, 70, 246, 1, 2,
        246, 246, 225, 96, -98, 225, 39, 47, 1, 2,
        94, 141, 141, 141, 125, 71, 124, 204, 72, -97,
        126, 73, 245, 116, 250, 292, 362, 250, 250, 35,
        124, 249, 211, 75, 213, 125, 48, 293, 226, 369,
        296, 126, 200, 245, 245, 183, 201, 202, 127, 125,
        246, 196, 249, 249, 197, 126, 13, 14, 15, 16,
        17, -87, 18, 44, 19, 20, -131, 21, 22, 127,
        78, 100, 79, 78, 54, 79, 215, 250, 205, 272,
        30, -129, 221, 127, 37, 38, 224, 225, 275, 276,
        277, 278, 279, 280, 281, 282, 283, 284, 285, 286,
        62, -133, -133, 289, 245, -133, 31, 295, 180, 7,
        163, 246, 300, 249, 7, 128, 303, -85, 305, 301,
        129, 236, -129, 318, -133, -133, 69, -133, 205, 70,
        -133, -129, 246, 246, -133, -133, 128, 198, 250, 322,
        199, 129, -133, 293, -85, 45, 301, 68, 71, -129,
        128, 72, 192, 88, 73, 129, 65, 193, 74, 250,
        250, 92, 268, 269, 40, 334, 75, 270, 41, 206,
        208, 88, 207, 209, 344, 345, 78, 377, 79, 93,
        348, 349, 350, 351, 352, 353, 354, 355, 356, 357,
        358, 359, 97, 246, 215, 293, 344, 103, 404, 324,
        221, 98, 325, 102, 224, 225, 163, 370, 104, 372,
        144, 135, 145, 326, 105, 146, 327, 108, 147, 148,
        250, 109, -94, 42, 43, 149, 150, 151, 78, 215,
        79, 78, 110, 79, 111, 221, 113, 152, 153, 224,
        225, 154, 155, 156, 115, 157, 114, 389, 265, 266,
        267, 56, 57, 132, 158, 159, 344, -93, 143, 144,
        135, 145, 118, 160, 146, 75, 403, 147, 148, 189,
        176, 184, 190, 188, 178, 150, 151, 194, 215, 195,
        217, 218, 219, 220, 221, 203, 152, 153, 224, 225,
        154, 155, 156, 210, 157, 179, 212, 227, 228, 229,
        144, 135, 145, 158, 231, 146, -91, 239, 147, 148,
        233, 101, 160, 238, 75, 240, 150, 151, 234, 215,
        254, 287, 288, 290, 302, 221, 304, 152, 153, 224,
        225, 154, 241, 156, -88, 157, 135, -86, 319, 320,
        136, 144, 135, 145, 242, 243, 146, -95, 323, 147,
        148, 137, 321, 244, 328, 75, 255, 150, 151, 330,
        332, 333, 138, 338, 340, 341, 139, 342, 152, 153,
        140, -102, 154, 241, 156, 360, 157, 256, 361, 365,
        367, -131, 144, 135, 145, 242, 374, 146, 379, 380,
        147, 148, -103, -104, 244, -100, 75, 149, 150, 151,
        -99, 215, 382, 383, 384, 385, 193, 221, 386, 152,
        153, 224, 225, 154, 155, 156, 390, 157, 179, 392,
        393, -139, 396, 144, 135, 145, 158, 402, 146, -96,
        397, 147, 148, 398, 405, 160, 406, 75, 149, 150,
        151, -138, 215, -140, 217, 218, 219, 220, 221, 408,
        152, 153, 224, 225, 154, 155, 156, 409, 157, 11,
        58, 182, 173, 185, 144, 135, 145, 158, 297, 146,
        191, 87, 147, 148, 366, 0, 160, 329, 75, 240,
        150, 151, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 152, 153, 0, 0, 154, 241, 156, 0, 157,
        0, 0, 0, 0, 0, 144, 135, 145, 242, 343,
        146, 0, 0, 147, 148, 0, 0, 244, 0, 75,
        240, 150, 151, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 152, 153, 0, 0, 154, 241, 156, 0,
        157, 0, 0, 0, 0, 0, 144, 135, 145, 242,
        363, 146, 0, 0, 147, 148, 0, 0, 244, 0,
        75, 149, 150, 151, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 152, 153, 0, 0, 154, 155, 156,
        0, 157, 0, 0, 0, 0, 0, 144, 135, 145,
        158, 368, 146, 0, 0, 147, 148, 0, 0, 160,
        0, 75, 240, 150, 151, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 152, 153, 0, 0, 154, 241,
        156, 0, 157, 0, 0, 0, 0, 0, 144, 135,
        145, 242, 394, 146, 0, 0, 147, 148, 0, 0,
        244, 0, 75, 149, 150, 151, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 152, 153, 0, 0, 154,
        155, 156, 0, 157, 0, 0, 0, 0, 0, 144,
        135, 145, 158, 0, 146, 0, 0, 147, 148, 0,
        0, 160, 0, 75, 240, 150, 151, 0, 0, 0,
        0, 0, 0, 0, -140, -140, 152, 153, -140, 0,
        154, 241, 156, 0, 157, 0, 0, 291, 69, 0,
        0, 70, 0, 242, 0, 0, 0, -140, 0, 0,
        -140, 0, 244, -140, 75, 0, 0, -140, -140, -139,
        71, 0, 0, 72, 0, -140, 73, 291, 69, 119,
        375, 70, 70, 0, 0, 0, 0, 215, 75, 217,
        218, 219, 220, 221, 0, 222, 0, 224, 225, 0,
        71, 71, 0, 72, 72, 0, 73, 73, 0, 0,
        400, 120, 144, 0, 145, -90, 0, 259, 75, 75,
        147, 148, 0, 0, 0, 0, 0, 0, 260, 151,
        215, 216, 217, 218, 219, 220, 221, 0, 222, 261,
        224, 225, 0, 262, 0, 0, 0, 263, 214, 215,
        216, 217, 218, 219, 220, 221, 0, 222, 223, 224,
        225, 214, 215, 216, 217, 218, 219, 220, 221, 0,
        222, 223, 224, 225, 215, 0, 217, 218, 219, 220,
        221, 274, 222, 0, 224, 225, 214, 215, 216, 217,
        218, 219, 220, 221, 347, 222, 223, 224, 225, 214,
        215, 216, 217, 218, 219, 220, 221, 0, 222, 223,
        224, 225, 0, 0, 0, 0, 0, 0, 230, 0,
        0, 0, 0, 214, 215, 216, 217, 218, 219, 220,
        221, 331, 222, 223, 224, 225, 214, 215, 216, 217,
        218, 219, 220, 221, 0, 222, 223, 224, 225, 0,
        0, 0, 0, 0, 0, 381, 0, 214, 215, 216,
        217, 218, 219, 220, 221, 237, 222, 223, 224, 225,
        214, 215, 216, 217, 218, 219, 220, 221, 0, 222,
        223, 224, 225, 0, 0, 0, 271, 0, 0, 0,
        0, 214, 215, 216, 217, 218, 219, 220, 221, 339,
        222, 223, 224, 225, 214, 215, 216, 217, 218, 219,
        220, 221, 0, 222, 223, 224, 225, 0, 0, 0,
        -101, 0, 0, 0, 0, 214, 215, 216, 217, 218,
        219, 220, 221, 371, 222, 223, 224, 225, 214, 215,
        216, 217, 218, 219, 220, 221, 0, 222, 223, 224,
        225, 0, 0, 0, 388, 0, 0, 214, 215, 216,
        217, 218, 219, 220, 221, 0, 222, 399, 224, 225,
        215, 216, 217, 218, 219, 220, 221, 0, 222, 0,
        224, 225, 0, 0, 0, 0, -92, 0, 0, 0,
        214, 215, 216, 217, 218, 219, 220, 221, -89, 222,
        223, 224, 225, 0, 0, 0, 0, 214, 215, 216,
        217, 218, 219, 220, 221, 232, 222, 223, 224, 225,
        0, 0, 0, 0, 214, 215, 216, 217, 218, 219,
        220, 221, 235, 222, 223, 224, 225, 0, 0, 0,
        0, 214, 215, 216, 217, 218, 219, 220, 221, 273,
        222, 223, 224, 225, 0, 0, 0, 0, 214, 215,
        216, 217, 218, 219, 220, 221, 346, 222, 223, 224,
        225, 0, 0, 13, 14, 15, 16, 17, 0, 18,
        0, 19, 20, 387, 21, 22, 0, 0, 0, 214,
        215, 216, 217, 218, 219, 220, 221, 30, 222, 223,
        224, 225, 306, 307, 308, 309, 310, 311, 312, 313,
        0, 314, 315, 316, 317, 214, 215, 216, 217, 218,
        219, 220, 221, 0, 222, 0, 224, 225, 13, 14,
        15, 16, 17, 0, 18, 0, 19, 20, 0, 21,
        22};

static const yytype_int16 yycheck[] =
    {
        52, 86, 52, 236, 189, 190, 0, 5, 338, 322,
        4, 9, 74, 44, 19, 67, 19, 67, 186, 98,
        23, 189, 190, 7, 24, 193, 10, 186, 23, 0,
        189, 190, 53, 42, 86, 24, 86, 38, 3, 60,
        102, 67, 43, 48, 96, 48, 30, 56, 49, 23,
        24, 49, 104, 27, 239, 107, 57, 107, 120, 24,
        390, 62, 57, 47, 64, 117, 97, 375, 62, 382,
        53, 239, 46, 47, 43, 49, 53, 60, 52, 131,
        239, 107, 56, 57, 100, 101, 30, 103, 57, 105,
        64, 92, 400, 94, 110, 111, 94, 41, 92, 332,
        53, 30, 23, 24, 30, 96, 27, 186, 20, 21,
        189, 190, 41, 114, 58, 41, 55, 19, 20, 21,
        114, 200, 201, 202, 96, 46, 117, 143, 49, 58,
        96, 52, 300, 92, 186, 56, 321, 189, 190, 54,
        131, 300, 158, 64, 160, 117, 48, 232, 164, 382,
        235, 117, 36, 321, 322, 114, 40, 41, 96, 131,
        239, 11, 321, 322, 14, 131, 4, 5, 6, 7,
        8, 58, 10, 55, 12, 13, 63, 15, 16, 117,
        232, 53, 232, 235, 24, 235, 30, 239, 60, 205,
        28, 63, 36, 131, 55, 56, 40, 41, 214, 215,
        216, 217, 218, 219, 220, 221, 222, 223, 224, 225,
        56, 23, 24, 229, 382, 27, 54, 233, 234, 0,
        236, 300, 53, 382, 5, 96, 242, 58, 244, 60,
        96, 53, 63, 249, 46, 47, 24, 49, 60, 27,
        52, 63, 321, 322, 56, 57, 117, 11, 300, 53,
        14, 117, 64, 338, 58, 22, 60, 57, 46, 63,
        131, 49, 58, 59, 52, 131, 24, 63, 56, 321,
        322, 56, 58, 59, 54, 291, 64, 63, 58, 11,
        11, 59, 14, 14, 300, 301, 338, 339, 338, 57,
        306, 307, 308, 309, 310, 311, 312, 313, 314, 315,
        316, 317, 55, 382, 30, 390, 322, 53, 393, 11,
        36, 60, 14, 56, 40, 41, 332, 333, 53, 335,
        9, 10, 11, 11, 53, 14, 14, 24, 17, 18,
        382, 58, 58, 55, 56, 24, 25, 26, 390, 30,
        390, 393, 63, 393, 23, 36, 24, 36, 37, 40,
        41, 40, 41, 42, 57, 44, 56, 373, 200, 201,
        202, 55, 56, 24, 53, 54, 382, 58, 23, 9,
        10, 11, 57, 62, 14, 64, 392, 17, 18, 63,
        57, 57, 23, 58, 24, 25, 26, 58, 30, 58,
        32, 33, 34, 35, 36, 61, 36, 37, 40, 41,
        40, 41, 42, 24, 44, 45, 58, 63, 54, 59,
        9, 10, 11, 53, 57, 14, 58, 23, 17, 18,
        58, 60, 62, 57, 64, 24, 25, 26, 63, 30,
        57, 24, 58, 52, 24, 36, 58, 36, 37, 40,
        41, 40, 41, 42, 58, 44, 10, 58, 63, 54,
        14, 9, 10, 11, 53, 54, 14, 58, 58, 17,
        18, 25, 59, 62, 59, 64, 24, 25, 26, 45,
        53, 53, 36, 47, 58, 54, 40, 58, 36, 37,
        44, 58, 40, 41, 42, 24, 44, 45, 58, 24,
        58, 63, 9, 10, 11, 53, 57, 14, 58, 58,
        17, 18, 58, 58, 62, 58, 64, 24, 25, 26,
        58, 30, 53, 58, 54, 58, 63, 36, 54, 36,
        37, 40, 41, 40, 41, 42, 47, 44, 45, 63,
        54, 58, 58, 9, 10, 11, 53, 57, 14, 58,
        58, 17, 18, 58, 58, 62, 54, 64, 24, 25,
        26, 58, 30, 58, 32, 33, 34, 35, 36, 58,
        36, 37, 40, 41, 40, 41, 42, 57, 44, 5,
        41, 113, 104, 117, 9, 10, 11, 53, 54, 14,
        131, 53, 17, 18, 328, -1, 62, 269, 64, 24,
        25, 26, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, 36, 37, -1, -1, 40, 41, 42, -1, 44,
        -1, -1, -1, -1, -1, 9, 10, 11, 53, 54,
        14, -1, -1, 17, 18, -1, -1, 62, -1, 64,
        24, 25, 26, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, 36, 37, -1, -1, 40, 41, 42, -1,
        44, -1, -1, -1, -1, -1, 9, 10, 11, 53,
        54, 14, -1, -1, 17, 18, -1, -1, 62, -1,
        64, 24, 25, 26, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, 36, 37, -1, -1, 40, 41, 42,
        -1, 44, -1, -1, -1, -1, -1, 9, 10, 11,
        53, 54, 14, -1, -1, 17, 18, -1, -1, 62,
        -1, 64, 24, 25, 26, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, 36, 37, -1, -1, 40, 41,
        42, -1, 44, -1, -1, -1, -1, -1, 9, 10,
        11, 53, 54, 14, -1, -1, 17, 18, -1, -1,
        62, -1, 64, 24, 25, 26, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, 36, 37, -1, -1, 40,
        41, 42, -1, 44, -1, -1, -1, -1, -1, 9,
        10, 11, 53, -1, 14, -1, -1, 17, 18, -1,
        -1, 62, -1, 64, 24, 25, 26, -1, -1, -1,
        -1, -1, -1, -1, 23, 24, 36, 37, 27, -1,
        40, 41, 42, -1, 44, -1, -1, 23, 24, -1,
        -1, 27, -1, 53, -1, -1, -1, 46, -1, -1,
        49, -1, 62, 52, 64, -1, -1, 56, 57, 58,
        46, -1, -1, 49, -1, 64, 52, 23, 24, 24,
        56, 27, 27, -1, -1, -1, -1, 30, 64, 32,
        33, 34, 35, 36, -1, 38, -1, 40, 41, -1,
        46, 46, -1, 49, 49, -1, 52, 52, -1, -1,
        56, 56, 9, -1, 11, 58, -1, 14, 64, 64,
        17, 18, -1, -1, -1, -1, -1, -1, 25, 26,
        30, 31, 32, 33, 34, 35, 36, -1, 38, 36,
        40, 41, -1, 40, -1, -1, -1, 44, 29, 30,
        31, 32, 33, 34, 35, 36, -1, 38, 39, 40,
        41, 29, 30, 31, 32, 33, 34, 35, 36, -1,
        38, 39, 40, 41, 30, -1, 32, 33, 34, 35,
        36, 62, 38, -1, 40, 41, 29, 30, 31, 32,
        33, 34, 35, 36, 62, 38, 39, 40, 41, 29,
        30, 31, 32, 33, 34, 35, 36, -1, 38, 39,
        40, 41, -1, -1, -1, -1, -1, -1, 61, -1,
        -1, -1, -1, 29, 30, 31, 32, 33, 34, 35,
        36, 61, 38, 39, 40, 41, 29, 30, 31, 32,
        33, 34, 35, 36, -1, 38, 39, 40, 41, -1,
        -1, -1, -1, -1, -1, 61, -1, 29, 30, 31,
        32, 33, 34, 35, 36, 58, 38, 39, 40, 41,
        29, 30, 31, 32, 33, 34, 35, 36, -1, 38,
        39, 40, 41, -1, -1, -1, 58, -1, -1, -1,
        -1, 29, 30, 31, 32, 33, 34, 35, 36, 58,
        38, 39, 40, 41, 29, 30, 31, 32, 33, 34,
        35, 36, -1, 38, 39, 40, 41, -1, -1, -1,
        58, -1, -1, -1, -1, 29, 30, 31, 32, 33,
        34, 35, 36, 58, 38, 39, 40, 41, 29, 30,
        31, 32, 33, 34, 35, 36, -1, 38, 39, 40,
        41, -1, -1, -1, 58, -1, -1, 29, 30, 31,
        32, 33, 34, 35, 36, -1, 38, 58, 40, 41,
        30, 31, 32, 33, 34, 35, 36, -1, 38, -1,
        40, 41, -1, -1, -1, -1, 58, -1, -1, -1,
        29, 30, 31, 32, 33, 34, 35, 36, 58, 38,
        39, 40, 41, -1, -1, -1, -1, 29, 30, 31,
        32, 33, 34, 35, 36, 54, 38, 39, 40, 41,
        -1, -1, -1, -1, 29, 30, 31, 32, 33, 34,
        35, 36, 54, 38, 39, 40, 41, -1, -1, -1,
        -1, 29, 30, 31, 32, 33, 34, 35, 36, 54,
        38, 39, 40, 41, -1, -1, -1, -1, 29, 30,
        31, 32, 33, 34, 35, 36, 54, 38, 39, 40,
        41, -1, -1, 4, 5, 6, 7, 8, -1, 10,
        -1, 12, 13, 54, 15, 16, -1, -1, -1, 29,
        30, 31, 32, 33, 34, 35, 36, 28, 38, 39,
        40, 41, 29, 30, 31, 32, 33, 34, 35, 36,
        -1, 38, 39, 40, 41, 29, 30, 31, 32, 33,
        34, 35, 36, -1, 38, -1, 40, 41, 4, 5,
        6, 7, 8, -1, 10, -1, 12, 13, -1, 15,
        16};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
    {
        0, 20, 21, 66, 67, 68, 69, 73, 0, 68,
        73, 67, 69, 4, 5, 6, 7, 8, 10, 12,
        13, 15, 16, 70, 70, 3, 24, 72, 53, 53,
        28, 54, 70, 74, 75, 54, 70, 55, 56, 55,
        54, 58, 55, 56, 55, 22, 71, 19, 48, 68,
        78, 109, 114, 115, 24, 76, 55, 56, 75, 71,
        78, 76, 56, 70, 113, 24, 110, 114, 57, 24,
        27, 46, 49, 52, 56, 64, 85, 87, 89, 91,
        97, 98, 101, 102, 103, 105, 107, 109, 59, 77,
        71, 78, 56, 57, 68, 79, 114, 55, 60, 105,
        53, 60, 56, 53, 53, 53, 90, 114, 24, 58,
        63, 23, 85, 24, 56, 57, 79, 114, 57, 24,
        56, 86, 88, 89, 92, 97, 98, 101, 102, 103,
        106, 108, 24, 76, 112, 10, 14, 25, 36, 40,
        44, 81, 111, 23, 9, 11, 14, 17, 18, 24,
        25, 26, 36, 37, 40, 41, 42, 44, 53, 54,
        62, 80, 81, 82, 84, 89, 91, 93, 95, 82,
        90, 82, 24, 87, 89, 82, 57, 105, 24, 45,
        82, 82, 77, 79, 57, 106, 53, 90, 58, 63,
        23, 86, 58, 63, 58, 58, 11, 14, 11, 14,
        36, 40, 41, 61, 82, 60, 11, 14, 11, 14,
        24, 82, 58, 82, 29, 30, 31, 32, 33, 34,
        35, 36, 38, 39, 40, 41, 82, 63, 54, 59,
        61, 57, 54, 58, 63, 54, 53, 58, 57, 23,
        24, 41, 53, 54, 62, 80, 81, 82, 83, 84,
        89, 92, 94, 96, 57, 24, 45, 83, 83, 14,
        25, 36, 40, 44, 80, 111, 111, 111, 58, 59,
        63, 58, 82, 54, 62, 82, 82, 82, 82, 82,
        82, 82, 82, 82, 82, 82, 82, 24, 58, 82,
        52, 23, 56, 85, 100, 82, 85, 54, 93, 83,
        53, 60, 24, 82, 58, 82, 29, 30, 31, 32,
        33, 34, 35, 36, 38, 39, 40, 41, 82, 63,
        54, 59, 53, 58, 11, 14, 11, 14, 59, 110,
        45, 61, 53, 53, 82, 23, 90, 99, 47, 58,
        58, 54, 58, 54, 82, 82, 54, 62, 82, 82,
        82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
        24, 58, 83, 54, 94, 24, 112, 58, 54, 93,
        82, 58, 82, 23, 57, 56, 100, 89, 104, 58,
        58, 61, 53, 58, 54, 58, 54, 54, 58, 82,
        47, 99, 63, 54, 54, 94, 58, 58, 58, 58,
        56, 100, 57, 82, 85, 58, 54, 99, 58, 57};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
    {
        0, 65, 66, 66, 66, 66, 67, 67, 68, 68,
        69, 69, 69, 69, 70, 70, 70, 70, 70, 70,
        70, 70, 70, 70, 71, 72, 73, 73, 74, 74,
        75, 75, 76, 76, 77, 77, 78, 78, 78, 78,
        79, 79, 79, 79, 80, 80, 80, 80, 80, 80,
        80, 80, 80, 80, 80, 80, 81, 81, 81, 81,
        81, 81, 81, 81, 82, 82, 82, 82, 82, 82,
        82, 82, 82, 82, 82, 82, 82, 82, 82, 82,
        82, 82, 82, 82, 82, 83, 83, 83, 83, 83,
        83, 83, 83, 83, 83, 83, 83, 83, 83, 83,
        83, 83, 83, 83, 83, 83, 84, 84, 84, 85,
        85, 85, 85, 85, 85, 85, 85, 86, 86, 86,
        86, 86, 86, 86, 86, 87, 87, 88, 88, 89,
        89, 89, 90, 91, 91, 91, 91, 92, 92, 92,
        92, 93, 93, 94, 94, 95, 95, 96, 96, 97,
        97, 98, 98, 98, 98, 99, 99, 99, 99, 100,
        100, 100, 101, 102, 103, 104, 104, 105, 105, 106,
        106, 107, 107, 108, 108, 109, 109, 109, 109, 110,
        110, 110, 111, 111, 111, 111, 112, 112, 113, 114,
        114, 115, 115};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
    {
        0, 2, 1, 1, 2, 2, 10, 8, 1, 2,
        11, 10, 9, 8, 1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 3,
        4, 3, 2, 1, 3, 0, 6, 5, 3, 2,
        6, 5, 3, 2, 1, 1, 1, 1, 1, 2,
        2, 2, 2, 1, 1, 1, 1, 1, 2, 2,
        2, 2, 1, 1, 1, 1, 4, 1, 3, 3,
        3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
        2, 2, 3, 3, 1, 1, 1, 4, 1, 3,
        3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
        3, 2, 2, 3, 3, 1, 1, 1, 1, 2,
        1, 1, 1, 1, 1, 1, 3, 2, 1, 1,
        1, 1, 1, 1, 3, 3, 3, 3, 3, 1,
        2, 4, 2, 7, 5, 4, 6, 7, 5, 4,
        6, 0, 1, 0, 1, 1, 3, 1, 3, 7,
        5, 11, 7, 9, 9, 4, 1, 3, 2, 1,
        3, 2, 5, 9, 9, 3, 0, 0, 1, 0,
        1, 1, 2, 1, 2, 5, 5, 5, 2, 7,
        5, 6, 1, 3, 3, 3, 5, 3, 1, 0,
        1, 1, 2};

enum
{
  YYENOMEM = -2
};

#define yyerrok (yyerrstatus = 0)
#define yyclearin (yychar = YYEMPTY)

#define YYACCEPT goto yyacceptlab
#define YYABORT goto yyabortlab
#define YYERROR goto yyerrorlab
#define YYNOMEM goto yyexhaustedlab

#define YYRECOVERING() (!!yyerrstatus)

#define YYBACKUP(Token, Value)                      \
  do                                                \
    if (yychar == YYEMPTY)                          \
    {                                               \
      yychar = (Token);                             \
      yylval = (Value);                             \
      YYPOPSTACK(yylen);                            \
      yystate = *yyssp;                             \
      goto yybackup;                                \
    }                                               \
    else                                            \
    {                                               \
      yyerror(YY_("syntax error: cannot back up")); \
      YYERROR;                                      \
    }                                               \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* Enable debugging if requested.  */
#if YYDEBUG

#ifndef YYFPRINTF
#include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#define YYFPRINTF fprintf
#endif

#define YYDPRINTF(Args) \
  do                    \
  {                     \
    if (yydebug)        \
      YYFPRINTF Args;   \
  } while (0)

#define YY_SYMBOL_PRINT(Title, Kind, Value, Location) \
  do                                                  \
  {                                                   \
    if (yydebug)                                      \
    {                                                 \
      YYFPRINTF(stderr, "%s ", Title);                \
      yy_symbol_print(stderr,                         \
                      Kind, Value);                   \
      YYFPRINTF(stderr, "\n");                        \
    }                                                 \
  } while (0)

/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print(FILE *yyo,
                      yysymbol_kind_t yykind, YYSTYPE const *const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE(yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE(yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print(FILE *yyo,
                yysymbol_kind_t yykind, YYSTYPE const *const yyvaluep)
{
  YYFPRINTF(yyo, "%s %s (",
            yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name(yykind));

  yy_symbol_value_print(yyo, yykind, yyvaluep);
  YYFPRINTF(yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print(yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF(stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
  {
    int yybot = *yybottom;
    YYFPRINTF(stderr, " %d", yybot);
  }
  YYFPRINTF(stderr, "\n");
}

#define YY_STACK_PRINT(Bottom, Top)    \
  do                                   \
  {                                    \
    if (yydebug)                       \
      yy_stack_print((Bottom), (Top)); \
  } while (0)

/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print(yy_state_t *yyssp, YYSTYPE *yyvsp,
                int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF(stderr, "Reducing stack by rule %d (line %d):\n",
            yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
  {
    YYFPRINTF(stderr, "   $%d = ", yyi + 1);
    yy_symbol_print(stderr,
                    YY_ACCESSING_SYMBOL(+yyssp[yyi + 1 - yynrhs]),
                    &yyvsp[(yyi + 1) - (yynrhs)]);
    YYFPRINTF(stderr, "\n");
  }
}

#define YY_REDUCE_PRINT(Rule)              \
  do                                       \
  {                                        \
    if (yydebug)                           \
      yy_reduce_print(yyssp, yyvsp, Rule); \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
#define YYDPRINTF(Args) ((void)0)
#define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
#define YY_STACK_PRINT(Bottom, Top)
#define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
#define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct(const char *yymsg,
           yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE(yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT(yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE(yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;

/*----------.
| yyparse.  |
`----------*/

int yyparse(void)
{
  yy_state_fast_t yystate = 0;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus = 0;

  /* Refer to the stacks through separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* Their size.  */
  YYPTRDIFF_T yystacksize = YYINITDEPTH;

  /* The state stack: array, bottom, top.  */
  yy_state_t yyssa[YYINITDEPTH];
  yy_state_t *yyss = yyssa;
  yy_state_t *yyssp = yyss;

  /* The semantic value stack: array, bottom, top.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#define YYPOPSTACK(N) (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF((stderr, "Entering state %d\n", yystate));
  YY_ASSERT(0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST(yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT(yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
  {
    /* Get the current used size of the three stacks, in elements.  */
    YYPTRDIFF_T yysize = yyssp - yyss + 1;

#if defined yyoverflow
    {
      /* Give user a chance to reallocate the stack.  Use copies of
         these so that the &'s don't force the real ones into
         memory.  */
      yy_state_t *yyss1 = yyss;
      YYSTYPE *yyvs1 = yyvs;

      /* Each stack pointer address is followed by the size of the
         data in use in that stack, in bytes.  This used to be a
         conditional around just the two extra args, but that might
         be undefined if yyoverflow is a macro.  */
      yyoverflow(YY_("memory exhausted"),
                 &yyss1, yysize * YYSIZEOF(*yyssp),
                 &yyvs1, yysize * YYSIZEOF(*yyvsp),
                 &yystacksize);
      yyss = yyss1;
      yyvs = yyvs1;
    }
#else /* defined YYSTACK_RELOCATE */
    /* Extend the stack our own way.  */
    if (YYMAXDEPTH <= yystacksize)
      YYNOMEM;
    yystacksize *= 2;
    if (YYMAXDEPTH < yystacksize)
      yystacksize = YYMAXDEPTH;

    {
      yy_state_t *yyss1 = yyss;
      union yyalloc *yyptr =
          YY_CAST(union yyalloc *,
                  YYSTACK_ALLOC(YY_CAST(YYSIZE_T, YYSTACK_BYTES(yystacksize))));
      if (!yyptr)
        YYNOMEM;
      YYSTACK_RELOCATE(yyss_alloc, yyss);
      YYSTACK_RELOCATE(yyvs_alloc, yyvs);
#undef YYSTACK_RELOCATE
      if (yyss1 != yyssa)
        YYSTACK_FREE(yyss1);
    }
#endif

    yyssp = yyss + yysize - 1;
    yyvsp = yyvs + yysize - 1;

    YY_IGNORE_USELESS_CAST_BEGIN
    YYDPRINTF((stderr, "Stack size increased to %ld\n",
               YY_CAST(long, yystacksize)));
    YY_IGNORE_USELESS_CAST_END

    if (yyss + yystacksize - 1 <= yyssp)
      YYABORT;
  }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default(yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
  {
    YYDPRINTF((stderr, "Reading a token\n"));
    yychar = yylex();
  }

  if (yychar <= YYEOF)
  {
    yychar = YYEOF;
    yytoken = YYSYMBOL_YYEOF;
    YYDPRINTF((stderr, "Now at end of input.\n"));
  }
  else if (yychar == YYerror)
  {
    /* The scanner already issued an error message, process directly
       to error recovery.  But do not keep the error token as
       lookahead, it is too special and may lead us to an endless
       loop in error recovery. */
    yychar = YYUNDEF;
    yytoken = YYSYMBOL_YYerror;
    goto yyerrlab1;
  }
  else
  {
    yytoken = YYTRANSLATE(yychar);
    YY_SYMBOL_PRINT("Next token is", yytoken, &yylval, &yylloc);
  }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
  {
    if (yytable_value_is_error(yyn))
      goto yyerrlab;
    yyn = -yyn;
    goto yyreduce;
  }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;

/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;

/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1 - yylen];

  YY_REDUCE_PRINT(yyn);
  switch (yyn)
  {
  case 2: /* start: functions  */
#line 76 "parser.y"
  {
    printTree(mkNode("CODE1", 1, mkParent("", (yyvsp[0].nPtr))), 0, 0, 1);
    printf("\n");
  }
#line 1833 "y.tab.c"
  break;

  case 3: /* start: main  */
#line 77 "parser.y"
  {
    printTree(mkNode("CODE2", 1, (yyvsp[0].nPtr)), 0, 0, 1);
    printf("\n");
  }
#line 1839 "y.tab.c"
  break;

  case 4: /* start: functions main  */
#line 78 "parser.y"
  {
    printTree(mkNode("CODE3", 2, mkParent("", (yyvsp[-1].nPtr)), mkParent("", (yyvsp[0].nPtr))), 0, 0, 1);
    printf("\n");
  }
#line 1845 "y.tab.c"
  break;

  case 5: /* start: main functions  */
#line 79 "parser.y"
  {
    printTree(mkNode("CODE4", 2, mkParent("", (yyvsp[-1].nPtr)), mkParent("", (yyvsp[0].nPtr))), 0, 0, 1);
    printf("\n");
  }
#line 1851 "y.tab.c"
  break;

  case 6: /* main: var_start var_types main_func '(' ')' ':' var_static '{' func_body_static '}'  */
#line 83 "parser.y"
  {
    addToSymbolTableStatic(symTable, (yyvsp[-7].nPtr));
    (yyval.nPtr) = mkNode("MAIN", 7, mkNode((yyvsp[-7].nPtr), 0), mkNode((yyvsp[-3].nPtr), 0), mkNode((yyvsp[-9].nPtr), 0), mkParent("ARGS", mkNode("NONE", 0)), mkParent("RETURN", mkNode((yyvsp[-8].nPtr), 0)), (yyvsp[-1].nPtr));
  }
#line 1859 "y.tab.c"
  break;

  case 7: /* main: var_start var_types main_func '(' ')' '{' func_body '}'  */
#line 89 "parser.y"
  {
    addToSymbolTable(symTable, (yyvsp[-5].nPtr));
    (yyval.nPtr) = mkNode("MAIN", 7, mkNode((yyvsp[-5].nPtr), 0), mkNode("NONSTATIC", 0), mkNode((yyvsp[-7].nPtr), 0), mkParent("ARGS", mkNode("NONE", 0)), mkParent("RETURN", mkNode((yyvsp[-6].nPtr), 0)), (yyvsp[-1].nPtr));
  }
#line 1866 "y.tab.c"
  break;

  case 8: /* functions: function  */
#line 94 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 1872 "y.tab.c"
  break;

  case 9: /* functions: functions function  */
#line 95 "parser.y"
  {
    (yyval.nPtr) = mkNode("", 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr));
  }
#line 1878 "y.tab.c"
  break;

  case 10: /* function: var_start var_types ID '(' parameter_list ')' ':' var_static '{' func_body_static '}'  */
#line 99 "parser.y"
  {
    addToSymbolTableStatic(symTable, (yyvsp[-8].value)); // Add function to symbol table
    (yyval.nPtr) = mkNode("FUNC", 6, mkNode((yyvsp[-8].value), 0), mkNode((yyvsp[-3].nPtr), 0), mkNode((yyvsp[-10].nPtr), 0), mkParent("ARGS ", (yyvsp[-6].nPtr)), mkParent("RETURN", mkNode((yyvsp[-9].nPtr), 0)), (yyvsp[-1].nPtr));
  }
#line 1887 "y.tab.c"
  break;

  case 11: /* function: var_start var_types ID '(' ')' ':' var_static '{' func_body_static '}'  */
#line 104 "parser.y"
  {
    addToSymbolTableStatic(symTable, (yyvsp[-7].value)); // Add function to symbol table
    (yyval.nPtr) = mkNode("FUNC", 7, mkNode((yyvsp[-7].value), 0), mkNode((yyvsp[-3].nPtr), 0), mkNode((yyvsp[-9].nPtr), 0), mkParent("ARGS", mkNode("NONE", 0)), mkParent("RETURN", mkNode((yyvsp[-8].nPtr), 0)), (yyvsp[-1].nPtr));
  }
#line 1896 "y.tab.c"
  break;

  case 12: /* function: var_start var_types ID '(' parameter_list ')' '{' func_body '}'  */
#line 109 "parser.y"
  {
    addToSymbolTable(symTable, (yyvsp[-6].value)); // Add function to symbol table
    (yyval.nPtr) = mkNode("FUNC", 6, mkNode((yyvsp[-6].value), 0), mkNode("NONSTATIC", 0), mkNode((yyvsp[-8].nPtr), 0), mkParent("ARGS ", (yyvsp[-4].nPtr)), mkParent("RETURN", mkNode((yyvsp[-7].nPtr), 0)), (yyvsp[-1].nPtr));
  }
#line 1905 "y.tab.c"
  break;

  case 13: /* function: var_start var_types ID '(' ')' '{' func_body '}'  */
#line 114 "parser.y"
  {
    addToSymbolTable(symTable, (yyvsp[-5].value)); // Add function to symbol table
    (yyval.nPtr) = mkNode("FUNC", 7, mkNode((yyvsp[-5].value), 0), mkNode("NONSTATIC", 0), mkNode((yyvsp[-7].nPtr), 0), mkParent("ARGS", mkNode("NONE", 0)), mkParent("RETURN", mkNode((yyvsp[-6].nPtr), 0)), (yyvsp[-1].nPtr));
  }
#line 1914 "y.tab.c"
  break;

  case 14: /* var_types: CHAR  */
#line 120 "parser.y"
  {
    (yyval.nPtr) = "CHAR";
  }
#line 1920 "y.tab.c"
  break;

  case 15: /* var_types: CHARPTR  */
#line 121 "parser.y"
  {
    (yyval.nPtr) = "CHARPTR";
  }
#line 1926 "y.tab.c"
  break;

  case 16: /* var_types: INT  */
#line 122 "parser.y"
  {
    (yyval.nPtr) = "INT";
  }
#line 1932 "y.tab.c"
  break;

  case 17: /* var_types: INTPTR  */
#line 123 "parser.y"
  {
    (yyval.nPtr) = "INTPTR";
  }
#line 1938 "y.tab.c"
  break;

  case 18: /* var_types: FLOAT  */
#line 124 "parser.y"
  {
    (yyval.nPtr) = "FLOAT";
  }
#line 1944 "y.tab.c"
  break;

  case 19: /* var_types: DOUBLE  */
#line 125 "parser.y"
  {
    (yyval.nPtr) = "DOUBLE";
  }
#line 1950 "y.tab.c"
  break;

  case 20: /* var_types: FLOATPTR  */
#line 126 "parser.y"
  {
    (yyval.nPtr) = "FLOATPTR";
  }
#line 1956 "y.tab.c"
  break;

  case 21: /* var_types: DOUBLEPTR  */
#line 127 "parser.y"
  {
    (yyval.nPtr) = "DOUBLEPTR";
  }
#line 1962 "y.tab.c"
  break;

  case 22: /* var_types: BOOLEAN  */
#line 128 "parser.y"
  {
    (yyval.nPtr) = "BOOLEAN";
  }
#line 1968 "y.tab.c"
  break;

  case 23: /* var_types: VOID  */
#line 129 "parser.y"
  {
    (yyval.nPtr) = "VOID";
  }
#line 1974 "y.tab.c"
  break;

  case 24: /* var_static: STATIC  */
#line 133 "parser.y"
  {
    (yyval.nPtr) = "STATIC";
  }
#line 1980 "y.tab.c"
  break;

  case 25: /* main_func: MAIN  */
#line 136 "parser.y"
  {
    (yyval.nPtr) = "main";
  }
#line 1986 "y.tab.c"
  break;

  case 26: /* var_start: PUBLIC  */
#line 138 "parser.y"
  {
    (yyval.nPtr) = "PUBLIC";
  }
#line 1992 "y.tab.c"
  break;

  case 27: /* var_start: PRIVATE  */
#line 139 "parser.y"
  {
    (yyval.nPtr) = "PRIVATE";
  }
#line 1998 "y.tab.c"
  break;

  case 28: /* parameter_list: pdecleration  */
#line 143 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2004 "y.tab.c"
  break;

  case 29: /* parameter_list: parameter_list ';' pdecleration  */
#line 144 "parser.y"
  {
    (yyval.nPtr) = mkNode("", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2010 "y.tab.c"
  break;

  case 30: /* pdecleration: ARG_OP var_types ':' identifiers  */
#line 147 "parser.y"
  {
    (yyval.nPtr) = mkParent((yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2016 "y.tab.c"
  break;

  case 31: /* pdecleration: var_types ':' identifiers  */
#line 148 "parser.y"
  {
    (yyval.nPtr) = mkParent((yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2022 "y.tab.c"
  break;

  case 32: /* identifiers: ID next_identifier  */
#line 151 "parser.y"
  {
    (yyval.nPtr) = mkNode((yyvsp[-1].value), 1, (yyvsp[0].nPtr));
  }
#line 2028 "y.tab.c"
  break;

  case 33: /* identifiers: ID  */
#line 152 "parser.y"
  {
    (yyval.nPtr) = mkNode((yyvsp[0].value), 0);
  }
#line 2034 "y.tab.c"
  break;

  case 34: /* next_identifier: ',' ID next_identifier  */
#line 155 "parser.y"
  {
    (yyval.nPtr) = mkNode("", 2, mkNode((yyvsp[-1].value), 0), (yyvsp[0].nPtr));
  }
#line 2040 "y.tab.c"
  break;

  case 35: /* next_identifier: %empty  */
#line 156 "parser.y"
  {
    (yyval.nPtr) = NULL;
  }
#line 2046 "y.tab.c"
  break;

  case 36: /* func_body: functions var_declr statements RETURN expression ';'  */
#line 159 "parser.y"
  {
    (yyval.nPtr) = mkNode("BODY", 4, mkParent("", (yyvsp[-5].nPtr)), mkParent("VAR", (yyvsp[-4].nPtr)), (yyvsp[-3].nPtr), mkParent("RET", (yyvsp[-1].nPtr)));
  }
#line 2052 "y.tab.c"
  break;

  case 37: /* func_body: var_declr statements RETURN expression ';'  */
#line 160 "parser.y"
  {
    (yyval.nPtr) = mkNode("BODY", 3, mkParent("VAR", (yyvsp[-4].nPtr)), (yyvsp[-3].nPtr), mkParent("RET", (yyvsp[-1].nPtr)));
  }
#line 2058 "y.tab.c"
  break;

  case 38: /* func_body: functions var_declr statements  */
#line 161 "parser.y"
  {
    (yyval.nPtr) = mkNode("BODY", 3, mkParent("", (yyvsp[-2].nPtr)), mkParent("VAR", (yyvsp[-1].nPtr)), (yyvsp[0].nPtr));
  }
#line 2064 "y.tab.c"
  break;

  case 39: /* func_body: var_declr statements  */
#line 162 "parser.y"
  {
    (yyval.nPtr) = mkNode("BODY", 2, mkParent("VAR", (yyvsp[-1].nPtr)), (yyvsp[0].nPtr));
  }
#line 2070 "y.tab.c"
  break;

  case 40: /* func_body_static: functions var_declr statements_static RETURN expression_static ';'  */
#line 165 "parser.y"
  {
    (yyval.nPtr) = mkNode("BODYSTATIC", 4, mkParent("", (yyvsp[-5].nPtr)), mkParent("VAR", (yyvsp[-4].nPtr)), (yyvsp[-3].nPtr), mkParent("RET", (yyvsp[-1].nPtr)));
  }
#line 2076 "y.tab.c"
  break;

  case 41: /* func_body_static: var_declr statements_static RETURN expression_static ';'  */
#line 166 "parser.y"
  {
    (yyval.nPtr) = mkNode("BODY", 3, mkParent("VAR", (yyvsp[-4].nPtr)), (yyvsp[-3].nPtr), mkParent("RET", (yyvsp[-1].nPtr)));
  }
#line 2082 "y.tab.c"
  break;

  case 42: /* func_body_static: functions var_declr statements_static  */
#line 167 "parser.y"
  {
    (yyval.nPtr) = mkNode("BODY", 3, mkParent("", (yyvsp[-2].nPtr)), mkParent("VAR", (yyvsp[-1].nPtr)), (yyvsp[0].nPtr));
  }
#line 2088 "y.tab.c"
  break;

  case 43: /* func_body_static: var_declr statements_static  */
#line 168 "parser.y"
  {
    (yyval.nPtr) = mkNode("BODY", 2, mkParent("VAR", (yyvsp[-1].nPtr)), (yyvsp[0].nPtr));
  }
#line 2094 "y.tab.c"
  break;

  case 44: /* const_value: CHAR_VAL  */
#line 172 "parser.y"
  {
    (yyval.value) = mkNode("CHAR", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2100 "y.tab.c"
  break;

  case 45: /* const_value: HEX_VAL  */
#line 173 "parser.y"
  {
    (yyval.value) = mkNode((yyvsp[0].value), 0);
  }
#line 2106 "y.tab.c"
  break;

  case 46: /* const_value: INT_VAL  */
#line 174 "parser.y"
  {
    (yyval.value) = mkNode("INT", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2112 "y.tab.c"
  break;

  case 47: /* const_value: FLOAT_VAL  */
#line 175 "parser.y"
  {
    (yyval.value) = mkNode((yyvsp[0].value), 0);
  }
#line 2118 "y.tab.c"
  break;

  case 48: /* const_value: DOUBLE_VAL  */
#line 176 "parser.y"
  {
    (yyval.value) = mkNode((yyvsp[0].value), 0);
  }
#line 2124 "y.tab.c"
  break;

  case 49: /* const_value: PLUS DOUBLE_VAL  */
#line 177 "parser.y"
  {
    (yyval.value) = mkNode("+", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2130 "y.tab.c"
  break;

  case 50: /* const_value: MINUS DOUBLE_VAL  */
#line 178 "parser.y"
  {
    (yyval.value) = mkNode("-", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2136 "y.tab.c"
  break;

  case 51: /* const_value: PLUS FLOAT_VAL  */
#line 179 "parser.y"
  {
    (yyval.value) = mkNode("+", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2142 "y.tab.c"
  break;

  case 52: /* const_value: MINUS FLOAT_VAL  */
#line 180 "parser.y"
  {
    (yyval.value) = mkNode("-", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2148 "y.tab.c"
  break;

  case 53: /* const_value: TRUE  */
#line 181 "parser.y"
  {
    (yyval.value) = mkNode((yyvsp[0].value), 0);
  }
#line 2154 "y.tab.c"
  break;

  case 54: /* const_value: FALSE  */
#line 182 "parser.y"
  {
    (yyval.value) = mkNode((yyvsp[0].value), 0);
  }
#line 2160 "y.tab.c"
  break;

  case 55: /* const_value: NONE  */
#line 183 "parser.y"
  {
    (yyval.value) = mkNode((yyvsp[0].value), 0);
  }
#line 2166 "y.tab.c"
  break;

  case 56: /* integer: FLOAT  */
#line 186 "parser.y"
  {
    (yyval.value) = mkNode((yyvsp[0].value), 0);
  }
#line 2172 "y.tab.c"
  break;

  case 57: /* integer: DOUBLE_VAL  */
#line 187 "parser.y"
  {
    (yyval.value) = mkNode((yyvsp[0].value), 0);
  }
#line 2178 "y.tab.c"
  break;

  case 58: /* integer: PLUS FLOAT_VAL  */
#line 188 "parser.y"
  {
    (yyval.value) = mkNode("+", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2184 "y.tab.c"
  break;

  case 59: /* integer: MINUS FLOAT_VAL  */
#line 189 "parser.y"
  {
    (yyval.value) = mkNode("-", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2190 "y.tab.c"
  break;

  case 60: /* integer: PLUS DOUBLE_VAL  */
#line 190 "parser.y"
  {
    (yyval.value) = mkNode("+", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2196 "y.tab.c"
  break;

  case 61: /* integer: MINUS DOUBLE_VAL  */
#line 191 "parser.y"
  {
    (yyval.value) = mkNode("-", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2202 "y.tab.c"
  break;

  case 62: /* integer: HEX_VAL  */
#line 192 "parser.y"
  {
    (yyval.value) = mkNode((yyvsp[0].value), 0);
  }
#line 2208 "y.tab.c"
  break;

  case 63: /* integer: INT_VAL  */
#line 193 "parser.y"
  {
    (yyval.value) = mkNode((yyvsp[0].value), 0);
  }
#line 2214 "y.tab.c"
  break;

  case 64: /* expression: ID  */
#line 195 "parser.y"
  {
    (yyval.nPtr) = mkNode((yyvsp[0].value), 0);
  }
#line 2220 "y.tab.c"
  break;

  case 65: /* expression: integer  */
#line 196 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].value);
  }
#line 2226 "y.tab.c"
  break;

  case 66: /* expression: ID '[' expression ']'  */
#line 197 "parser.y"
  {
    (yyval.nPtr) = mkNode((yyvsp[-3].value), 3, mkNode("[", 0), (yyvsp[-1].nPtr), mkNode("]", 0));
  }
#line 2232 "y.tab.c"
  break;

  case 67: /* expression: const_value  */
#line 198 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].value);
  }
#line 2238 "y.tab.c"
  break;

  case 68: /* expression: expression AND expression  */
#line 199 "parser.y"
  {
    (yyval.nPtr) = mkNode("AND", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2244 "y.tab.c"
  break;

  case 69: /* expression: expression EQUAL expression  */
#line 200 "parser.y"
  {
    (yyval.nPtr) = mkNode("==", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2250 "y.tab.c"
  break;

  case 70: /* expression: expression NOT_EQ expression  */
#line 201 "parser.y"
  {
    (yyval.nPtr) = mkNode("!=", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2256 "y.tab.c"
  break;

  case 71: /* expression: expression OR expression  */
#line 202 "parser.y"
  {
    (yyval.nPtr) = mkNode("OR", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2262 "y.tab.c"
  break;

  case 72: /* expression: expression BIGGER expression  */
#line 203 "parser.y"
  {
    (yyval.nPtr) = mkNode(">", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2268 "y.tab.c"
  break;

  case 73: /* expression: expression BIGGER_EQ expression  */
#line 204 "parser.y"
  {
    (yyval.nPtr) = mkNode(">=", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2274 "y.tab.c"
  break;

  case 74: /* expression: expression SMALLER_EQ expression  */
#line 205 "parser.y"
  {
    (yyval.nPtr) = mkNode("<=", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2280 "y.tab.c"
  break;

  case 75: /* expression: expression SMALLER expression  */
#line 206 "parser.y"
  {
    (yyval.nPtr) = mkNode("<", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2286 "y.tab.c"
  break;

  case 76: /* expression: expression PLUS expression  */
#line 207 "parser.y"
  {
    (yyval.nPtr) = mkNode("+", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2292 "y.tab.c"
  break;

  case 77: /* expression: expression MINUS expression  */
#line 208 "parser.y"
  {
    (yyval.nPtr) = mkNode("-", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2298 "y.tab.c"
  break;

  case 78: /* expression: expression MUL expression  */
#line 209 "parser.y"
  {
    (yyval.nPtr) = mkNode("*", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2304 "y.tab.c"
  break;

  case 79: /* expression: expression DIV expression  */
#line 210 "parser.y"
  {
    (yyval.nPtr) = mkNode("/", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2310 "y.tab.c"
  break;

  case 80: /* expression: op_unary expression  */
#line 211 "parser.y"
  {
    (yyval.nPtr) = mkNode((yyvsp[-1].value), 1, (yyvsp[0].nPtr));
  }
#line 2316 "y.tab.c"
  break;

  case 81: /* expression: MUL ID  */
#line 212 "parser.y"
  {
    (yyval.nPtr) = mkNode("*", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2322 "y.tab.c"
  break;

  case 82: /* expression: '(' expression ')'  */
#line 213 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[-1].nPtr);
  }
#line 2328 "y.tab.c"
  break;

  case 83: /* expression: '|' expression '|'  */
#line 214 "parser.y"
  {
    (yyval.nPtr) = mkNode("|", 2, (yyvsp[-1].nPtr), mkNode("|", 0));
  }
#line 2334 "y.tab.c"
  break;

  case 84: /* expression: func_call  */
#line 215 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2340 "y.tab.c"
  break;

  case 85: /* expression_static: ID  */
#line 217 "parser.y"
  {
    (yyval.nPtr) = mkNode((yyvsp[0].value), 0);
  }
#line 2346 "y.tab.c"
  break;

  case 86: /* expression_static: integer  */
#line 218 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].value);
  }
#line 2352 "y.tab.c"
  break;

  case 87: /* expression_static: ID '[' expression ']'  */
#line 219 "parser.y"
  {
    (yyval.nPtr) = mkNode((yyvsp[-3].value), 3, mkNode("[", 0), (yyvsp[-1].nPtr), mkNode("]", 0));
  }
#line 2358 "y.tab.c"
  break;

  case 88: /* expression_static: const_value  */
#line 220 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].value);
  }
#line 2364 "y.tab.c"
  break;

  case 89: /* expression_static: expression AND expression  */
#line 221 "parser.y"
  {
    (yyval.nPtr) = mkNode("AND", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2370 "y.tab.c"
  break;

  case 90: /* expression_static: expression EQUAL expression  */
#line 222 "parser.y"
  {
    (yyval.nPtr) = mkNode("==", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2376 "y.tab.c"
  break;

  case 91: /* expression_static: expression NOT_EQ expression  */
#line 223 "parser.y"
  {
    (yyval.nPtr) = mkNode("!=", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2382 "y.tab.c"
  break;

  case 92: /* expression_static: expression OR expression  */
#line 224 "parser.y"
  {
    (yyval.nPtr) = mkNode("OR", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2388 "y.tab.c"
  break;

  case 93: /* expression_static: expression BIGGER expression  */
#line 225 "parser.y"
  {
    (yyval.nPtr) = mkNode(">", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2394 "y.tab.c"
  break;

  case 94: /* expression_static: expression BIGGER_EQ expression  */
#line 226 "parser.y"
  {
    (yyval.nPtr) = mkNode(">=", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2400 "y.tab.c"
  break;

  case 95: /* expression_static: expression SMALLER_EQ expression  */
#line 227 "parser.y"
  {
    (yyval.nPtr) = mkNode("<=", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2406 "y.tab.c"
  break;

  case 96: /* expression_static: expression SMALLER expression  */
#line 228 "parser.y"
  {
    (yyval.nPtr) = mkNode("<", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2412 "y.tab.c"
  break;

  case 97: /* expression_static: expression PLUS expression  */
#line 229 "parser.y"
  {
    (yyval.nPtr) = mkNode("+", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2418 "y.tab.c"
  break;

  case 98: /* expression_static: expression MINUS expression  */
#line 230 "parser.y"
  {
    (yyval.nPtr) = mkNode("-", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2424 "y.tab.c"
  break;

  case 99: /* expression_static: expression MUL expression  */
#line 231 "parser.y"
  {
    (yyval.nPtr) = mkNode("*", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2430 "y.tab.c"
  break;

  case 100: /* expression_static: expression DIV expression  */
#line 232 "parser.y"
  {
    (yyval.nPtr) = mkNode("/", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2436 "y.tab.c"
  break;

  case 101: /* expression_static: op_unary expression  */
#line 233 "parser.y"
  {
    (yyval.nPtr) = mkNode((yyvsp[-1].value), 1, (yyvsp[0].nPtr));
  }
#line 2442 "y.tab.c"
  break;

  case 102: /* expression_static: MUL ID  */
#line 234 "parser.y"
  {
    (yyval.nPtr) = mkNode("*", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2448 "y.tab.c"
  break;

  case 103: /* expression_static: '(' expression ')'  */
#line 235 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[-1].nPtr);
  }
#line 2454 "y.tab.c"
  break;

  case 104: /* expression_static: '|' expression '|'  */
#line 236 "parser.y"
  {
    (yyval.nPtr) = mkNode("|", 2, (yyvsp[-1].nPtr), mkNode("|", 0));
  }
#line 2460 "y.tab.c"
  break;

  case 105: /* expression_static: func_call_static  */
#line 237 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2466 "y.tab.c"
  break;

  case 116: /* statement: '{' code_block '}'  */
#line 251 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[-1].nPtr);
  }
#line 2472 "y.tab.c"
  break;

  case 124: /* statement_static: '{' code_block '}'  */
#line 261 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[-1].nPtr);
  }
#line 2478 "y.tab.c"
  break;

  case 125: /* assignment: lhs '=' expression  */
#line 263 "parser.y"
  {
    (yyval.nPtr) = mkNode("ASS3", 2, mkNode("", 1, (yyvsp[-2].nPtr)), (yyvsp[0].nPtr));
  }
#line 2484 "y.tab.c"
  break;

  case 126: /* assignment: lhs '=' STRING_VAL  */
#line 264 "parser.y"
  {
    (yyval.nPtr) = mkNode("ASS4", 2, (yyvsp[-2].nPtr), mkNode((yyvsp[0].value), 0));
  }
#line 2490 "y.tab.c"
  break;

  case 127: /* assignment_static: lhs '=' expression_static  */
#line 268 "parser.y"
  {

    if (check_variable_type_2(var_list, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)) == 1)
    {
      (yyval.nPtr) = mkNode("ASS5.1", 2, mkNode("", 1, (yyvsp[-2].nPtr)), (yyvsp[0].nPtr));
    }
    else if (check_variable_type_2(var_list, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)) == -1)
    {
      printf("Sorry wrong assignment type\n");
      YYABORT;
    }
    else
    {

      (yyval.nPtr) = mkNode("ASS5.2", 2, mkNode("", 1, (yyvsp[-2].nPtr)), (yyvsp[0].nPtr));
    }
  }
#line 2514 "y.tab.c"
  break;

  case 128: /* assignment_static: lhs '=' STRING_VAL  */
#line 287 "parser.y"
  {
    (yyval.nPtr) = mkNode("ASS6", 2, (yyvsp[-2].nPtr), mkNode((yyvsp[0].value), 0));
  }
#line 2520 "y.tab.c"
  break;

  case 129: /* lhs: ID  */
#line 290 "parser.y"
  {
    (yyval.nPtr) = mkNode((yyvsp[0].value), 0);
  }
#line 2526 "y.tab.c"
  break;

  case 130: /* lhs: '*' ID  */
#line 291 "parser.y"
  {
    (yyval.nPtr) = mkNode("*", 1, mkNode((yyvsp[0].value), 0));
  }
#line 2532 "y.tab.c"
  break;

  case 131: /* lhs: ID '[' expression ']'  */
#line 292 "parser.y"
  {
    (yyval.nPtr) = mkNode((yyvsp[-3].value), 3, mkNode("[", 0), (yyvsp[-1].nPtr), mkNode("]", 0));
  }
#line 2538 "y.tab.c"
  break;

  case 132: /* code_block: var_declr statements  */
#line 295 "parser.y"
  {
    (yyval.nPtr) = mkNode("BLOCK", 2, mkParent("VAR", (yyvsp[-1].nPtr)), (yyvsp[0].nPtr));
  }
#line 2544 "y.tab.c"
  break;

  case 133: /* func_call: lhs '=' ID '(' expressions ')' ';'  */
#line 299 "parser.y"
  {
    if (functionCall(symTable, (yyvsp[-4].value)) == -1)
    {
      YYABORT;
    }
    else
    {

      (yyval.nPtr) = mkNode("FUNCTION_CALL", 1, mkNode("ASS7", 3, (yyvsp[-6].nPtr), mkNode((yyvsp[-4].value), 0), mkParent("ARGS", (yyvsp[-2].nPtr))));
    }
  }
#line 2559 "y.tab.c"
  break;

  case 134: /* func_call: ID '(' expressions ')' ';'  */
#line 312 "parser.y"
  {
    if (functionCall(symTable, (yyvsp[-4].value)) == -1)
    {
      YYABORT;
    }
    else
    {
      (yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-4].value), 0), mkParent("ARGS", mkNode("NONE", 0)));
    }
  }
#line 2574 "y.tab.c"
  break;

  case 135: /* func_call: ID '(' ')' ';'  */
#line 325 "parser.y"
  {
    if (functionCall(symTable, (yyvsp[-3].value)) == -1)
    {
      YYABORT;
    }
    else
    {
      (yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-3].value), 0), mkParent("ARGS", mkNode("NONE", 0)));
    }
  }
#line 2590 "y.tab.c"
  break;

  case 136: /* func_call: lhs '=' ID '(' ')' ';'  */
#line 338 "parser.y"
  {
    if (functionCall(symTable, (yyvsp[-3].value)) == -1)
    {
      YYABORT;
    }
    else
    {
      (yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-5].nPtr), 0), mkParent("ARGS", mkNode("NONE", 0)));
    }
  }
#line 2605 "y.tab.c"
  break;

  case 137: /* func_call_static: lhs '=' ID '(' expressions_static ')' ';'  */
#line 349 "parser.y"
  {
    if (functionCallStatic(symTable, (yyvsp[-4].value)) == -1 || functionCallStatic(symTable, (yyvsp[-4].value)) == 0)
    {
      YYABORT;
    }
    else
    {

      (yyval.nPtr) = mkNode("FUNCTION_CALL", 1, mkNode("ASS10", 3, (yyvsp[-6].nPtr), mkNode((yyvsp[-4].value), 0), mkParent("ARGS", (yyvsp[-2].nPtr))));
    }
  }
#line 2620 "y.tab.c"
  break;

  case 138: /* func_call_static: ID '(' expressions_static ')' ';'  */
#line 362 "parser.y"
  {
    if (functionCallStatic(symTable, (yyvsp[-4].value)) == -1 || functionCallStatic(symTable, (yyvsp[-4].value)) == 0)
    {
      YYABORT;
    }
    else
    {
      (yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-4].value), 0), mkParent("ARGS", mkNode("NONE", 0)));
    }
  }
#line 2635 "y.tab.c"
  break;

  case 139: /* func_call_static: ID '(' ')' ';'  */
#line 375 "parser.y"
  {
    if (functionCallStatic(symTable, (yyvsp[-3].value)) == -1 || functionCallStatic(symTable, (yyvsp[-3].value)) == 0)
    {
      YYABORT;
    }
    else
    {
      (yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-3].value), 0), mkParent("ARGS", mkNode("NONE", 0)));
    }
  }
#line 2651 "y.tab.c"
  break;

  case 140: /* func_call_static: lhs '=' ID '(' ')' ';'  */
#line 388 "parser.y"
  {
    if (functionCallStatic(symTable, (yyvsp[-3].value)) == -1 || functionCallStatic(symTable, (yyvsp[-3].value)) == 0)
    {
      YYABORT;
    }
    else
    {
      (yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-5].nPtr), 0), mkParent("ARGS", mkNode("NONE", 0)));
    }
  }
#line 2666 "y.tab.c"
  break;

  case 141: /* expressions: %empty  */
#line 401 "parser.y"
  {
    (yyval.nPtr) = NULL;
  }
#line 2672 "y.tab.c"
  break;

  case 142: /* expressions: expressions_ne  */
#line 402 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2678 "y.tab.c"
  break;

  case 143: /* expressions_static: %empty  */
#line 405 "parser.y"
  {
    (yyval.nPtr) = NULL;
  }
#line 2684 "y.tab.c"
  break;

  case 144: /* expressions_static: expressions_ne_static  */
#line 406 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2690 "y.tab.c"
  break;

  case 145: /* expressions_ne: expression  */
#line 409 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2696 "y.tab.c"
  break;

  case 146: /* expressions_ne: expressions_ne ',' expression  */
#line 410 "parser.y"
  {
    (yyval.nPtr) = mkNode("", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2702 "y.tab.c"
  break;

  case 147: /* expressions_ne_static: expression_static  */
#line 413 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2708 "y.tab.c"
  break;

  case 148: /* expressions_ne_static: expressions_ne_static ',' expression_static  */
#line 414 "parser.y"
  {
    (yyval.nPtr) = mkNode("", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2714 "y.tab.c"
  break;

  case 149: /* if: IF '(' expression ')' '{' if_else_block '}'  */
#line 417 "parser.y"
  {
    (yyval.nPtr) = mkNode("IF", 2, (yyvsp[-4].nPtr), (yyvsp[-1].nPtr));
  }
#line 2720 "y.tab.c"
  break;

  case 150: /* if: IF '(' expression ')' if_else_statement  */
#line 418 "parser.y"
  {
    (yyval.nPtr) = mkNode("IF", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2726 "y.tab.c"
  break;

  case 151: /* if_else: IF '(' expression ')' '{' if_else_block '}' ELSE '{' if_else_block '}'  */
#line 422 "parser.y"
  {
    (yyval.nPtr) = mkNode("IF-ELSE", 3, (yyvsp[-8].nPtr), (yyvsp[-5].nPtr), (yyvsp[-1].nPtr));
  }
#line 2732 "y.tab.c"
  break;

  case 152: /* if_else: IF '(' expression ')' if_else_statement ELSE if_else_statement  */
#line 424 "parser.y"
  {
    (yyval.nPtr) = mkNode("IF-ELSE", 3, (yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2738 "y.tab.c"
  break;

  case 153: /* if_else: IF '(' expression ')' if_else_statement ELSE '{' if_else_block '}'  */
#line 426 "parser.y"
  {
    (yyval.nPtr) = mkNode("IF-ELSE", 3, (yyvsp[-6].nPtr), (yyvsp[-4].nPtr), (yyvsp[-1].nPtr));
  }
#line 2744 "y.tab.c"
  break;

  case 154: /* if_else: IF '(' expression ')' '{' if_else_block '}' ELSE if_else_statement  */
#line 428 "parser.y"
  {
    (yyval.nPtr) = mkNode("IF-ELSE", 3, (yyvsp[-6].nPtr), (yyvsp[-3].nPtr), (yyvsp[0].nPtr));
  }
#line 2750 "y.tab.c"
  break;

  case 155: /* if_else_block: code_block RETURN expression ';'  */
#line 430 "parser.y"
  {
    (yyval.nPtr) = mkNode("", 2, (yyvsp[-3].nPtr), mkParent("RET", (yyvsp[-1].nPtr)));
  }
#line 2756 "y.tab.c"
  break;

  case 156: /* if_else_block: code_block  */
#line 431 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2762 "y.tab.c"
  break;

  case 157: /* if_else_block: RETURN expression ';'  */
#line 432 "parser.y"
  {
    (yyval.nPtr) = mkParent("RET", (yyvsp[-1].nPtr));
  }
#line 2768 "y.tab.c"
  break;

  case 158: /* if_else_block: RETURN expression  */
#line 433 "parser.y"
  {
    (yyval.nPtr) = mkParent("RET", (yyvsp[0].nPtr));
  }
#line 2774 "y.tab.c"
  break;

  case 159: /* if_else_statement: statement  */
#line 436 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2780 "y.tab.c"
  break;

  case 160: /* if_else_statement: RETURN expression ';'  */
#line 437 "parser.y"
  {
    (yyval.nPtr) = mkParent("RET", (yyvsp[-1].nPtr));
  }
#line 2786 "y.tab.c"
  break;

  case 161: /* if_else_statement: RETURN expression  */
#line 438 "parser.y"
  {
    (yyval.nPtr) = mkParent("RET", (yyvsp[0].nPtr));
  }
#line 2792 "y.tab.c"
  break;

  case 162: /* while: WHILE '(' expression ')' statement  */
#line 441 "parser.y"
  {
    (yyval.nPtr) = mkNode("WHILE", 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2798 "y.tab.c"
  break;

  case 163: /* do_while: DO '{' code_block '}' WHILE '(' expression ')' ';'  */
#line 444 "parser.y"
  {
    (yyval.nPtr) = mkNode("DO-WHILE", 2, (yyvsp[-6].nPtr), mkNode("WHILE", 1, (yyvsp[-2].nPtr)));
  }
#line 2804 "y.tab.c"
  break;

  case 164: /* for: FOR '(' assignment ';' expression ';' update ')' statement  */
#line 447 "parser.y"
  {
    (yyval.nPtr) = mkNode("FOR", 4, (yyvsp[-6].nPtr), (yyvsp[-4].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr));
  }
#line 2810 "y.tab.c"
  break;

  case 165: /* update: lhs '=' expression  */
#line 450 "parser.y"
  {
    (yyval.nPtr) = mkNode("ASS11", 2, mkNode("", 1, (yyvsp[-2].nPtr)), (yyvsp[0].nPtr));
  }
#line 2816 "y.tab.c"
  break;

  case 166: /* update: %empty  */
#line 451 "parser.y"
  {
    (yyval.nPtr) = NULL;
  }
#line 2822 "y.tab.c"
  break;

  case 167: /* statements: %empty  */
#line 454 "parser.y"
  {
    (yyval.nPtr) = NULL;
  }
#line 2828 "y.tab.c"
  break;

  case 168: /* statements: statements_ne  */
#line 455 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2834 "y.tab.c"
  break;

  case 169: /* statements_static: %empty  */
#line 457 "parser.y"
  {
    (yyval.nPtr) = NULL;
  }
#line 2840 "y.tab.c"
  break;

  case 170: /* statements_static: statements_ne_static  */
#line 458 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2846 "y.tab.c"
  break;

  case 171: /* statements_ne: statement  */
#line 460 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2852 "y.tab.c"
  break;

  case 172: /* statements_ne: statements_ne statement  */
#line 461 "parser.y"
  {
    (yyval.nPtr) = mkNode("", 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr));
  }
#line 2858 "y.tab.c"
  break;

  case 173: /* statements_ne_static: statement_static  */
#line 464 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2864 "y.tab.c"
  break;

  case 174: /* statements_ne_static: statements_ne_static statement_static  */
#line 465 "parser.y"
  {
    (yyval.nPtr) = mkNode("", 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr));
  }
#line 2870 "y.tab.c"
  break;

  case 175: /* variable_declaration: VAR type ':' variable_ass ';'  */
#line 468 "parser.y"
  {
    (yyval.nPtr) = mkNode((yyvsp[-3].nPtr), 1, (yyvsp[-1].nPtr));
  }
#line 2876 "y.tab.c"
  break;

  case 176: /* variable_declaration: VAR type ':' ID ';'  */
#line 469 "parser.y"
  {
    add_variable(var_list, (yyvsp[-1].value), (yyvsp[-3].nPtr));
    (yyval.nPtr) = mkNode((yyvsp[-3].nPtr), 1, (yyvsp[-1].value));
  }
#line 2882 "y.tab.c"
  break;

  case 177: /* variable_declaration: VAR type ':' identifiers ';'  */
#line 470 "parser.y"
  {
    add_variable(var_list, (yyvsp[-1].nPtr), (yyvsp[-3].nPtr));
    (yyval.nPtr) = mkNode((yyvsp[-3].nPtr), 1, (yyvsp[-1].nPtr));
  }
#line 2888 "y.tab.c"
  break;

  case 178: /* variable_declaration: STRING str_declaration  */
#line 471 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2894 "y.tab.c"
  break;

  case 179: /* str_declaration: ID '[' integer_value ']' '=' STRING_VAL ';'  */
#line 475 "parser.y"
  {
    add_variable_2(var_list, (yyvsp[-6].value), TYPEOF((yyvsp[-1].value)));
    (yyval.nPtr) = mkNode("STRING", 3, mkNode((yyvsp[-6].value), 0), mkNode("[", 2, (yyvsp[-4].nPtr), mkNode("]", 0)), mkNode("ASS9", 1, mkNode((yyvsp[-1].value), 0)));
  }
#line 2903 "y.tab.c"
  break;

  case 180: /* str_declaration: ID '[' integer_value ']' ';'  */
#line 480 "parser.y"
  {
    (yyval.nPtr) = mkNode("STRING", 2, mkNode((yyvsp[-4].value), 0), mkNode("[", 2, (yyvsp[-2].nPtr), mkNode("]", 0)));
  }
#line 2911 "y.tab.c"
  break;

  case 181: /* str_declaration: ID '[' integer_value ']' ',' str_declaration  */
#line 483 "parser.y"
  {
    (yyval.nPtr) = mkNode("STRING", 3, mkNode((yyvsp[-5].value), 0), mkNode("[", 2, (yyvsp[-3].nPtr), mkNode("]", 0)), (yyvsp[0].nPtr));
  }
#line 2919 "y.tab.c"
  break;

  case 182: /* integer_value: integer  */
#line 488 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].value);
  }
#line 2925 "y.tab.c"
  break;

  case 183: /* integer_value: integer PLUS integer_value  */
#line 489 "parser.y"
  {
    (yyval.nPtr) = mkNode("+", 0), (yyvsp[0].nPtr);
  }
#line 2931 "y.tab.c"
  break;

  case 184: /* integer_value: integer MUL integer_value  */
#line 490 "parser.y"
  {
    (yyval.nPtr) = mkNode("*", 0), (yyvsp[0].nPtr);
  }
#line 2937 "y.tab.c"
  break;

  case 185: /* integer_value: integer MINUS integer_value  */
#line 491 "parser.y"
  {
    (yyval.nPtr) = 2, mkNode("-", 0), (yyvsp[0].nPtr);
  }
#line 2943 "y.tab.c"
  break;

  case 186: /* variable_ass: ID '=' const_value ',' variable_ass  */
#line 495 "parser.y"
  {
    if (check_variable_type(var_list, (yyvsp[-4].value), (yyvsp[-2].value)) == 1)
    {
      (yyval.nPtr) = mkNode("ASS1", 3, mkNode((yyvsp[-4].value), 1, (yyvsp[-2].value)), mkParent("", (yyvsp[0].nPtr)));
    }
    else if (check_variable_type(var_list, (yyvsp[-4].value), (yyvsp[-2].value)) == -1)
    {
      YYABORT;
    }
    else
    {
      (yyval.nPtr) = mkNode("ASS2", 3, mkNode((yyvsp[-4].value), 1, (yyvsp[-2].value)), mkParent("", (yyvsp[0].nPtr)));
    }
  }
#line 2963 "y.tab.c"
  break;

  case 187: /* variable_ass: ID '=' const_value  */
#line 511 "parser.y"
  {
    if (check_variable_type(var_list, (yyvsp[-2].value), (yyvsp[0].value)) == 1)
    {
      (yyval.nPtr) = mkNode("ASSTOPO", 1, mkNode((yyvsp[-2].value), 1, (yyvsp[0].value)));
    }
    else if (check_variable_type(var_list, (yyvsp[-2].value), (yyvsp[0].value)) == -1)
    {
      YYABORT;
    }
    else
    {
      printf("Now adding the node \n \n");

      add_variable(var_list, (yyvsp[-2].value), (yyvsp[0].value));

      (yyval.nPtr) = mkNode("ASSTOPO2", 1, mkNode((yyvsp[-2].value), 1, (yyvsp[0].value)));
    }
  }
#line 2984 "y.tab.c"
  break;

  case 188: /* type: var_types  */
#line 530 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 2990 "y.tab.c"
  break;

  case 189: /* var_declr: %empty  */
#line 533 "parser.y"
  {
    (yyval.nPtr) = NULL;
  }
#line 2996 "y.tab.c"
  break;

  case 190: /* var_declr: var_declr_ne  */
#line 534 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 3002 "y.tab.c"
  break;

  case 191: /* var_declr_ne: variable_declaration  */
#line 537 "parser.y"
  {
    (yyval.nPtr) = (yyvsp[0].nPtr);
  }
#line 3008 "y.tab.c"
  break;

  case 192: /* var_declr_ne: var_declr_ne variable_declaration  */
#line 538 "parser.y"
  {
    (yyval.nPtr) = mkNode("", 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr));
  }
#line 3014 "y.tab.c"
  break;

#line 3018 "y.tab.c"

  default:
    break;
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT("-> $$ =", YY_CAST(yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK(yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
                   ? yytable[yyi]
                   : yydefgoto[yylhs]);
  }

  goto yynewstate;

/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE(yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
  {
    ++yynerrs;
    yyerror(YY_("syntax error"));
  }

  if (yyerrstatus == 3)
  {
    /* If just tried and failed to reuse lookahead token after an
       error, discard it.  */

    if (yychar <= YYEOF)
    {
      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        YYABORT;
    }
    else
    {
      yydestruct("Error: discarding",
                 yytoken, &yylval);
      yychar = YYEMPTY;
    }
  }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;

/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK(yylen);
  yylen = 0;
  YY_STACK_PRINT(yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;

/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3; /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
  {
    yyn = yypact[yystate];
    if (!yypact_value_is_default(yyn))
    {
      yyn += YYSYMBOL_YYerror;
      if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
      {
        yyn = yytable[yyn];
        if (0 < yyn)
          break;
      }
    }

    /* Pop the current state because it cannot handle the error token.  */
    if (yyssp == yyss)
      YYABORT;

    yydestruct("Error: popping",
               YY_ACCESSING_SYMBOL(yystate), yyvsp);
    YYPOPSTACK(1);
    yystate = *yyssp;
    YY_STACK_PRINT(yyss, yyssp);
  }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Shift the error token.  */
  YY_SYMBOL_PRINT("Shifting", YY_ACCESSING_SYMBOL(yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;

/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;

/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror(YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;

/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
  {
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = YYTRANSLATE(yychar);
    yydestruct("Cleanup: discarding lookahead",
               yytoken, &yylval);
  }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK(yylen);
  YY_STACK_PRINT(yyss, yyssp);
  while (yyssp != yyss)
  {
    yydestruct("Cleanup: popping",
               YY_ACCESSING_SYMBOL(+*yyssp), yyvsp);
    YYPOPSTACK(1);
  }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE(yyss);
#endif

  return yyresult;
}

#line 540 "parser.y"

int isLeave(node *head)
{
  int i;
  if (head == NULL)
    return 0;
  if (head->count == 0)
    return 0;
  for (i = 0; i < head->count; i++)
    if (head->sons[i] != NULL && head->sons[i]->count > 0)
      return 0;
  return 1;
}
node *mkNode(char *value, int count, ...)
{
  va_list ap;
  node *p;
  node **s;
  int i;
  int flag = 1;

  /* allocate node */
  if ((p = (node *)malloc(sizeof(node))) == NULL)
    yyerror("out of memory");

  /* copy information */
  p->value = value;
  p->count = count;
  if (count != 0)
  {
    if ((s = (node **)malloc(count * sizeof(node *))) == NULL)
      yyerror("out of memory");
    va_start(ap, count);
    for (i = 0; i < count; i++)
    {
      s[i] = va_arg(ap, node *);
      if (s[i] != NULL)
        flag = 0;
    }
    va_end(ap);
    p->sons = s;
    if (flag)
      return NULL;
  }
  else
  {
    p->sons = NULL;
  }
  return p;
}

node *mkParent(char *value, node *child)
{
  if (child == NULL)
    return NULL;
  if (child->value != "")
  {
    return mkNode(value, 1, child);
  }
  child->value = value;
  return child;
}

void printTree(node *ast, int indent, int s, int l)
{
  int i = 0;
  int flag = 0;
  if (ast == NULL)
    return;

  if (ast->count > 0 && ast->value != "")
    printf("\n%*s( ", indent, "");
  if (!s && ast->count == 0)
    printf("\n%*s", indent, "");
  if (ast->value != "")
  {
    printf("%s ", ast->value);
  }
  else
    indent--;

  for (i = 0; i < ast->count; i++)
  {
    if (ast->sons[i] != NULL)
    {
      if (isLeave(ast) || ast->value == "" || ast->value == "ARGS" || ast->value == "VAR")
        s = 1;
      else
        s = 0;
      if (l)
      {
        if (strlen(ast->value) == 0)
          l = 0;
        printTree(ast->sons[i], indent + strlen(ast->value) + 1, s, l);
      }
      else
      {
        if (strlen(ast->value) != 0)
        {
          l = 1;
          printTree(ast->sons[i], indent + strlen(ast->value) + 1, s, l);
        }
        else
          printTree(ast->sons[i], indent + 1, s, l);
      }
      if (ast->sons[i]->count > 0)
        flag = 1;
    }
  }

  if (flag == 1 && ast->value != "" && ast->value != "ARGS" && ast->value != "VAR")
    printf("\n%*s%s", indent, "", ")");
  else if ((ast->count > 0 && ast->value != "") || ast->value == "ARGS" || ast->value == "VAR")
    printf(")");
}

void yyerror(char *s)
{
  fprintf(stderr, "%s at line %d\nParser does not expect %s\n", s, yylineno, yytext);
}

SymbolTable *initializeSymbolTable()
{
  // Allocate memory for the SymbolTable structure
  SymbolTable *table = (SymbolTable *)malloc(sizeof(SymbolTable));
  if (table == NULL)
  {
    fprintf(stderr, "Memory allocation failed\n");
    return NULL;
  }

  // Initialize the count of entries to 0
  table->count = 0;

  // Optionally initialize the entries array
  for (int i = 0; i < MAX_SYMBOLS; ++i)
  {
    strcpy(table->entries[i].name, "check"); // Set the name to "check"
    table->entries[i].isStatic = 0;
  }

  return table;
}

void addToSymbolTable(SymbolTable *table, const char *name)
{

  if (table->count < MAX_SYMBOLS)
  {
    // Check if the function is already declared
    if (lookupInSymbolTable(table, name) == -1)
    {
      // Add the function to the symbol table
      strcpy(table->entries[table->count].name, name);
      table->count++;
    }
    else
    {
      printf("Error: Function '%s' already declared.\n", name);
    }
  }
  else
  {
    printf("Error: Symbol table overflow.\n");
  }
}
void addToSymbolTableStatic(SymbolTable *table, const char *name)
{

  if (table->count < MAX_SYMBOLS)
  {
    // Check if the function is already declared
    if (lookupInSymbolTable(table, name) == -1)
    {
      // Add the function to the symbol table
      strcpy(table->entries[table->count].name, name);
      table->entries[table->count].isStatic = 1;
      table->count++;
    }
    else
    {
      printf("Error: Function '%s' already declared.\n", name);
    }
  }
  else
  {
    printf("Error: Symbol table overflow.\n");
  }
}
int lookupInSymbolTable(SymbolTable *table, const char *name)
{
  int i;
  for (i = 0; i < table->count; i++)
  {
    if (strcmp(table->entries[i].name, name) == 0)
    {
      return i; // Function found, return index
    }
  }
  return -1; // Function not found
}

int functionCall(SymbolTable *table, const char *name)
{
  int i;
  for (i = 0; i < table->count; i++)
  {
    if (strcmp(table->entries[i].name, name) == 0)
    {
      return i; // Function found, return index
    }
  }
  yyerror("Function is not Declared");
  return -1; // Function not found
}

int functionCallStatic(SymbolTable *table, const char *name)
{
  int i;
  for (i = 0; i < table->count; i++)
  {
    if (strcmp(table->entries[i].name, name) == 0)
    {
      if (table->entries[i].isStatic == 1)
      {
        return 1;
      }
      else
      {
        yyerror("Function is not static");

        return 0;
      }
    }
  }
  yyerror("Function is not Declared");
  return -1; // Function not found
}

VariableList *initialize_variable_list()
{
  // Allocate memory for the VariableList structure
  VariableList *list = (VariableList *)malloc(sizeof(VariableList));
  if (list == NULL)
  {
    fprintf(stderr, "Memory allocation failed\n");
    return NULL;
  }

  // Initialize the count of entries to 0
  list->count = 0;

  // Optionally initialize the entries array
  for (int i = 0; i < MAX_VARIABLES; ++i)
  {
    strcpy(list->entries[i].name, "check");   // Set the name to "check"
    strcpy(list->entries[i].type, "INT_VAL"); // Set the name to "check"
  }

  return list;
}

void add_variable(VariableList *list, const char *name, const char **type)
{
  if (list->count >= MAX_VARIABLES)
  {
    fprintf(stderr, "Variable list is full\n");
    return;
  }
  printf("type is %s \n", *type);
  strcpy(list->entries[list->count].name, name);
  strcpy(list->entries[list->count].type, *type);

  list->count++;
}

void add_variable_2(VariableList *list, const char *name, const char *type)
{
  if (list->count >= MAX_VARIABLES)
  {
    fprintf(stderr, "Variable list is full\n");
    return;
  }
  printf("type is %s \n", type);
  strcpy(list->entries[list->count].name, name);
  strcpy(list->entries[list->count].type, type);

  list->count++;
}

int check_variable_type(VariableList *list, const char *name, const char **type)
{
  for (int i = 0; i < list->count; i++)
  {
    if (strcmp(list->entries[i].name, name) == 0)
    {
      if (list->entries[i].type == *type)
      {
        return 1;
      }
      else
      {
        return -1;
      }
    }
  }

  return 0; // If variable is not found, return true to allow new declaration
}

int check_variable_type_2(VariableList *list, const char **name, const char **type)
{
  for (int i = 0; i < list->count; i++)
  {
    if (strcmp(list->entries[i].name, *name) == 0)
    {
      printf("first is %s\n", *type);
      printf("second is %s\n", list->entries[i].type);

      if (strcmp(list->entries[i].type, *type) == 0)
      {

        return 1;
      }
      else
      {

        return -1;
      }
    }
  }

  return 0; // If variable is not found, return true to allow new declaration
}

int main(void)
{
  symTable = initializeSymbolTable();
  if (symTable == NULL)
  {
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
