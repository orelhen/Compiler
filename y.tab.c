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
	int addToSymbolTable(SymbolTable *table, const char *name);
	int addToSymbolTableStatic(SymbolTable *table, const char *name);

	int lookupInSymbolTable(SymbolTable *table, const char *name);
	int functionCall(SymbolTable *table, const char *name);

	VariableList* initialize_variable_list();
	void add_variable(VariableList *list, const char *name, const char **type);
	void add_variable_2(VariableList *list, const char *name, const char *type);
	void add_variable_3(VariableList *list, const char **name, const char *type);

	int check_variable_type(VariableList *list, const char *name, const char **type);
	int check_variable_type_2(VariableList *list, const char **name, const char **type);
	int check_variable_type_3(VariableList *list, const char **name, const char *type);

	void free_variable_list(VariableList *list);

	

#line 122 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


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
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 51 "parser.y"

		char *value;
		node *nPtr;
	

#line 282 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAIN = 3,                       /* MAIN  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_INTPTR = 5,                     /* INTPTR  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_VOID = 7,                       /* VOID  */
  YYSYMBOL_CHARPTR = 8,                    /* CHARPTR  */
  YYSYMBOL_CHAR_VAL = 9,                   /* CHAR_VAL  */
  YYSYMBOL_FLOAT = 10,                     /* FLOAT  */
  YYSYMBOL_FLOAT_VAL = 11,                 /* FLOAT_VAL  */
  YYSYMBOL_FLOATPTR = 12,                  /* FLOATPTR  */
  YYSYMBOL_DOUBLE = 13,                    /* DOUBLE  */
  YYSYMBOL_DOUBLE_VAL = 14,                /* DOUBLE_VAL  */
  YYSYMBOL_DOUBLEPTR = 15,                 /* DOUBLEPTR  */
  YYSYMBOL_BOOLEAN = 16,                   /* BOOLEAN  */
  YYSYMBOL_TRUE = 17,                      /* TRUE  */
  YYSYMBOL_FALSE = 18,                     /* FALSE  */
  YYSYMBOL_VAR = 19,                       /* VAR  */
  YYSYMBOL_PUBLIC = 20,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 21,                   /* PRIVATE  */
  YYSYMBOL_STATIC = 22,                    /* STATIC  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_ID = 24,                        /* ID  */
  YYSYMBOL_INT_VAL = 25,                   /* INT_VAL  */
  YYSYMBOL_NONE = 26,                      /* NONE  */
  YYSYMBOL_DO = 27,                        /* DO  */
  YYSYMBOL_ARG_OP = 28,                    /* ARG_OP  */
  YYSYMBOL_AND = 29,                       /* AND  */
  YYSYMBOL_DIV = 30,                       /* DIV  */
  YYSYMBOL_EQUAL = 31,                     /* EQUAL  */
  YYSYMBOL_BIGGER_EQ = 32,                 /* BIGGER_EQ  */
  YYSYMBOL_BIGGER = 33,                    /* BIGGER  */
  YYSYMBOL_SMALLER_EQ = 34,                /* SMALLER_EQ  */
  YYSYMBOL_SMALLER = 35,                   /* SMALLER  */
  YYSYMBOL_MINUS = 36,                     /* MINUS  */
  YYSYMBOL_NOT = 37,                       /* NOT  */
  YYSYMBOL_NOT_EQ = 38,                    /* NOT_EQ  */
  YYSYMBOL_OR = 39,                        /* OR  */
  YYSYMBOL_PLUS = 40,                      /* PLUS  */
  YYSYMBOL_MUL = 41,                       /* MUL  */
  YYSYMBOL_ADDRESS_OP = 42,                /* ADDRESS_OP  */
  YYSYMBOL_DEREFERENCE = 43,               /* DEREFERENCE  */
  YYSYMBOL_HEX_VAL = 44,                   /* HEX_VAL  */
  YYSYMBOL_STRING_VAL = 45,                /* STRING_VAL  */
  YYSYMBOL_IF = 46,                        /* IF  */
  YYSYMBOL_ELSE = 47,                      /* ELSE  */
  YYSYMBOL_STRING = 48,                    /* STRING  */
  YYSYMBOL_FOR = 49,                       /* FOR  */
  YYSYMBOL_INCREM = 50,                    /* INCREM  */
  YYSYMBOL_DECREM = 51,                    /* DECREM  */
  YYSYMBOL_WHILE = 52,                     /* WHILE  */
  YYSYMBOL_53_ = 53,                       /* '('  */
  YYSYMBOL_54_ = 54,                       /* ')'  */
  YYSYMBOL_55_ = 55,                       /* ':'  */
  YYSYMBOL_56_ = 56,                       /* '{'  */
  YYSYMBOL_57_ = 57,                       /* '}'  */
  YYSYMBOL_58_ = 58,                       /* ';'  */
  YYSYMBOL_59_ = 59,                       /* ','  */
  YYSYMBOL_60_ = 60,                       /* '['  */
  YYSYMBOL_61_ = 61,                       /* ']'  */
  YYSYMBOL_62_ = 62,                       /* '|'  */
  YYSYMBOL_63_ = 63,                       /* '='  */
  YYSYMBOL_64_ = 64,                       /* '*'  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_start = 66,                     /* start  */
  YYSYMBOL_main = 67,                      /* main  */
  YYSYMBOL_functions = 68,                 /* functions  */
  YYSYMBOL_function = 69,                  /* function  */
  YYSYMBOL_var_types = 70,                 /* var_types  */
  YYSYMBOL_var_static = 71,                /* var_static  */
  YYSYMBOL_main_func = 72,                 /* main_func  */
  YYSYMBOL_var_start = 73,                 /* var_start  */
  YYSYMBOL_parameter_list = 74,            /* parameter_list  */
  YYSYMBOL_pdecleration = 75,              /* pdecleration  */
  YYSYMBOL_identifiers = 76,               /* identifiers  */
  YYSYMBOL_next_identifier = 77,           /* next_identifier  */
  YYSYMBOL_func_body = 78,                 /* func_body  */
  YYSYMBOL_func_body_static = 79,          /* func_body_static  */
  YYSYMBOL_const_value = 80,               /* const_value  */
  YYSYMBOL_integer = 81,                   /* integer  */
  YYSYMBOL_expression = 82,                /* expression  */
  YYSYMBOL_expression_static = 83,         /* expression_static  */
  YYSYMBOL_op_unary = 84,                  /* op_unary  */
  YYSYMBOL_statement = 85,                 /* statement  */
  YYSYMBOL_statement_static = 86,          /* statement_static  */
  YYSYMBOL_assignment = 87,                /* assignment  */
  YYSYMBOL_assignment_static = 88,         /* assignment_static  */
  YYSYMBOL_lhs = 89,                       /* lhs  */
  YYSYMBOL_code_block = 90,                /* code_block  */
  YYSYMBOL_func_call = 91,                 /* func_call  */
  YYSYMBOL_func_call_static = 92,          /* func_call_static  */
  YYSYMBOL_expressions = 93,               /* expressions  */
  YYSYMBOL_expressions_static = 94,        /* expressions_static  */
  YYSYMBOL_expressions_ne = 95,            /* expressions_ne  */
  YYSYMBOL_expressions_ne_static = 96,     /* expressions_ne_static  */
  YYSYMBOL_if = 97,                        /* if  */
  YYSYMBOL_if_else = 98,                   /* if_else  */
  YYSYMBOL_if_else_block = 99,             /* if_else_block  */
  YYSYMBOL_if_else_statement = 100,        /* if_else_statement  */
  YYSYMBOL_while = 101,                    /* while  */
  YYSYMBOL_do_while = 102,                 /* do_while  */
  YYSYMBOL_for = 103,                      /* for  */
  YYSYMBOL_update = 104,                   /* update  */
  YYSYMBOL_statements = 105,               /* statements  */
  YYSYMBOL_statements_static = 106,        /* statements_static  */
  YYSYMBOL_statements_ne = 107,            /* statements_ne  */
  YYSYMBOL_statements_ne_static = 108,     /* statements_ne_static  */
  YYSYMBOL_variable_declaration = 109,     /* variable_declaration  */
  YYSYMBOL_str_declaration = 110,          /* str_declaration  */
  YYSYMBOL_integer_value = 111,            /* integer_value  */
  YYSYMBOL_variable_ass = 112,             /* variable_ass  */
  YYSYMBOL_type = 113,                     /* type  */
  YYSYMBOL_var_declr = 114,                /* var_declr  */
  YYSYMBOL_var_declr_ne = 115              /* var_declr_ne  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
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
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1337

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  191
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  409

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    54,    64,     2,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,    58,
       2,    63,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,    62,    57,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    77,    77,    78,    79,    80,    83,    89,    95,    96,
      99,   107,   115,   124,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   147,   150,   152,   153,   157,   158,
     161,   162,   165,   166,   169,   170,   173,   174,   175,   176,
     179,   180,   181,   182,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   200,   201,   202,   203,
     204,   205,   206,   207,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   253,   254,   255,   258,
     259,   260,   261,   262,   263,   264,   265,   268,   269,   270,
     271,   272,   273,   274,   275,   277,   278,   281,   301,   319,
     320,   321,   324,   327,   339,   352,   366,   377,   389,   402,
     416,   430,   431,   434,   435,   438,   439,   442,   443,   446,
     447,   450,   452,   454,   456,   459,   460,   461,   462,   465,
     466,   467,   470,   473,   476,   479,   480,   483,   484,   486,
     487,   489,   490,   493,   494,   497,   499,   506,   509,   514,
     518,   523,   524,   525,   526,   529,   546,   566,   569,   570,
     573,   574
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

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
  "integer_value", "variable_ass", "type", "var_declr", "var_declr_ne", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-327)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-141)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,  -327,  -327,    91,    10,    10,  -327,  1321,  -327,    10,
    1321,  -327,  -327,  -327,  -327,  -327,  -327,  -327,  -327,  -327,
    -327,  -327,  -327,    79,    25,  -327,    76,    94,   157,    52,
    1321,   188,    80,   -25,  -327,   270,    96,   154,    19,   172,
     277,  1266,   154,    19,   172,  -327,   159,  1321,   225,    19,
     196,  -327,   840,    16,   174,  -327,   154,    19,  -327,   203,
     222,  -327,    19,  -327,   206,   241,  -327,   840,  -327,    70,
     226,   253,   255,   264,    16,   298,  -327,   265,   278,  -327,
    -327,  -327,  -327,  -327,  -327,   307,   840,  -327,   319,  -327,
     289,   296,    19,  -327,    19,   300,   842,   331,   214,   335,
     310,   728,    16,   728,   -19,   728,   302,   840,  -327,  -327,
     359,   728,  -327,   174,    19,  -327,   303,   842,  -327,   176,
      16,  -327,   304,   315,  -327,  -327,  -327,  -327,  -327,  -327,
     338,   842,     9,   309,   313,  -327,  -327,  -327,    67,   163,
    -327,   151,   318,   728,  -327,  -327,  -327,  -327,  -327,   115,
    -327,  -327,   220,  -327,   262,   356,  -327,  -327,   728,   323,
     728,  -327,  -327,  1257,   728,   325,  -327,   328,   327,   945,
     337,  1158,   342,   347,   343,  1175,  -327,  -327,   212,  -327,
    1257,   995,  -327,   350,  -327,   385,   400,   362,  -327,   441,
     769,  -327,   891,  -327,  -327,  -327,  -327,  -327,  -327,   214,
     214,   214,    97,  1016,   728,  -327,  -327,  -327,  -327,  -327,
    1192,  -327,   907,   728,   728,   728,   728,   728,   728,   728,
     728,   728,   728,   728,   728,  1257,   389,   358,   728,  -327,
     368,    53,   728,   482,   840,   523,  -327,  -327,   769,   177,
     403,   728,   364,   728,   371,   372,  1270,  -327,   728,   369,
    -327,   377,   374,  -327,   204,  -327,  -327,   387,  -327,  -327,
     266,   267,  -327,   376,  -327,  -327,  -327,  -327,   225,   401,
    -327,   958,  -327,  -327,   888,  -327,   932,   153,   153,   153,
     153,    83,   439,  1283,    83,  -327,   390,  -327,  1257,   394,
     728,    93,  -327,   402,  1029,  -327,   399,   406,   405,   564,
     728,   410,  1209,  -327,   920,   728,   728,   728,   728,   728,
     728,   728,   728,   728,   728,   728,   728,  1050,   424,   412,
     769,   605,  -327,  -327,  -327,  -327,  -327,   437,  -327,   418,
     421,   646,   728,  1063,   728,     5,   430,   829,   -19,   199,
     431,  -327,   432,  1270,   982,   440,   443,  1128,   444,  1143,
     230,   273,   308,   398,   113,   357,  1116,   180,   446,   435,
    -327,  -327,   451,   456,   434,  -327,  -327,   453,   458,  1226,
    -327,  1084,   728,   448,    93,  -327,   450,   460,   780,   457,
     132,   687,   793,   459,  -327,   462,   463,  -327,  1097,   831,
     468,   728,   840,   470,   475,   472,  -327,  -327,  -327,    93,
    -327,  -327,  1257,  -327,   473,   478,   481,  -327,  -327
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    26,    27,     0,     3,     2,     8,     0,     1,     5,
       0,     4,     9,    16,    17,    14,    23,    15,    18,    20,
      19,    21,    22,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,   188,     0,
       0,     0,     0,   188,     0,    24,     0,     0,     0,   188,
       0,   190,   167,   189,    33,    31,     0,   188,    29,     0,
       0,    30,   188,   187,     0,     0,   177,   167,    13,   129,
       0,     0,     0,     0,   188,     0,   171,     0,     0,   110,
     112,   111,   113,   114,   115,    39,   168,   191,     0,    32,
       0,     0,   188,     7,   188,     0,   169,     0,     0,    38,
       0,     0,   188,     0,     0,     0,     0,   167,   130,   109,
       0,     0,   172,    35,   188,    12,     0,   169,    11,   129,
     188,   173,     0,     0,   118,   120,   119,   121,   122,   123,
      43,   170,    33,     0,     0,    56,    57,    63,     0,     0,
      62,   181,     0,     0,    44,    47,    48,    53,    54,    64,
      46,    55,   108,   107,     0,     0,   106,    45,     0,     0,
       0,    67,    65,   145,     0,     0,    84,     0,   142,     0,
       0,     0,   129,     0,     0,     0,   116,   132,    64,   126,
     125,     0,    34,     0,     6,    42,     0,     0,   117,     0,
       0,   174,     0,   176,   175,    59,    61,    58,    60,     0,
       0,     0,     0,     0,     0,    52,    50,    51,    49,    81,
       0,   135,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,     0,     0,   131,
       0,     0,     0,     0,     0,     0,    37,    10,     0,    64,
       0,     0,     0,     0,    67,    65,     0,   147,     0,     0,
     105,     0,   144,   124,    64,   128,   127,     0,    48,    46,
       0,     0,    45,   186,   184,   182,   183,   179,     0,     0,
      36,     0,    82,    83,    68,    79,    69,    73,    72,    74,
      75,    77,    70,    71,    76,    78,     0,   134,   146,     0,
       0,   188,   159,   150,     0,   162,     0,     0,     0,     0,
       0,    81,     0,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,    41,    52,    50,    51,    49,     0,   180,     0,
      66,     0,     0,   161,     0,     0,     0,     0,   166,   135,
       0,    40,     0,   145,     0,    82,    83,    68,    79,    69,
      73,    72,    74,    75,    77,    70,    71,    76,    78,     0,
     138,   148,     0,     0,     0,   185,   178,     0,     0,     0,
     160,   158,     0,   149,   188,   152,     0,     0,   134,   135,
      66,     0,   135,     0,   136,     0,     0,   157,     0,     0,
       0,     0,     0,     0,     0,   137,   133,   163,   155,   188,
     154,   153,   165,   164,   136,     0,     0,   137,   151
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -327,  -327,   511,    12,    -2,    43,    59,  -327,   209,  -327,
     498,   -36,   429,    82,   -72,  -168,   -79,   -16,  -180,  -163,
     -85,   414,   447,  -327,   -52,   -61,   -50,   -71,  -231,  -315,
    -327,  -327,   -48,    -3,  -303,  -326,     1,     2,    49,  -327,
     -53,   426,  -327,  -327,   497,   284,   111,   227,  -327,    -6,
    -327
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,    49,     6,    32,    46,    27,    10,    33,
      34,    55,    89,    50,    95,   161,   162,   246,   247,   164,
      76,   121,    77,   122,   165,   335,   166,   250,   167,   251,
     168,   252,    80,    81,   336,   293,    82,    83,    84,   377,
      85,   130,    86,   131,    51,    66,   142,   134,    64,   107,
      53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,   112,    79,    12,   297,   172,   363,    12,    61,   256,
     257,   375,     5,   106,    99,    78,     9,    79,   244,   141,
     116,   244,   244,   248,   263,   124,   248,   248,   372,    40,
       1,     2,    52,    41,    78,    47,    79,    52,    47,     1,
       2,   170,   183,    67,   123,    75,   124,    12,   125,    26,
      23,    52,   174,    24,   177,    78,    96,    79,   298,   187,
     124,   133,   176,   400,    48,   123,   394,    48,    88,   125,
     244,   390,   192,    36,    94,   248,   290,    69,   195,   123,
      70,   196,    25,   125,   163,   169,    96,   171,   117,   175,
      63,     8,    12,   126,   180,   181,   406,   127,   128,    71,
     368,    59,    72,    26,    94,    73,    35,   245,    96,   291,
     245,   245,    47,   214,   126,    90,   334,    75,   127,   128,
     141,   141,   141,   100,   224,    60,    94,   203,   126,    28,
     101,   244,   127,   128,   249,    39,   248,   249,   249,    91,
     361,    48,   210,   214,   212,   129,   292,    29,   225,   295,
     368,    44,   244,   244,   224,   267,   268,   248,   248,   245,
     269,    13,    14,    15,    16,    17,   129,    18,   100,    19,
      20,   -98,    21,    22,   197,   204,    45,   198,  -129,    78,
     129,    79,    78,   214,    79,    30,   249,   199,   271,   220,
     -87,   200,   201,   223,   224,  -131,    54,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,     7,
     214,    31,   288,   244,     7,    62,   294,   180,   248,   163,
     245,   224,  -136,  -136,   135,   302,  -136,   304,   136,   186,
     299,   205,   317,    88,   206,   -85,   101,   300,   -97,   137,
    -129,   245,   245,    37,    38,  -136,  -136,   249,  -136,    65,
     138,  -136,   292,    68,   139,  -136,  -136,   321,   140,    92,
     214,    97,   -85,  -136,   300,   235,   220,  -129,   249,   249,
     223,   224,   204,   207,   333,  -129,   208,   323,   325,    93,
     324,   326,   102,   343,   344,    78,   376,    79,   -94,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,    98,   245,   214,   292,   343,   103,   403,   104,   220,
     264,   265,   266,   223,   224,   163,   369,   105,   371,   144,
     135,   145,   108,   109,   146,    42,    43,   147,   148,   249,
     111,   -93,    56,    57,   149,   150,   151,    78,   214,    79,
      78,   110,    79,   113,   220,   114,   152,   153,   223,   224,
     154,   155,   156,   115,   157,   132,   388,   118,   143,   176,
     184,   190,   188,   158,   159,   343,   -95,   193,   144,   135,
     145,   194,   160,   146,    75,   402,   147,   148,   189,   202,
     209,   211,   227,   178,   150,   151,   228,   214,   226,   216,
     217,   218,   219,   220,   230,   152,   153,   223,   224,   154,
     155,   156,   101,   157,   179,   232,   233,   237,   238,   144,
     135,   145,   158,   286,   146,   -91,   287,   147,   148,   253,
     289,   160,   303,    75,   239,   150,   151,   301,   214,   -88,
     -86,   319,   318,   320,   220,   327,   152,   153,   223,   224,
     154,   240,   156,   331,   157,   322,   329,   332,   359,   337,
     144,   135,   145,   241,   242,   146,   -96,   339,   147,   148,
     340,   364,   243,   341,    75,   254,   150,   151,  -102,   214,
     360,   216,   217,   218,   219,   220,   366,   152,   153,   223,
     224,   154,   240,   156,  -131,   157,   255,   373,   381,   378,
     379,   144,   135,   145,   241,   389,   146,   192,  -103,   147,
     148,  -104,  -100,   243,   -99,    75,   149,   150,   151,   382,
     383,   384,   385,   391,   392,  -139,    11,   395,   152,   153,
     396,   397,   154,   155,   156,   401,   157,   179,   404,   405,
    -138,  -140,   144,   135,   145,   158,   407,   146,   408,    58,
     147,   148,   182,   185,   160,   191,    75,   149,   150,   151,
      87,   173,   328,     0,   365,     0,     0,     0,     0,   152,
     153,     0,     0,   154,   155,   156,     0,   157,     0,     0,
       0,     0,     0,   144,   135,   145,   158,   296,   146,     0,
       0,   147,   148,     0,     0,   160,     0,    75,   239,   150,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,   153,     0,     0,   154,   240,   156,     0,   157,     0,
       0,     0,     0,     0,   144,   135,   145,   241,   342,   146,
       0,     0,   147,   148,     0,     0,   243,     0,    75,   239,
     150,   151,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,   153,     0,     0,   154,   240,   156,     0,   157,
       0,     0,     0,     0,     0,   144,   135,   145,   241,   362,
     146,     0,     0,   147,   148,     0,     0,   243,     0,    75,
     149,   150,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   153,     0,     0,   154,   155,   156,     0,
     157,     0,     0,     0,     0,     0,   144,   135,   145,   158,
     367,   146,     0,     0,   147,   148,     0,     0,   160,     0,
      75,   239,   150,   151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   152,   153,     0,     0,   154,   240,   156,
       0,   157,     0,     0,     0,     0,     0,   144,   135,   145,
     241,   393,   146,     0,     0,   147,   148,     0,     0,   243,
       0,    75,   149,   150,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   152,   153,     0,     0,   154,   155,
     156,     0,   157,     0,     0,     0,     0,     0,   144,   135,
     145,   158,     0,   146,     0,     0,   147,   148,     0,     0,
     160,     0,    75,   239,   150,   151,     0,     0,     0,     0,
       0,     0,     0,  -133,  -133,   152,   153,  -133,     0,   154,
     240,   156,     0,   157,     0,     0,  -140,  -140,     0,     0,
    -140,     0,   241,     0,     0,     0,  -133,  -133,     0,  -133,
       0,   243,  -133,    75,     0,     0,  -133,  -133,     0,  -140,
       0,     0,  -140,     0,  -133,  -140,     0,     0,     0,  -140,
    -140,  -139,   290,    69,   290,    69,    70,  -140,    70,     0,
       0,     0,     0,     0,    69,     0,   119,    70,     0,    70,
       0,     0,     0,     0,     0,    71,     0,    71,    72,     0,
      72,    73,     0,    73,     0,   374,    71,   399,    71,    72,
       0,    72,    73,    75,    73,    75,    74,     0,   120,     0,
     144,     0,   145,     0,    75,   258,    75,     0,   147,   148,
       0,     0,     0,     0,     0,     0,   259,   151,   214,   215,
     216,   217,   218,   219,   220,     0,   221,   260,   223,   224,
       0,   261,     0,     0,     0,   262,   213,   214,   215,   216,
     217,   218,   219,   220,     0,   221,   222,   223,   224,   213,
     214,   215,   216,   217,   218,   219,   220,     0,   221,   222,
     223,   224,   214,     0,   216,   217,   218,   219,   220,   273,
     221,     0,   223,   224,   213,   214,   215,   216,   217,   218,
     219,   220,   346,   221,   222,   223,   224,   213,   214,   215,
     216,   217,   218,   219,   220,     0,   221,   222,   223,   224,
       0,     0,     0,     0,     0,     0,   229,     0,     0,     0,
       0,   213,   214,   215,   216,   217,   218,   219,   220,   330,
     221,   222,   223,   224,   213,   214,   215,   216,   217,   218,
     219,   220,     0,   221,   222,   223,   224,     0,     0,     0,
       0,     0,     0,   380,     0,   213,   214,   215,   216,   217,
     218,   219,   220,   236,   221,   222,   223,   224,   213,   214,
     215,   216,   217,   218,   219,   220,     0,   221,   222,   223,
     224,     0,     0,     0,   270,     0,     0,     0,     0,   213,
     214,   215,   216,   217,   218,   219,   220,   338,   221,   222,
     223,   224,   213,   214,   215,   216,   217,   218,   219,   220,
       0,   221,   222,   223,   224,     0,     0,     0,  -101,     0,
       0,     0,     0,   213,   214,   215,   216,   217,   218,   219,
     220,   370,   221,   222,   223,   224,   213,   214,   215,   216,
     217,   218,   219,   220,     0,   221,   222,   223,   224,     0,
       0,     0,   387,     0,     0,   213,   214,   215,   216,   217,
     218,   219,   220,     0,   221,   398,   223,   224,   214,   215,
     216,   217,   218,   219,   220,     0,   221,     0,   223,   224,
       0,     0,     0,   214,   -92,   216,   217,   218,   219,   220,
       0,   221,     0,   223,   224,     0,   -89,   213,   214,   215,
     216,   217,   218,   219,   220,     0,   221,   222,   223,   224,
       0,   -90,     0,     0,   213,   214,   215,   216,   217,   218,
     219,   220,   231,   221,   222,   223,   224,     0,     0,     0,
       0,   213,   214,   215,   216,   217,   218,   219,   220,   234,
     221,   222,   223,   224,     0,     0,     0,     0,   213,   214,
     215,   216,   217,   218,   219,   220,   272,   221,   222,   223,
     224,     0,     0,     0,     0,   213,   214,   215,   216,   217,
     218,   219,   220,   345,   221,   222,   223,   224,     0,     0,
      13,    14,    15,    16,    17,     0,    18,     0,    19,    20,
     386,    21,    22,     0,     0,     0,   213,   214,   215,   216,
     217,   218,   219,   220,    30,   221,   222,   223,   224,   305,
     306,   307,   308,   309,   310,   311,   312,     0,   313,   314,
     315,   316,   213,   214,   215,   216,   217,   218,   219,   220,
       0,   221,     0,   223,   224,    13,    14,    15,    16,    17,
       0,    18,     0,    19,    20,     0,    21,    22
};

static const yytype_int16 yycheck[] =
{
      52,    86,    52,     5,   235,    24,   321,     9,    44,   189,
     190,   337,     0,    74,    67,    67,     4,    67,   186,    98,
      92,   189,   190,   186,   192,    96,   189,   190,    23,    54,
      20,    21,    38,    58,    86,    19,    86,    43,    19,    20,
      21,   102,   114,    49,    96,    64,   117,    49,    96,    24,
       7,    57,   104,    10,   107,   107,    62,   107,   238,   120,
     131,    97,    57,   389,    48,   117,   381,    48,    59,   117,
     238,   374,    63,    30,    62,   238,    23,    24,    11,   131,
      27,    14,     3,   131,   100,   101,    92,   103,    94,   105,
      47,     0,    94,    96,   110,   111,   399,    96,    96,    46,
     331,    42,    49,    24,    92,    52,    54,   186,   114,    56,
     189,   190,    19,    30,   117,    56,    23,    64,   117,   117,
     199,   200,   201,    53,    41,    43,   114,   143,   131,    53,
      60,   299,   131,   131,   186,    55,   299,   189,   190,    57,
     320,    48,   158,    30,   160,    96,   231,    53,   164,   234,
     381,    55,   320,   321,    41,    58,    59,   320,   321,   238,
      63,     4,     5,     6,     7,     8,   117,    10,    53,    12,
      13,    58,    15,    16,    11,    60,    22,    14,    63,   231,
     131,   231,   234,    30,   234,    28,   238,    36,   204,    36,
      58,    40,    41,    40,    41,    63,    24,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
      30,    54,   228,   381,     5,    56,   232,   233,   381,   235,
     299,    41,    23,    24,    10,   241,    27,   243,    14,    53,
      53,    11,   248,    59,    14,    58,    60,    60,    58,    25,
      63,   320,   321,    55,    56,    46,    47,   299,    49,    24,
      36,    52,   337,    57,    40,    56,    57,    53,    44,    56,
      30,    55,    58,    64,    60,    53,    36,    63,   320,   321,
      40,    41,    60,    11,   290,    63,    14,    11,    11,    57,
      14,    14,    56,   299,   300,   337,   338,   337,    58,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,    60,   381,    30,   389,   321,    53,   392,    53,    36,
     199,   200,   201,    40,    41,   331,   332,    53,   334,     9,
      10,    11,    24,    58,    14,    55,    56,    17,    18,   381,
      23,    58,    55,    56,    24,    25,    26,   389,    30,   389,
     392,    63,   392,    24,    36,    56,    36,    37,    40,    41,
      40,    41,    42,    57,    44,    24,   372,    57,    23,    57,
      57,    23,    58,    53,    54,   381,    58,    58,     9,    10,
      11,    58,    62,    14,    64,   391,    17,    18,    63,    61,
      24,    58,    54,    24,    25,    26,    59,    30,    63,    32,
      33,    34,    35,    36,    57,    36,    37,    40,    41,    40,
      41,    42,    60,    44,    45,    58,    63,    57,    23,     9,
      10,    11,    53,    24,    14,    58,    58,    17,    18,    57,
      52,    62,    58,    64,    24,    25,    26,    24,    30,    58,
      58,    54,    63,    59,    36,    59,    36,    37,    40,    41,
      40,    41,    42,    53,    44,    58,    45,    53,    24,    47,
       9,    10,    11,    53,    54,    14,    58,    58,    17,    18,
      54,    24,    62,    58,    64,    24,    25,    26,    58,    30,
      58,    32,    33,    34,    35,    36,    58,    36,    37,    40,
      41,    40,    41,    42,    63,    44,    45,    57,    53,    58,
      58,     9,    10,    11,    53,    47,    14,    63,    58,    17,
      18,    58,    58,    62,    58,    64,    24,    25,    26,    58,
      54,    58,    54,    63,    54,    58,     5,    58,    36,    37,
      58,    58,    40,    41,    42,    57,    44,    45,    58,    54,
      58,    58,     9,    10,    11,    53,    58,    14,    57,    41,
      17,    18,   113,   117,    62,   131,    64,    24,    25,    26,
      53,   104,   268,    -1,   327,    -1,    -1,    -1,    -1,    36,
      37,    -1,    -1,    40,    41,    42,    -1,    44,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    53,    54,    14,    -1,
      -1,    17,    18,    -1,    -1,    62,    -1,    64,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    -1,    -1,    40,    41,    42,    -1,    44,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    53,    54,    14,
      -1,    -1,    17,    18,    -1,    -1,    62,    -1,    64,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    -1,    40,    41,    42,    -1,    44,
      -1,    -1,    -1,    -1,    -1,     9,    10,    11,    53,    54,
      14,    -1,    -1,    17,    18,    -1,    -1,    62,    -1,    64,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    40,    41,    42,    -1,
      44,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    53,
      54,    14,    -1,    -1,    17,    18,    -1,    -1,    62,    -1,
      64,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37,    -1,    -1,    40,    41,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      53,    54,    14,    -1,    -1,    17,    18,    -1,    -1,    62,
      -1,    64,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    40,    41,
      42,    -1,    44,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    53,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,
      62,    -1,    64,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    36,    37,    27,    -1,    40,
      41,    42,    -1,    44,    -1,    -1,    23,    24,    -1,    -1,
      27,    -1,    53,    -1,    -1,    -1,    46,    47,    -1,    49,
      -1,    62,    52,    64,    -1,    -1,    56,    57,    -1,    46,
      -1,    -1,    49,    -1,    64,    52,    -1,    -1,    -1,    56,
      57,    58,    23,    24,    23,    24,    27,    64,    27,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    24,    27,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    46,    49,    -1,
      49,    52,    -1,    52,    -1,    56,    46,    56,    46,    49,
      -1,    49,    52,    64,    52,    64,    56,    -1,    56,    -1,
       9,    -1,    11,    -1,    64,    14,    64,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    36,    40,    41,
      -1,    40,    -1,    -1,    -1,    44,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    30,    -1,    32,    33,    34,    35,    36,    62,
      38,    -1,    40,    41,    29,    30,    31,    32,    33,    34,
      35,    36,    62,    38,    39,    40,    41,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    61,
      38,    39,    40,    41,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    58,    38,    39,    40,    41,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    58,    38,    39,
      40,    41,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    58,    38,    39,    40,    41,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    58,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    58,    40,    41,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    40,    41,
      -1,    -1,    -1,    30,    58,    32,    33,    34,    35,    36,
      -1,    38,    -1,    40,    41,    -1,    58,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      -1,    58,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    54,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    54,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    54,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    54,    38,    39,    40,    41,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    13,
      54,    15,    16,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    28,    38,    39,    40,    41,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    -1,    40,    41,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    13,    -1,    15,    16
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    20,    21,    66,    67,    68,    69,    73,     0,    68,
      73,    67,    69,     4,     5,     6,     7,     8,    10,    12,
      13,    15,    16,    70,    70,     3,    24,    72,    53,    53,
      28,    54,    70,    74,    75,    54,    70,    55,    56,    55,
      54,    58,    55,    56,    55,    22,    71,    19,    48,    68,
      78,   109,   114,   115,    24,    76,    55,    56,    75,    71,
      78,    76,    56,    70,   113,    24,   110,   114,    57,    24,
      27,    46,    49,    52,    56,    64,    85,    87,    89,    91,
      97,    98,   101,   102,   103,   105,   107,   109,    59,    77,
      71,    78,    56,    57,    68,    79,   114,    55,    60,   105,
      53,    60,    56,    53,    53,    53,    90,   114,    24,    58,
      63,    23,    85,    24,    56,    57,    79,   114,    57,    24,
      56,    86,    88,    89,    92,    97,    98,   101,   102,   103,
     106,   108,    24,    76,   112,    10,    14,    25,    36,    40,
      44,    81,   111,    23,     9,    11,    14,    17,    18,    24,
      25,    26,    36,    37,    40,    41,    42,    44,    53,    54,
      62,    80,    81,    82,    84,    89,    91,    93,    95,    82,
      90,    82,    24,    87,    89,    82,    57,   105,    24,    45,
      82,    82,    77,    79,    57,   106,    53,    90,    58,    63,
      23,    86,    63,    58,    58,    11,    14,    11,    14,    36,
      40,    41,    61,    82,    60,    11,    14,    11,    14,    24,
      82,    58,    82,    29,    30,    31,    32,    33,    34,    35,
      36,    38,    39,    40,    41,    82,    63,    54,    59,    61,
      57,    54,    58,    63,    54,    53,    58,    57,    23,    24,
      41,    53,    54,    62,    80,    81,    82,    83,    84,    89,
      92,    94,    96,    57,    24,    45,    83,    83,    14,    25,
      36,    40,    44,    80,   111,   111,   111,    58,    59,    63,
      58,    82,    54,    62,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    24,    58,    82,    52,
      23,    56,    85,   100,    82,    85,    54,    93,    83,    53,
      60,    24,    82,    58,    82,    29,    30,    31,    32,    33,
      34,    35,    36,    38,    39,    40,    41,    82,    63,    54,
      59,    53,    58,    11,    14,    11,    14,    59,   110,    45,
      61,    53,    53,    82,    23,    90,    99,    47,    58,    58,
      54,    58,    54,    82,    82,    54,    62,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    24,
      58,    83,    54,    94,    24,   112,    58,    54,    93,    82,
      58,    82,    23,    57,    56,   100,    89,   104,    58,    58,
      61,    53,    58,    54,    58,    54,    54,    58,    82,    47,
      99,    63,    54,    54,    94,    58,    58,    58,    58,    56,
     100,    57,    82,    85,    58,    54,    99,    58,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    72,    73,    73,    74,    74,
      75,    75,    76,    76,    77,    77,    78,    78,    78,    78,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    87,    87,    88,    88,    89,
      89,    89,    90,    91,    91,    91,    91,    92,    92,    92,
      92,    93,    93,    94,    94,    95,    95,    96,    96,    97,
      97,    98,    98,    98,    98,    99,    99,    99,    99,   100,
     100,   100,   101,   102,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   109,   110,   110,
     110,   111,   111,   111,   111,   112,   112,   113,   114,   114,
     115,   115
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,    10,     8,     1,     2,
      11,    10,     9,     8,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     1,     3,     0,     6,     5,     3,     2,
       6,     5,     3,     2,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     1,     1,     1,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     1,
       2,     4,     2,     7,     5,     4,     6,     7,     5,     4,
       6,     0,     1,     0,     1,     1,     3,     1,     3,     7,
       5,    11,     7,     9,     9,     4,     1,     3,     2,     1,
       3,     2,     5,     9,     9,     3,     0,     0,     1,     0,
       1,     1,     2,     1,     2,     5,     5,     2,     7,     5,
       6,     1,     3,     3,     3,     5,     3,     1,     0,     1,
       1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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

int
yyparse (void)
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



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
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
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
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
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: functions  */
#line 77 "parser.y"
                                        {printTree(mkNode("CODE1",1,mkParent("",(yyvsp[0].nPtr))), 0, 0, 1);printf("\n");}
#line 1838 "y.tab.c"
    break;

  case 3: /* start: main  */
#line 78 "parser.y"
                                                {printTree(mkNode("CODE2",1,(yyvsp[0].nPtr)), 0, 0, 1);printf("\n");}
#line 1844 "y.tab.c"
    break;

  case 4: /* start: functions main  */
#line 79 "parser.y"
                                        {printTree(mkNode("CODE3",2,mkParent("",(yyvsp[-1].nPtr)),mkParent("",(yyvsp[0].nPtr))), 0, 0, 1);printf("\n");}
#line 1850 "y.tab.c"
    break;

  case 5: /* start: main functions  */
#line 80 "parser.y"
                                        {printTree(mkNode("CODE4",2,mkParent("",(yyvsp[-1].nPtr)),mkParent("",(yyvsp[0].nPtr))), 0, 0, 1);printf("\n");}
#line 1856 "y.tab.c"
    break;

  case 6: /* main: var_start var_types main_func '(' ')' ':' var_static '{' func_body_static '}'  */
#line 84 "parser.y"
                                                {	addToSymbolTableStatic(symTable,(yyvsp[-7].nPtr));
							(yyval.nPtr) = mkNode("MAIN",7, mkNode((yyvsp[-7].nPtr),0),mkNode((yyvsp[-3].nPtr), 0),mkNode((yyvsp[-9].nPtr),0),mkParent("ARGS",mkNode("NONE", 0)),mkParent("RETURN",mkNode((yyvsp[-8].nPtr),0)), (yyvsp[-1].nPtr));
							}
#line 1864 "y.tab.c"
    break;

  case 7: /* main: var_start var_types main_func '(' ')' '{' func_body '}'  */
#line 90 "parser.y"
                                                {	addToSymbolTable(symTable,(yyvsp[-5].nPtr));
							(yyval.nPtr) = mkNode("MAIN",7, mkNode((yyvsp[-5].nPtr),0),mkNode("NONSTATIC",0),mkNode((yyvsp[-7].nPtr),0),mkParent("ARGS",mkNode("NONE", 0)),mkParent("RETURN",mkNode((yyvsp[-6].nPtr),0)), (yyvsp[-1].nPtr));}
#line 1871 "y.tab.c"
    break;

  case 8: /* functions: function  */
#line 95 "parser.y"
                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1877 "y.tab.c"
    break;

  case 9: /* functions: functions function  */
#line 96 "parser.y"
                                                                {(yyval.nPtr) = mkNode("",2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 1883 "y.tab.c"
    break;

  case 10: /* function: var_start var_types ID '(' parameter_list ')' ':' var_static '{' func_body_static '}'  */
#line 100 "parser.y"
                        {
				if(addToSymbolTableStatic(symTable, (yyvsp[-8].value))==1){
					(yyval.nPtr) = mkNode("FUNC", 6, mkNode((yyvsp[-8].value), 0), mkNode((yyvsp[-3].nPtr), 0), mkNode((yyvsp[-10].nPtr), 0), mkParent("ARGS ", (yyvsp[-6].nPtr)), mkParent("RETURN", mkNode((yyvsp[-9].nPtr), 0)), (yyvsp[-1].nPtr));
				}else{
					YYABORT;
				} 
			}
#line 1895 "y.tab.c"
    break;

  case 11: /* function: var_start var_types ID '(' ')' ':' var_static '{' func_body_static '}'  */
#line 108 "parser.y"
                        {
				if(addToSymbolTableStatic(symTable, (yyvsp[-7].value))==1){
					(yyval.nPtr) = mkNode("FUNC", 7, mkNode((yyvsp[-7].value), 0), mkNode((yyvsp[-3].nPtr), 0), mkNode((yyvsp[-9].nPtr), 0), mkParent("ARGS", mkNode("NONE", 0)), mkParent("RETURN", mkNode((yyvsp[-8].nPtr), 0)), (yyvsp[-1].nPtr));
				}else{
					YYABORT;
				}
			}
#line 1907 "y.tab.c"
    break;

  case 12: /* function: var_start var_types ID '(' parameter_list ')' '{' func_body '}'  */
#line 116 "parser.y"
                        {
				if(addToSymbolTable(symTable, (yyvsp[-6].value))==1){
					(yyval.nPtr) = mkNode("FUNC", 6, mkNode((yyvsp[-6].value), 0), mkNode("NONSTATIC", 0), mkNode((yyvsp[-8].nPtr), 0), mkParent("ARGS ", (yyvsp[-4].nPtr)), mkParent("RETURN", mkNode((yyvsp[-7].nPtr), 0)), (yyvsp[-1].nPtr));	
				}else{
					YYABORT;
				}
				
			}
#line 1920 "y.tab.c"
    break;

  case 13: /* function: var_start var_types ID '(' ')' '{' func_body '}'  */
#line 125 "parser.y"
                        {
				if(addToSymbolTable(symTable, (yyvsp[-5].value))==1){
					(yyval.nPtr) = mkNode("FUNC", 7, mkNode((yyvsp[-5].value), 0), mkNode("NONSTATIC", 0), mkNode((yyvsp[-7].nPtr), 0), mkParent("ARGS", mkNode("NONE", 0)), mkParent("RETURN", mkNode((yyvsp[-6].nPtr), 0)), (yyvsp[-1].nPtr));
				}else{
					YYABORT;
				}
			}
#line 1932 "y.tab.c"
    break;

  case 14: /* var_types: CHAR  */
#line 134 "parser.y"
                                                        {(yyval.nPtr) = "CHAR";}
#line 1938 "y.tab.c"
    break;

  case 15: /* var_types: CHARPTR  */
#line 135 "parser.y"
                                                                {(yyval.nPtr) = "CHARPTR";}
#line 1944 "y.tab.c"
    break;

  case 16: /* var_types: INT  */
#line 136 "parser.y"
                                                                        {(yyval.nPtr) = "INT";}
#line 1950 "y.tab.c"
    break;

  case 17: /* var_types: INTPTR  */
#line 137 "parser.y"
                                                                {(yyval.nPtr) = "INTPTR";}
#line 1956 "y.tab.c"
    break;

  case 18: /* var_types: FLOAT  */
#line 138 "parser.y"
                                                                {(yyval.nPtr) = "FLOAT";}
#line 1962 "y.tab.c"
    break;

  case 19: /* var_types: DOUBLE  */
#line 139 "parser.y"
                                                                {(yyval.nPtr) = "DOUBLE";}
#line 1968 "y.tab.c"
    break;

  case 20: /* var_types: FLOATPTR  */
#line 140 "parser.y"
                                                                {(yyval.nPtr) = "FLOATPTR";}
#line 1974 "y.tab.c"
    break;

  case 21: /* var_types: DOUBLEPTR  */
#line 141 "parser.y"
                                                                {(yyval.nPtr) = "DOUBLEPTR";}
#line 1980 "y.tab.c"
    break;

  case 22: /* var_types: BOOLEAN  */
#line 142 "parser.y"
                                                                {(yyval.nPtr) = "BOOLEAN";}
#line 1986 "y.tab.c"
    break;

  case 23: /* var_types: VOID  */
#line 143 "parser.y"
                                                                {(yyval.nPtr) = "VOID";}
#line 1992 "y.tab.c"
    break;

  case 24: /* var_static: STATIC  */
#line 147 "parser.y"
                                                        {(yyval.nPtr) = "STATIC";}
#line 1998 "y.tab.c"
    break;

  case 25: /* main_func: MAIN  */
#line 150 "parser.y"
                                                                {(yyval.nPtr) = "main";}
#line 2004 "y.tab.c"
    break;

  case 26: /* var_start: PUBLIC  */
#line 152 "parser.y"
                                                        {(yyval.nPtr) = "PUBLIC";}
#line 2010 "y.tab.c"
    break;

  case 27: /* var_start: PRIVATE  */
#line 153 "parser.y"
                                                                {(yyval.nPtr) = "PRIVATE";}
#line 2016 "y.tab.c"
    break;

  case 28: /* parameter_list: pdecleration  */
#line 157 "parser.y"
                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2022 "y.tab.c"
    break;

  case 29: /* parameter_list: parameter_list ';' pdecleration  */
#line 158 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2028 "y.tab.c"
    break;

  case 30: /* pdecleration: ARG_OP var_types ':' identifiers  */
#line 161 "parser.y"
                                                                        {(yyval.nPtr) = mkParent((yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2034 "y.tab.c"
    break;

  case 31: /* pdecleration: var_types ':' identifiers  */
#line 162 "parser.y"
                                                                                {(yyval.nPtr) = mkParent((yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2040 "y.tab.c"
    break;

  case 32: /* identifiers: ID next_identifier  */
#line 165 "parser.y"
                                                                                {(yyval.nPtr) = mkNode((yyvsp[-1].value),1,(yyvsp[0].nPtr));}
#line 2046 "y.tab.c"
    break;

  case 33: /* identifiers: ID  */
#line 166 "parser.y"
                                                                                                        {(yyval.nPtr) = mkNode((yyvsp[0].value),0);}
#line 2052 "y.tab.c"
    break;

  case 34: /* next_identifier: ',' ID next_identifier  */
#line 169 "parser.y"
                                                                {(yyval.nPtr) = mkNode("",2,mkNode((yyvsp[-1].value),0),(yyvsp[0].nPtr));}
#line 2058 "y.tab.c"
    break;

  case 35: /* next_identifier: %empty  */
#line 170 "parser.y"
                                                                                                        {(yyval.nPtr) = NULL;}
#line 2064 "y.tab.c"
    break;

  case 36: /* func_body: functions var_declr statements RETURN expression ';'  */
#line 173 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("BODY",4,mkParent("",(yyvsp[-5].nPtr)),mkParent("VAR",(yyvsp[-4].nPtr)),(yyvsp[-3].nPtr),mkParent("RET",(yyvsp[-1].nPtr)));}
#line 2070 "y.tab.c"
    break;

  case 37: /* func_body: var_declr statements RETURN expression ';'  */
#line 174 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("BODY",3,mkParent("VAR",(yyvsp[-4].nPtr)),(yyvsp[-3].nPtr),mkParent("RET",(yyvsp[-1].nPtr)));}
#line 2076 "y.tab.c"
    break;

  case 38: /* func_body: functions var_declr statements  */
#line 175 "parser.y"
                                                                                                {(yyval.nPtr) = mkNode("BODY",3,mkParent("",(yyvsp[-2].nPtr)),mkParent("VAR",(yyvsp[-1].nPtr)),(yyvsp[0].nPtr));}
#line 2082 "y.tab.c"
    break;

  case 39: /* func_body: var_declr statements  */
#line 176 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("BODY",2,mkParent("VAR",(yyvsp[-1].nPtr)),(yyvsp[0].nPtr));}
#line 2088 "y.tab.c"
    break;

  case 40: /* func_body_static: functions var_declr statements_static RETURN expression_static ';'  */
#line 179 "parser.y"
                                                                                                        {(yyval.nPtr) = mkNode("BODYSTATIC",4,mkParent("",(yyvsp[-5].nPtr)),mkParent("VAR",(yyvsp[-4].nPtr)),(yyvsp[-3].nPtr),mkParent("RET",(yyvsp[-1].nPtr)));}
#line 2094 "y.tab.c"
    break;

  case 41: /* func_body_static: var_declr statements_static RETURN expression_static ';'  */
#line 180 "parser.y"
                                                                                                        {(yyval.nPtr) = mkNode("BODY",3,mkParent("VAR",(yyvsp[-4].nPtr)),(yyvsp[-3].nPtr),mkParent("RET",(yyvsp[-1].nPtr)));}
#line 2100 "y.tab.c"
    break;

  case 42: /* func_body_static: functions var_declr statements_static  */
#line 181 "parser.y"
                                                                                                        {(yyval.nPtr) = mkNode("BODY",3,mkParent("",(yyvsp[-2].nPtr)),mkParent("VAR",(yyvsp[-1].nPtr)),(yyvsp[0].nPtr));}
#line 2106 "y.tab.c"
    break;

  case 43: /* func_body_static: var_declr statements_static  */
#line 182 "parser.y"
                                                                                                {(yyval.nPtr) = mkNode("BODY",2,mkParent("VAR",(yyvsp[-1].nPtr)),(yyvsp[0].nPtr));}
#line 2112 "y.tab.c"
    break;

  case 44: /* const_value: CHAR_VAL  */
#line 186 "parser.y"
                                {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2118 "y.tab.c"
    break;

  case 45: /* const_value: HEX_VAL  */
#line 187 "parser.y"
                                            {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2124 "y.tab.c"
    break;

  case 46: /* const_value: INT_VAL  */
#line 188 "parser.y"
                                                {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2130 "y.tab.c"
    break;

  case 47: /* const_value: FLOAT_VAL  */
#line 189 "parser.y"
                                                {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2136 "y.tab.c"
    break;

  case 48: /* const_value: DOUBLE_VAL  */
#line 190 "parser.y"
                                                {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2142 "y.tab.c"
    break;

  case 49: /* const_value: PLUS DOUBLE_VAL  */
#line 191 "parser.y"
                                          { (yyval.value) = mkNode("+",1,mkNode((yyvsp[0].value),0));}
#line 2148 "y.tab.c"
    break;

  case 50: /* const_value: MINUS DOUBLE_VAL  */
#line 192 "parser.y"
                                           { (yyval.value) = mkNode("-",1,mkNode((yyvsp[0].value),0)); }
#line 2154 "y.tab.c"
    break;

  case 51: /* const_value: PLUS FLOAT_VAL  */
#line 193 "parser.y"
                                         { (yyval.value) = mkNode("+",1,mkNode((yyvsp[0].value),0));}
#line 2160 "y.tab.c"
    break;

  case 52: /* const_value: MINUS FLOAT_VAL  */
#line 194 "parser.y"
                                          { (yyval.value) = mkNode("-",1,mkNode((yyvsp[0].value),0)); }
#line 2166 "y.tab.c"
    break;

  case 53: /* const_value: TRUE  */
#line 195 "parser.y"
                                                {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2172 "y.tab.c"
    break;

  case 54: /* const_value: FALSE  */
#line 196 "parser.y"
                                                {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2178 "y.tab.c"
    break;

  case 55: /* const_value: NONE  */
#line 197 "parser.y"
                                                {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2184 "y.tab.c"
    break;

  case 56: /* integer: FLOAT  */
#line 200 "parser.y"
                                        {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2190 "y.tab.c"
    break;

  case 57: /* integer: DOUBLE_VAL  */
#line 201 "parser.y"
                                                {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2196 "y.tab.c"
    break;

  case 58: /* integer: PLUS FLOAT_VAL  */
#line 202 "parser.y"
                                         {(yyval.value) = mkNode("+",1,mkNode((yyvsp[0].value),0));}
#line 2202 "y.tab.c"
    break;

  case 59: /* integer: MINUS FLOAT_VAL  */
#line 203 "parser.y"
                                         {(yyval.value) = mkNode("-",1,mkNode((yyvsp[0].value),0));}
#line 2208 "y.tab.c"
    break;

  case 60: /* integer: PLUS DOUBLE_VAL  */
#line 204 "parser.y"
                                          {(yyval.value) = mkNode("+",1,mkNode((yyvsp[0].value),0));}
#line 2214 "y.tab.c"
    break;

  case 61: /* integer: MINUS DOUBLE_VAL  */
#line 205 "parser.y"
                                          {(yyval.value) = mkNode("-",1,mkNode((yyvsp[0].value),0));}
#line 2220 "y.tab.c"
    break;

  case 62: /* integer: HEX_VAL  */
#line 206 "parser.y"
                                              {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2226 "y.tab.c"
    break;

  case 63: /* integer: INT_VAL  */
#line 207 "parser.y"
                                          {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 2232 "y.tab.c"
    break;

  case 64: /* expression: ID  */
#line 209 "parser.y"
                                                                                                {(yyval.nPtr) = mkNode((yyvsp[0].value),0);}
#line 2238 "y.tab.c"
    break;

  case 65: /* expression: integer  */
#line 210 "parser.y"
                                                                                                {(yyval.nPtr) = (yyvsp[0].value);}
#line 2244 "y.tab.c"
    break;

  case 66: /* expression: ID '[' expression ']'  */
#line 211 "parser.y"
                                                                                {(yyval.nPtr) = mkNode((yyvsp[-3].value),3,mkNode("[",0),(yyvsp[-1].nPtr),mkNode("]",0));}
#line 2250 "y.tab.c"
    break;

  case 67: /* expression: const_value  */
#line 212 "parser.y"
                                                                                                {(yyval.nPtr) = (yyvsp[0].value);}
#line 2256 "y.tab.c"
    break;

  case 68: /* expression: expression AND expression  */
#line 213 "parser.y"
                                                                    {(yyval.nPtr) = mkNode("AND",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2262 "y.tab.c"
    break;

  case 69: /* expression: expression EQUAL expression  */
#line 214 "parser.y"
                                                                    {(yyval.nPtr) = mkNode("==",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2268 "y.tab.c"
    break;

  case 70: /* expression: expression NOT_EQ expression  */
#line 215 "parser.y"
                                                                    {(yyval.nPtr) = mkNode("!=",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2274 "y.tab.c"
    break;

  case 71: /* expression: expression OR expression  */
#line 216 "parser.y"
                                                                    {(yyval.nPtr) = mkNode("OR",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2280 "y.tab.c"
    break;

  case 72: /* expression: expression BIGGER expression  */
#line 217 "parser.y"
                                                                        {(yyval.nPtr) = mkNode(">",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2286 "y.tab.c"
    break;

  case 73: /* expression: expression BIGGER_EQ expression  */
#line 218 "parser.y"
                                                                    {(yyval.nPtr) = mkNode(">=",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2292 "y.tab.c"
    break;

  case 74: /* expression: expression SMALLER_EQ expression  */
#line 219 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("<=",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2298 "y.tab.c"
    break;

  case 75: /* expression: expression SMALLER expression  */
#line 220 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("<",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2304 "y.tab.c"
    break;

  case 76: /* expression: expression PLUS expression  */
#line 221 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("+",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2310 "y.tab.c"
    break;

  case 77: /* expression: expression MINUS expression  */
#line 222 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("-",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2316 "y.tab.c"
    break;

  case 78: /* expression: expression MUL expression  */
#line 223 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("*",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2322 "y.tab.c"
    break;

  case 79: /* expression: expression DIV expression  */
#line 224 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("/",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2328 "y.tab.c"
    break;

  case 80: /* expression: op_unary expression  */
#line 225 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode((yyvsp[-1].value),1,(yyvsp[0].nPtr));}
#line 2334 "y.tab.c"
    break;

  case 81: /* expression: MUL ID  */
#line 226 "parser.y"
                                                                                                {(yyval.nPtr) = mkNode("*",1,mkNode((yyvsp[0].value),0));}
#line 2340 "y.tab.c"
    break;

  case 82: /* expression: '(' expression ')'  */
#line 227 "parser.y"
                                                                                        {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 2346 "y.tab.c"
    break;

  case 83: /* expression: '|' expression '|'  */
#line 228 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("|",2,(yyvsp[-1].nPtr),mkNode("|",0));}
#line 2352 "y.tab.c"
    break;

  case 84: /* expression: func_call  */
#line 229 "parser.y"
                                                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2358 "y.tab.c"
    break;

  case 85: /* expression_static: ID  */
#line 231 "parser.y"
                                                                                                        {(yyval.nPtr) = mkNode((yyvsp[0].value),0);}
#line 2364 "y.tab.c"
    break;

  case 86: /* expression_static: integer  */
#line 232 "parser.y"
                                                                                                {(yyval.nPtr) = (yyvsp[0].value);}
#line 2370 "y.tab.c"
    break;

  case 87: /* expression_static: ID '[' expression ']'  */
#line 233 "parser.y"
                                                                                {(yyval.nPtr) = mkNode((yyvsp[-3].value),3,mkNode("[",0),(yyvsp[-1].nPtr),mkNode("]",0));}
#line 2376 "y.tab.c"
    break;

  case 88: /* expression_static: const_value  */
#line 234 "parser.y"
                                                                                                {(yyval.nPtr) = (yyvsp[0].value);}
#line 2382 "y.tab.c"
    break;

  case 89: /* expression_static: expression AND expression  */
#line 235 "parser.y"
                                                                    {(yyval.nPtr) = mkNode("AND",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2388 "y.tab.c"
    break;

  case 90: /* expression_static: expression EQUAL expression  */
#line 236 "parser.y"
                                                                    {(yyval.nPtr) = mkNode("==",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2394 "y.tab.c"
    break;

  case 91: /* expression_static: expression NOT_EQ expression  */
#line 237 "parser.y"
                                                                    {(yyval.nPtr) = mkNode("!=",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2400 "y.tab.c"
    break;

  case 92: /* expression_static: expression OR expression  */
#line 238 "parser.y"
                                                                    {(yyval.nPtr) = mkNode("OR",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2406 "y.tab.c"
    break;

  case 93: /* expression_static: expression BIGGER expression  */
#line 239 "parser.y"
                                                                        {(yyval.nPtr) = mkNode(">",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2412 "y.tab.c"
    break;

  case 94: /* expression_static: expression BIGGER_EQ expression  */
#line 240 "parser.y"
                                                                    {(yyval.nPtr) = mkNode(">=",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2418 "y.tab.c"
    break;

  case 95: /* expression_static: expression SMALLER_EQ expression  */
#line 241 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("<=",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2424 "y.tab.c"
    break;

  case 96: /* expression_static: expression SMALLER expression  */
#line 242 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("<",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2430 "y.tab.c"
    break;

  case 97: /* expression_static: expression PLUS expression  */
#line 243 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("+",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2436 "y.tab.c"
    break;

  case 98: /* expression_static: expression MINUS expression  */
#line 244 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("-",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2442 "y.tab.c"
    break;

  case 99: /* expression_static: expression MUL expression  */
#line 245 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("*",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2448 "y.tab.c"
    break;

  case 100: /* expression_static: expression DIV expression  */
#line 246 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("/",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2454 "y.tab.c"
    break;

  case 101: /* expression_static: op_unary expression  */
#line 247 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode((yyvsp[-1].value),1,(yyvsp[0].nPtr));}
#line 2460 "y.tab.c"
    break;

  case 102: /* expression_static: MUL ID  */
#line 248 "parser.y"
                                                                                                {(yyval.nPtr) = mkNode("*",1,mkNode((yyvsp[0].value),0));}
#line 2466 "y.tab.c"
    break;

  case 103: /* expression_static: '(' expression ')'  */
#line 249 "parser.y"
                                                                                        {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 2472 "y.tab.c"
    break;

  case 104: /* expression_static: '|' expression '|'  */
#line 250 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("|",2,(yyvsp[-1].nPtr),mkNode("|",0));}
#line 2478 "y.tab.c"
    break;

  case 105: /* expression_static: func_call_static  */
#line 251 "parser.y"
                                                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2484 "y.tab.c"
    break;

  case 116: /* statement: '{' code_block '}'  */
#line 265 "parser.y"
                                                      {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 2490 "y.tab.c"
    break;

  case 124: /* statement_static: '{' code_block '}'  */
#line 275 "parser.y"
                                                      {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 2496 "y.tab.c"
    break;

  case 125: /* assignment: lhs '=' expression  */
#line 277 "parser.y"
                                                        {(yyval.nPtr) = mkNode("ASS3",2,mkNode("",1,(yyvsp[-2].nPtr)),(yyvsp[0].nPtr));}
#line 2502 "y.tab.c"
    break;

  case 126: /* assignment: lhs '=' STRING_VAL  */
#line 278 "parser.y"
                                                                {(yyval.nPtr) = mkNode("ASS4",2,(yyvsp[-2].nPtr),mkNode((yyvsp[0].value),0));}
#line 2508 "y.tab.c"
    break;

  case 127: /* assignment_static: lhs '=' expression_static  */
#line 282 "parser.y"
                {	
			
			if(check_variable_type_2(var_list, (yyvsp[-2].nPtr),(yyvsp[0].nPtr)) == 1) {
				(yyval.nPtr) = mkNode("ASS5.1",2,mkNode("",1,(yyvsp[-2].nPtr)),(yyvsp[0].nPtr));

				}
				else if(check_variable_type_2(var_list, (yyvsp[-2].nPtr),(yyvsp[0].nPtr)) == -1){
					printf("Sorry wrong assignment type\n");
					YYABORT; 

				}
				else{

					(yyval.nPtr) = mkNode("ASS5.2",2,mkNode("",1,(yyvsp[-2].nPtr)),(yyvsp[0].nPtr));
	

				}
			
		}
#line 2532 "y.tab.c"
    break;

  case 128: /* assignment_static: lhs '=' STRING_VAL  */
#line 302 "parser.y"
                        {
				
				if(check_variable_type_3(var_list, (yyvsp[-2].nPtr),(yyvsp[0].value)) == 1){
					(yyval.nPtr) = mkNode("ASS6",2,(yyvsp[-2].nPtr),mkNode((yyvsp[0].value),0));

				}
				else if (check_variable_type_3(var_list, (yyvsp[-2].nPtr),(yyvsp[0].value)) == -1){
					printf("Sorry wrong assignment type\n");
					YYABORT; 
				}
				else {
					(yyval.nPtr) = mkNode("ASS6",2,(yyvsp[-2].nPtr),mkNode((yyvsp[0].value),0));

				}
			}
#line 2552 "y.tab.c"
    break;

  case 129: /* lhs: ID  */
#line 319 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode((yyvsp[0].value),0);}
#line 2558 "y.tab.c"
    break;

  case 130: /* lhs: '*' ID  */
#line 320 "parser.y"
                                                                                                {(yyval.nPtr) = mkNode("*",1,mkNode((yyvsp[0].value),0));}
#line 2564 "y.tab.c"
    break;

  case 131: /* lhs: ID '[' expression ']'  */
#line 321 "parser.y"
                                                                                {(yyval.nPtr) = mkNode((yyvsp[-3].value),3,mkNode("[",0),(yyvsp[-1].nPtr),mkNode("]",0));}
#line 2570 "y.tab.c"
    break;

  case 132: /* code_block: var_declr statements  */
#line 324 "parser.y"
                                                        {(yyval.nPtr) = mkNode("BLOCK",2,mkParent("VAR",(yyvsp[-1].nPtr)),(yyvsp[0].nPtr));}
#line 2576 "y.tab.c"
    break;

  case 133: /* func_call: lhs '=' ID '(' expressions ')' ';'  */
#line 328 "parser.y"
                        {
				if (functionCall(symTable, (yyvsp[-4].value)) == -1) {
					YYABORT; 

				}
				else{

					(yyval.nPtr) = mkNode("FUNCTION_CALL", 1, mkNode("ASS7", 3, (yyvsp[-6].nPtr), mkNode((yyvsp[-4].value), 0), mkParent("ARGS", (yyvsp[-2].nPtr))));
				}
			}
#line 2591 "y.tab.c"
    break;

  case 134: /* func_call: ID '(' expressions ')' ';'  */
#line 341 "parser.y"
                        {
				if (functionCall(symTable, (yyvsp[-4].value)) == -1) {
					YYABORT; 
				}
				else {
					(yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-4].value), 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			}
#line 2606 "y.tab.c"
    break;

  case 135: /* func_call: ID '(' ')' ';'  */
#line 354 "parser.y"
                        {
				if (functionCall(symTable, (yyvsp[-3].value)) == -1) {
					YYABORT; 

				}
				else {
					(yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-3].value), 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			}
#line 2622 "y.tab.c"
    break;

  case 136: /* func_call: lhs '=' ID '(' ')' ';'  */
#line 367 "parser.y"
                        {
				if (functionCall(symTable, (yyvsp[-3].value)) == -1) {
					YYABORT; 
				}
				else {
					(yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-5].nPtr), 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			}
#line 2637 "y.tab.c"
    break;

  case 137: /* func_call_static: lhs '=' ID '(' expressions_static ')' ';'  */
#line 378 "parser.y"
                        {
				if (functionCallStatic(symTable, (yyvsp[-4].value)) == -1 || functionCallStatic(symTable, (yyvsp[-4].value)) == 0) {
					YYABORT; 

				}
				else{

					(yyval.nPtr) = mkNode("FUNCTION_CALL", 1, mkNode("ASS10", 3, (yyvsp[-6].nPtr), mkNode((yyvsp[-4].value), 0), mkParent("ARGS", (yyvsp[-2].nPtr))));
				}
			}
#line 2652 "y.tab.c"
    break;

  case 138: /* func_call_static: ID '(' expressions_static ')' ';'  */
#line 391 "parser.y"
                        {
				if (functionCallStatic(symTable, (yyvsp[-4].value)) == -1 || functionCallStatic(symTable, (yyvsp[-4].value)) == 0) {
					YYABORT; 
				}
				else {
					(yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-4].value), 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			}
#line 2667 "y.tab.c"
    break;

  case 139: /* func_call_static: ID '(' ')' ';'  */
#line 404 "parser.y"
                        {
				if (functionCallStatic(symTable, (yyvsp[-3].value)) == -1 || functionCallStatic(symTable, (yyvsp[-3].value)) == 0) {
					YYABORT; 

				}
				else {
					(yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-3].value), 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			}
#line 2683 "y.tab.c"
    break;

  case 140: /* func_call_static: lhs '=' ID '(' ')' ';'  */
#line 417 "parser.y"
                        {
				if (functionCallStatic(symTable, (yyvsp[-3].value)) == -1 || functionCallStatic(symTable, (yyvsp[-3].value)) == 0) {
					YYABORT; 
				}
				else {
					(yyval.nPtr) = mkNode("FUNCTION_CALL", 2, mkNode((yyvsp[-5].nPtr), 0), mkParent("ARGS", mkNode("NONE", 0)));


				}
			}
#line 2698 "y.tab.c"
    break;

  case 141: /* expressions: %empty  */
#line 430 "parser.y"
                                                                        {(yyval.nPtr) = NULL;}
#line 2704 "y.tab.c"
    break;

  case 142: /* expressions: expressions_ne  */
#line 431 "parser.y"
                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2710 "y.tab.c"
    break;

  case 143: /* expressions_static: %empty  */
#line 434 "parser.y"
                                                                                {(yyval.nPtr) = NULL;}
#line 2716 "y.tab.c"
    break;

  case 144: /* expressions_static: expressions_ne_static  */
#line 435 "parser.y"
                                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2722 "y.tab.c"
    break;

  case 145: /* expressions_ne: expression  */
#line 438 "parser.y"
                                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2728 "y.tab.c"
    break;

  case 146: /* expressions_ne: expressions_ne ',' expression  */
#line 439 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2734 "y.tab.c"
    break;

  case 147: /* expressions_ne_static: expression_static  */
#line 442 "parser.y"
                                                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2740 "y.tab.c"
    break;

  case 148: /* expressions_ne_static: expressions_ne_static ',' expression_static  */
#line 443 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2746 "y.tab.c"
    break;

  case 149: /* if: IF '(' expression ')' '{' if_else_block '}'  */
#line 446 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("IF",2,(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 2752 "y.tab.c"
    break;

  case 150: /* if: IF '(' expression ')' if_else_statement  */
#line 447 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("IF",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2758 "y.tab.c"
    break;

  case 151: /* if_else: IF '(' expression ')' '{' if_else_block '}' ELSE '{' if_else_block '}'  */
#line 451 "parser.y"
                                                                                                {(yyval.nPtr) = mkNode("IF-ELSE",3,(yyvsp[-8].nPtr),(yyvsp[-5].nPtr),(yyvsp[-1].nPtr));}
#line 2764 "y.tab.c"
    break;

  case 152: /* if_else: IF '(' expression ')' if_else_statement ELSE if_else_statement  */
#line 453 "parser.y"
                                                                                                {(yyval.nPtr) = mkNode("IF-ELSE",3,(yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2770 "y.tab.c"
    break;

  case 153: /* if_else: IF '(' expression ')' if_else_statement ELSE '{' if_else_block '}'  */
#line 455 "parser.y"
                                                                                                {(yyval.nPtr) = mkNode("IF-ELSE",3,(yyvsp[-6].nPtr),(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 2776 "y.tab.c"
    break;

  case 154: /* if_else: IF '(' expression ')' '{' if_else_block '}' ELSE if_else_statement  */
#line 457 "parser.y"
                                                                                                {(yyval.nPtr) = mkNode("IF-ELSE",3,(yyvsp[-6].nPtr),(yyvsp[-3].nPtr),(yyvsp[0].nPtr));}
#line 2782 "y.tab.c"
    break;

  case 155: /* if_else_block: code_block RETURN expression ';'  */
#line 459 "parser.y"
                                                        {(yyval.nPtr) = mkNode("",2,(yyvsp[-3].nPtr),mkParent("RET",(yyvsp[-1].nPtr)));}
#line 2788 "y.tab.c"
    break;

  case 156: /* if_else_block: code_block  */
#line 460 "parser.y"
                                                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2794 "y.tab.c"
    break;

  case 157: /* if_else_block: RETURN expression ';'  */
#line 461 "parser.y"
                                                                                {(yyval.nPtr) = mkParent("RET",(yyvsp[-1].nPtr));}
#line 2800 "y.tab.c"
    break;

  case 158: /* if_else_block: RETURN expression  */
#line 462 "parser.y"
                                                                                        {(yyval.nPtr) = mkParent("RET",(yyvsp[0].nPtr));}
#line 2806 "y.tab.c"
    break;

  case 159: /* if_else_statement: statement  */
#line 465 "parser.y"
                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2812 "y.tab.c"
    break;

  case 160: /* if_else_statement: RETURN expression ';'  */
#line 466 "parser.y"
                                                                        {(yyval.nPtr) = mkParent("RET",(yyvsp[-1].nPtr));}
#line 2818 "y.tab.c"
    break;

  case 161: /* if_else_statement: RETURN expression  */
#line 467 "parser.y"
                                                                                {(yyval.nPtr) = mkParent("RET",(yyvsp[0].nPtr));}
#line 2824 "y.tab.c"
    break;

  case 162: /* while: WHILE '(' expression ')' statement  */
#line 470 "parser.y"
                                                        {(yyval.nPtr) = mkNode("WHILE",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2830 "y.tab.c"
    break;

  case 163: /* do_while: DO '{' code_block '}' WHILE '(' expression ')' ';'  */
#line 473 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("DO-WHILE",2,(yyvsp[-6].nPtr),mkNode("WHILE",1,(yyvsp[-2].nPtr)));}
#line 2836 "y.tab.c"
    break;

  case 164: /* for: FOR '(' assignment ';' expression ';' update ')' statement  */
#line 476 "parser.y"
                                                                         {(yyval.nPtr) = mkNode("FOR",4,(yyvsp[-6].nPtr),(yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2842 "y.tab.c"
    break;

  case 165: /* update: lhs '=' expression  */
#line 479 "parser.y"
                                                {(yyval.nPtr) = mkNode("ASS11",2,mkNode("",1,(yyvsp[-2].nPtr)),(yyvsp[0].nPtr));}
#line 2848 "y.tab.c"
    break;

  case 166: /* update: %empty  */
#line 480 "parser.y"
                                                                        {(yyval.nPtr)=NULL;}
#line 2854 "y.tab.c"
    break;

  case 167: /* statements: %empty  */
#line 483 "parser.y"
                                                                                                        {(yyval.nPtr) = NULL;}
#line 2860 "y.tab.c"
    break;

  case 168: /* statements: statements_ne  */
#line 484 "parser.y"
                                                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2866 "y.tab.c"
    break;

  case 169: /* statements_static: %empty  */
#line 486 "parser.y"
                                                                                                                {(yyval.nPtr) = NULL;}
#line 2872 "y.tab.c"
    break;

  case 170: /* statements_static: statements_ne_static  */
#line 487 "parser.y"
                                                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2878 "y.tab.c"
    break;

  case 171: /* statements_ne: statement  */
#line 489 "parser.y"
                                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2884 "y.tab.c"
    break;

  case 172: /* statements_ne: statements_ne statement  */
#line 490 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("",2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 2890 "y.tab.c"
    break;

  case 173: /* statements_ne_static: statement_static  */
#line 493 "parser.y"
                                                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2896 "y.tab.c"
    break;

  case 174: /* statements_ne_static: statements_ne_static statement_static  */
#line 494 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("",2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 2902 "y.tab.c"
    break;

  case 175: /* variable_declaration: VAR type ':' variable_ass ';'  */
#line 497 "parser.y"
                                                                     {(yyval.nPtr) = mkNode((yyvsp[-3].nPtr),1,(yyvsp[-1].nPtr));}
#line 2908 "y.tab.c"
    break;

  case 176: /* variable_declaration: VAR type ':' identifiers ';'  */
#line 500 "parser.y"
                        {
			
				
				add_variable_3(var_list,(yyvsp[-1].nPtr),(yyvsp[-3].nPtr));
				(yyval.nPtr) = mkNode((yyvsp[-3].nPtr),1,(yyvsp[-1].nPtr));
			}
#line 2919 "y.tab.c"
    break;

  case 177: /* variable_declaration: STRING str_declaration  */
#line 506 "parser.y"
                                                                                                {(yyval.nPtr) =(yyvsp[0].nPtr);}
#line 2925 "y.tab.c"
    break;

  case 178: /* str_declaration: ID '[' integer_value ']' '=' STRING_VAL ';'  */
#line 510 "parser.y"
                        {
				add_variable_2(var_list,(yyvsp[-6].value),TYPEOF((yyvsp[-1].value)));
				(yyval.nPtr) = mkNode("STRING",3,mkNode((yyvsp[-6].value),0),mkNode("[",2,(yyvsp[-4].nPtr),mkNode("]",0)), mkNode("ASS9",1,mkNode((yyvsp[-1].value),0)));
			}
#line 2934 "y.tab.c"
    break;

  case 179: /* str_declaration: ID '[' integer_value ']' ';'  */
#line 515 "parser.y"
                        {
				(yyval.nPtr) = mkNode("STRING",2,mkNode((yyvsp[-4].value),0),mkNode("[",2,(yyvsp[-2].nPtr),mkNode("]",0)));
			}
#line 2942 "y.tab.c"
    break;

  case 180: /* str_declaration: ID '[' integer_value ']' ',' str_declaration  */
#line 518 "parser.y"
                                                                                {
				(yyval.nPtr) = mkNode("STRING",3,mkNode((yyvsp[-5].value),0),mkNode("[",2,(yyvsp[-3].nPtr),mkNode("]",0)),(yyvsp[0].nPtr));
				}
#line 2950 "y.tab.c"
    break;

  case 181: /* integer_value: integer  */
#line 523 "parser.y"
                                                                        {(yyval.nPtr) = (yyvsp[0].value);}
#line 2956 "y.tab.c"
    break;

  case 182: /* integer_value: integer PLUS integer_value  */
#line 524 "parser.y"
                                                                    {(yyval.nPtr) = mkNode("+",0),(yyvsp[0].nPtr);}
#line 2962 "y.tab.c"
    break;

  case 183: /* integer_value: integer MUL integer_value  */
#line 525 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("*",0),(yyvsp[0].nPtr);}
#line 2968 "y.tab.c"
    break;

  case 184: /* integer_value: integer MINUS integer_value  */
#line 526 "parser.y"
                                                                        {(yyval.nPtr) = 2,mkNode("-",0),(yyvsp[0].nPtr);}
#line 2974 "y.tab.c"
    break;

  case 185: /* variable_ass: ID '=' const_value ',' variable_ass  */
#line 530 "parser.y"
                        {
				
				if(check_variable_type(var_list, (yyvsp[-4].value),(yyvsp[-2].value)) == 1) {
					(yyval.nPtr) = mkNode("ASS1",3,mkNode((yyvsp[-4].value),1,(yyvsp[-2].value)), mkParent("",(yyvsp[0].nPtr)));

				}
				else if(check_variable_type(var_list, (yyvsp[-4].value),(yyvsp[-2].value)) == -1){
					YYABORT; 

				}
				else{
					(yyval.nPtr) = mkNode("ASS2",3,mkNode((yyvsp[-4].value),1,(yyvsp[-2].value)), mkParent("",(yyvsp[0].nPtr)));
	

				}
			}
#line 2995 "y.tab.c"
    break;

  case 186: /* variable_ass: ID '=' const_value  */
#line 547 "parser.y"
                        {
				if(check_variable_type(var_list, (yyvsp[-2].value),(yyvsp[0].value)) == 1){
					(yyval.nPtr) = mkNode("ASSTOPO",1,mkNode((yyvsp[-2].value),1, (yyvsp[0].value)));

				}
				else if(check_variable_type(var_list, (yyvsp[-2].value),(yyvsp[0].value)) == -1){
					YYABORT; 
				}
				else {
					printf("Now adding the node \n \n");
				
					add_variable(var_list,(yyvsp[-2].value),(yyvsp[0].value));

					(yyval.nPtr) = mkNode("ASSTOPO2",1,mkNode((yyvsp[-2].value),1, (yyvsp[0].value)));
				}
			}
#line 3016 "y.tab.c"
    break;

  case 187: /* type: var_types  */
#line 566 "parser.y"
                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 3022 "y.tab.c"
    break;

  case 188: /* var_declr: %empty  */
#line 569 "parser.y"
                                                                                        {(yyval.nPtr) = NULL;}
#line 3028 "y.tab.c"
    break;

  case 189: /* var_declr: var_declr_ne  */
#line 570 "parser.y"
                                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 3034 "y.tab.c"
    break;

  case 190: /* var_declr_ne: variable_declaration  */
#line 573 "parser.y"
                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 3040 "y.tab.c"
    break;

  case 191: /* var_declr_ne: var_declr_ne variable_declaration  */
#line 574 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("",2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 3046 "y.tab.c"
    break;


#line 3050 "y.tab.c"

      default: break;
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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
          yydestruct ("Error: discarding",
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
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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
  yyerror (YY_("memory exhausted"));
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
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 576 "parser.y"


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

	int addToSymbolTable(SymbolTable *table, const char *name) {

		if (table->count < MAX_SYMBOLS) {
			// Check if the function is already declared
			if (lookupInSymbolTable(table, name) == -1) {
				// Add the function to the symbol table
				strcpy(table->entries[table->count].name, name);
				table->count++;
				return 1;

			} else {
				printf("Error: Function '%s' already declared.\n", name);
				return -1;
			}
		} else {
			printf("Error: Symbol table overflow.\n");
			return -1;
		}
	}
	int addToSymbolTableStatic(SymbolTable *table, const char *name) {

		if (table->count < MAX_SYMBOLS) {
			// Check if the function is already declared
			if (lookupInSymbolTable(table, name) == -1) {
				// Add the function to the symbol table
				strcpy(table->entries[table->count].name, name);
				table->entries[table->count].isStatic = 1;
				table->count++;
				return 1;


			} else {
				printf("Error: Function '%s' already declared.\n", name);
				return -1;	
			}
		} else {
			printf("Error: Symbol table overflow.\n");
			return -1;
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

	void add_variable_3(VariableList *list, const char **name, const char *type) {
		if (list->count >= MAX_VARIABLES) {
			fprintf(stderr, "Variable list is full\n");
			return;
		}
		

		strcpy(list->entries[list->count].name, *name);
		strcpy(list->entries[list->count].type, type);

		list->count++;
	}			

	int check_variable_type(VariableList *list, const char *name, const char **type) {
		printf("1 type is %s\n",*type);

		for (int i = 0; i < list->count; i++) {
			if (strcmp(list->entries[i].name, name) == 0) {
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

	int check_variable_type_2(VariableList *list, const char **name, const char **type) {
		if(strlen(*type) == 3){
			*type = "CHAR";
		}
		printf("2 type is %s\n",*type);
		for (int i = 0; i < list->count; i++) {
			if (strcmp(list->entries[i].name, *name) == 0) {
				
				
				if(strcmp(list->entries[i].type, *type) == 0){

					return 1;
				}
				else{

					return -1;
				}
				
			}

		}
	
		return 0; 
	}

	int check_variable_type_3(VariableList *list, const char **name, const char *type) {
		if(strlen(type) == 3){
			type = "CHAR";
		}
		else{
			type = "STRING";
		}
		for (int i = 0; i < list->count; i++) {
			if (strcmp(list->entries[i].name, *name) == 0) {
				
				
				if(strcmp(list->entries[i].type, type) == 0){

					return 1;
				}
				else{

					return -1;
				}
				
			}

		}
	
		return 0; 
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
