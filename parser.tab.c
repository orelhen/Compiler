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


int yylex(void);
void yyerror(char *);
int yylineno;


int isLeave(node* head);
node* mkNode(char *value, int count,...);
node* mkParent(char* value, node* child);
void printTree(node* ast, int indent, int s, int l);


#line 92 "parser.tab.c"

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
    BOOLEAN = 268,                 /* BOOLEAN  */
    TRUE = 269,                    /* TRUE  */
    FALSE = 270,                   /* FALSE  */
    VAR = 271,                     /* VAR  */
    PUBLIC = 272,                  /* PUBLIC  */
    PRIVATE = 273,                 /* PRIVATE  */
    STATIC = 274,                  /* STATIC  */
    RETURN = 275,                  /* RETURN  */
    ID = 276,                      /* ID  */
    INT_VAL = 277,                 /* INT_VAL  */
    NONE = 278,                    /* NONE  */
    DO = 279,                      /* DO  */
    ARG_OP = 280,                  /* ARG_OP  */
    AND = 281,                     /* AND  */
    DIV = 282,                     /* DIV  */
    EQUAL = 283,                   /* EQUAL  */
    BIGGER_EQ = 284,               /* BIGGER_EQ  */
    BIGGER = 285,                  /* BIGGER  */
    SMALLER_EQ = 286,              /* SMALLER_EQ  */
    SMALLER = 287,                 /* SMALLER  */
    MINUS = 288,                   /* MINUS  */
    NOT = 289,                     /* NOT  */
    NOT_EQ = 290,                  /* NOT_EQ  */
    OR = 291,                      /* OR  */
    PLUS = 292,                    /* PLUS  */
    MUL = 293,                     /* MUL  */
    ADDRESS_OP = 294,              /* ADDRESS_OP  */
    DEREFERENCE = 295,             /* DEREFERENCE  */
    HEX_VAL = 296,                 /* HEX_VAL  */
    STRING_VAL = 297,              /* STRING_VAL  */
    IF = 298,                      /* IF  */
    ELSE = 299,                    /* ELSE  */
    STRING = 300,                  /* STRING  */
    FOR = 301,                     /* FOR  */
    INCREM = 302,                  /* INCREM  */
    DECREM = 303,                  /* DECREM  */
    WHILE = 304                    /* WHILE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "parser.y"

	char *value;
	node *nPtr;

#line 193 "parser.tab.c"

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
  YYSYMBOL_BOOLEAN = 13,                   /* BOOLEAN  */
  YYSYMBOL_TRUE = 14,                      /* TRUE  */
  YYSYMBOL_FALSE = 15,                     /* FALSE  */
  YYSYMBOL_VAR = 16,                       /* VAR  */
  YYSYMBOL_PUBLIC = 17,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 18,                   /* PRIVATE  */
  YYSYMBOL_STATIC = 19,                    /* STATIC  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_ID = 21,                        /* ID  */
  YYSYMBOL_INT_VAL = 22,                   /* INT_VAL  */
  YYSYMBOL_NONE = 23,                      /* NONE  */
  YYSYMBOL_DO = 24,                        /* DO  */
  YYSYMBOL_ARG_OP = 25,                    /* ARG_OP  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_DIV = 27,                       /* DIV  */
  YYSYMBOL_EQUAL = 28,                     /* EQUAL  */
  YYSYMBOL_BIGGER_EQ = 29,                 /* BIGGER_EQ  */
  YYSYMBOL_BIGGER = 30,                    /* BIGGER  */
  YYSYMBOL_SMALLER_EQ = 31,                /* SMALLER_EQ  */
  YYSYMBOL_SMALLER = 32,                   /* SMALLER  */
  YYSYMBOL_MINUS = 33,                     /* MINUS  */
  YYSYMBOL_NOT = 34,                       /* NOT  */
  YYSYMBOL_NOT_EQ = 35,                    /* NOT_EQ  */
  YYSYMBOL_OR = 36,                        /* OR  */
  YYSYMBOL_PLUS = 37,                      /* PLUS  */
  YYSYMBOL_MUL = 38,                       /* MUL  */
  YYSYMBOL_ADDRESS_OP = 39,                /* ADDRESS_OP  */
  YYSYMBOL_DEREFERENCE = 40,               /* DEREFERENCE  */
  YYSYMBOL_HEX_VAL = 41,                   /* HEX_VAL  */
  YYSYMBOL_STRING_VAL = 42,                /* STRING_VAL  */
  YYSYMBOL_IF = 43,                        /* IF  */
  YYSYMBOL_ELSE = 44,                      /* ELSE  */
  YYSYMBOL_STRING = 45,                    /* STRING  */
  YYSYMBOL_FOR = 46,                       /* FOR  */
  YYSYMBOL_INCREM = 47,                    /* INCREM  */
  YYSYMBOL_DECREM = 48,                    /* DECREM  */
  YYSYMBOL_WHILE = 49,                     /* WHILE  */
  YYSYMBOL_50_ = 50,                       /* '('  */
  YYSYMBOL_51_ = 51,                       /* ')'  */
  YYSYMBOL_52_ = 52,                       /* ':'  */
  YYSYMBOL_53_ = 53,                       /* '{'  */
  YYSYMBOL_54_ = 54,                       /* '}'  */
  YYSYMBOL_55_ = 55,                       /* ';'  */
  YYSYMBOL_56_ = 56,                       /* ','  */
  YYSYMBOL_57_ = 57,                       /* '['  */
  YYSYMBOL_58_ = 58,                       /* ']'  */
  YYSYMBOL_59_ = 59,                       /* '|'  */
  YYSYMBOL_60_ = 60,                       /* '='  */
  YYSYMBOL_61_ = 61,                       /* '*'  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_start = 63,                     /* start  */
  YYSYMBOL_main = 64,                      /* main  */
  YYSYMBOL_functions = 65,                 /* functions  */
  YYSYMBOL_function = 66,                  /* function  */
  YYSYMBOL_var_types = 67,                 /* var_types  */
  YYSYMBOL_var_static = 68,                /* var_static  */
  YYSYMBOL_var_start = 69,                 /* var_start  */
  YYSYMBOL_parameter_list = 70,            /* parameter_list  */
  YYSYMBOL_pdecleration = 71,              /* pdecleration  */
  YYSYMBOL_identifiers = 72,               /* identifiers  */
  YYSYMBOL_next_identifier = 73,           /* next_identifier  */
  YYSYMBOL_func_body = 74,                 /* func_body  */
  YYSYMBOL_const_value = 75,               /* const_value  */
  YYSYMBOL_integer = 76,                   /* integer  */
  YYSYMBOL_expression = 77,                /* expression  */
  YYSYMBOL_op_unary = 78,                  /* op_unary  */
  YYSYMBOL_statement = 79,                 /* statement  */
  YYSYMBOL_assignment = 80,                /* assignment  */
  YYSYMBOL_lhs = 81,                       /* lhs  */
  YYSYMBOL_code_block = 82,                /* code_block  */
  YYSYMBOL_func_call = 83,                 /* func_call  */
  YYSYMBOL_expressions = 84,               /* expressions  */
  YYSYMBOL_expressions_ne = 85,            /* expressions_ne  */
  YYSYMBOL_if = 86,                        /* if  */
  YYSYMBOL_if_else = 87,                   /* if_else  */
  YYSYMBOL_if_else_block = 88,             /* if_else_block  */
  YYSYMBOL_if_else_statement = 89,         /* if_else_statement  */
  YYSYMBOL_while = 90,                     /* while  */
  YYSYMBOL_do_while = 91,                  /* do_while  */
  YYSYMBOL_for = 92,                       /* for  */
  YYSYMBOL_update = 93,                    /* update  */
  YYSYMBOL_statements = 94,                /* statements  */
  YYSYMBOL_statements_ne = 95,             /* statements_ne  */
  YYSYMBOL_variable_declaration = 96,      /* variable_declaration  */
  YYSYMBOL_str_declaration = 97,           /* str_declaration  */
  YYSYMBOL_integer_value = 98,             /* integer_value  */
  YYSYMBOL_variable_ass = 99,              /* variable_ass  */
  YYSYMBOL_type = 100,                     /* type  */
  YYSYMBOL_var_declr = 101,                /* var_declr  */
  YYSYMBOL_var_declr_ne = 102              /* var_declr_ne  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   745

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  294

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
      50,    51,    61,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    55,
       2,    60,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,    59,    54,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    48,    48,    49,    50,    53,    55,    59,    60,    64,
      68,    72,    75,    80,    81,    82,    83,    84,    85,    86,
      87,    91,    94,    95,    99,   100,   103,   104,   107,   108,
     111,   112,   115,   116,   117,   118,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   133,   134,   135,   136,   137,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     161,   162,   163,   164,   167,   168,   169,   170,   171,   172,
     173,   174,   177,   178,   181,   182,   183,   186,   189,   190,
     191,   192,   196,   197,   200,   201,   204,   205,   208,   210,
     212,   214,   217,   218,   219,   220,   223,   224,   225,   228,
     231,   234,   237,   238,   241,   242,   245,   246,   251,   252,
     253,   256,   257,   258,   261,   262,   263,   264,   267,   268,
     269,   272,   275,   276,   279,   280
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
  "FLOATPTR", "BOOLEAN", "TRUE", "FALSE", "VAR", "PUBLIC", "PRIVATE",
  "STATIC", "RETURN", "ID", "INT_VAL", "NONE", "DO", "ARG_OP", "AND",
  "DIV", "EQUAL", "BIGGER_EQ", "BIGGER", "SMALLER_EQ", "SMALLER", "MINUS",
  "NOT", "NOT_EQ", "OR", "PLUS", "MUL", "ADDRESS_OP", "DEREFERENCE",
  "HEX_VAL", "STRING_VAL", "IF", "ELSE", "STRING", "FOR", "INCREM",
  "DECREM", "WHILE", "'('", "')'", "':'", "'{'", "'}'", "';'", "','",
  "'['", "']'", "'|'", "'='", "'*'", "$accept", "start", "main",
  "functions", "function", "var_types", "var_static", "var_start",
  "parameter_list", "pdecleration", "identifiers", "next_identifier",
  "func_body", "const_value", "integer", "expression", "op_unary",
  "statement", "assignment", "lhs", "code_block", "func_call",
  "expressions", "expressions_ne", "if", "if_else", "if_else_block",
  "if_else_statement", "while", "do_while", "for", "update", "statements",
  "statements_ne", "variable_declaration", "str_declaration",
  "integer_value", "variable_ass", "type", "var_declr", "var_declr_ne", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-246)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-92)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     148,     2,  -246,  -246,    53,  -246,   148,  -246,   425,    61,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,   110,    84,   102,   123,    16,    86,    93,   425,   -19,
     115,    70,  -246,    60,    60,   116,   143,    60,   152,    96,
     648,   662,   156,    60,   127,  -246,   341,     0,   140,   152,
    -246,   144,   151,   153,  -246,   143,    60,  -246,  -246,   159,
     164,   146,  -246,   341,  -246,   141,   167,   174,   176,   178,
       0,   211,  -246,   179,   177,  -246,  -246,  -246,  -246,  -246,
    -246,   220,   341,  -246,  -246,  -246,    60,  -246,   222,  -246,
     195,   200,   425,   234,    38,   240,   149,   338,     0,   338,
     -10,   338,   207,   341,  -246,  -246,   208,   338,  -246,   212,
     153,    60,  -246,   213,   214,   218,  -246,  -246,   266,   267,
    -246,   169,   224,   338,  -246,  -246,  -246,  -246,   119,  -246,
    -246,   275,  -246,   277,  -246,  -246,  -246,   338,   238,   338,
    -246,  -246,   658,   338,   229,  -246,   243,   239,   390,   246,
     562,   245,   241,   244,   579,  -246,  -246,   202,  -246,   658,
     460,  -246,  -246,   251,  -246,   444,  -246,  -246,  -246,    38,
      38,    38,    14,   473,   338,  -246,  -246,   596,  -246,   377,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   658,   285,   252,   338,  -246,   259,    89,   338,
     242,   341,   276,  -246,  -246,  -246,  -246,   300,   301,  -246,
     263,  -246,  -246,  -246,  -246,   156,   278,  -246,   414,  -246,
    -246,   683,  -246,   695,   147,   147,   147,   147,    90,   707,
     671,    90,  -246,   273,  -246,   658,   274,   338,   100,  -246,
     281,   494,  -246,   279,   280,  -246,  -246,   234,  -246,   283,
     272,   307,   338,   507,   338,    12,   282,    94,   -10,    19,
     284,  -246,  -246,   287,   292,   613,  -246,   528,   338,   289,
     100,  -246,   290,   303,    80,  -246,   296,   308,  -246,   541,
     172,   302,   338,   341,  -246,  -246,  -246,   100,  -246,  -246,
     658,  -246,   310,  -246
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    22,    23,     0,     2,     4,     7,     0,     0,
       1,     3,     8,    15,    16,    13,    20,    14,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,   132,   132,     0,     0,   132,     0,     0,
       0,     0,     0,   132,     0,   134,   114,   133,     0,     0,
      21,     0,     0,    29,    27,     0,   132,    25,   131,     0,
       0,     0,   120,   114,     6,    84,     0,     0,     0,     0,
     132,     0,   116,     0,     0,    75,    77,    76,    78,    79,
      80,    35,   115,   135,     5,    26,   132,    12,     0,    28,
       0,     0,     0,     0,     0,    34,     0,     0,   132,     0,
       0,     0,     0,   114,    85,    74,     0,     0,   117,     0,
      31,   132,    11,     0,   130,     0,    45,    49,     0,     0,
      48,   124,     0,     0,    36,    39,    42,    43,    50,    38,
      44,    73,    72,     0,    71,    70,    37,     0,     0,     0,
      53,    51,    94,     0,     0,    69,     0,    93,     0,     0,
       0,    84,     0,     0,     0,    81,    87,    50,    83,    82,
       0,    10,    30,     0,   119,     0,   118,    47,    46,     0,
       0,     0,     0,     0,     0,    41,    40,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,    33,     9,    39,    38,     0,     0,    37,
     129,   127,   125,   126,   122,     0,     0,    32,     0,    67,
      68,    54,    65,    55,    59,    58,    60,    61,    63,    56,
      57,    62,    64,     0,    89,    95,     0,     0,   132,   106,
      97,     0,   109,     0,     0,    41,    40,     0,   123,     0,
      52,     0,     0,   108,     0,     0,     0,     0,   113,    90,
       0,   128,   121,     0,     0,     0,   107,   105,     0,    96,
     132,    99,     0,     0,    89,    91,     0,     0,   104,     0,
       0,     0,     0,     0,    88,   110,   102,   132,   101,   100,
     112,   111,     0,    98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,   349,   367,     4,     7,   314,  -246,  -246,   330,
      62,   264,   -25,   215,   -87,   -93,  -246,   -79,   286,   -44,
     -34,   -45,  -197,  -246,  -246,  -246,  -245,  -172,  -246,  -246,
    -246,  -246,   -46,  -246,   326,   163,   101,   134,   291,   -43,
    -246
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,    43,     7,    30,    51,     8,    31,    32,
      54,    89,    44,   140,   141,   142,   143,    72,    73,   144,
     255,   145,   146,   147,    76,    77,   256,   240,    78,    79,
      80,   273,    81,    82,    45,    62,   122,   115,    60,    46,
      47
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    75,    74,   108,   148,   244,   150,   121,   154,    48,
      12,   151,    52,   159,   160,    21,    41,    95,    75,    74,
      13,    14,    15,    16,    17,   281,    18,   103,    19,    20,
     173,    91,   268,    36,    37,    35,   102,    75,    74,   -91,
     -91,    28,   292,   -91,   177,    42,   179,    12,    58,   116,
     192,    71,     9,    10,   264,   103,   153,   156,    75,    74,
     117,   109,   -91,   -91,   149,   -91,   155,    29,   -91,   214,
     215,   118,   -91,   -91,   216,   119,    41,     2,     3,   120,
     -91,   218,   121,   121,   121,   271,   163,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    58,
     -88,   -88,   235,    59,   -88,    42,   241,   159,   288,   237,
      65,    85,    22,    66,   237,    65,    41,   181,    66,   239,
     254,    39,   242,   -88,   -88,    40,   -88,    26,   191,   -88,
      27,    23,    67,   -88,   -88,    68,    24,    67,    69,    33,
      68,   -88,   238,    69,   253,    42,    34,   270,    55,    56,
      71,     1,    25,    75,    74,    71,    75,    74,   124,   265,
     125,   267,    50,   126,   127,     2,     3,    38,    49,    96,
     128,   129,   130,    53,   181,   279,   174,    61,   239,   -84,
     187,    64,   131,   132,   190,   191,   133,   134,   135,   290,
     136,    96,   237,    65,    84,   103,    66,    86,    97,   137,
     138,   239,   169,    94,   291,    87,   170,   171,   139,    88,
      71,    92,    75,    74,   272,    67,    93,   124,    68,   125,
      98,    69,   126,   127,    99,   287,   100,   103,   101,   157,
     129,   130,   104,    71,   105,    75,    74,   106,    75,    74,
     107,   131,   132,   110,   103,   133,   134,   135,   111,   136,
     158,   124,   202,   125,   112,   114,   126,   127,   137,   174,
     123,   155,   -84,   128,   129,   130,   161,   139,   164,    71,
     211,   212,   213,   166,   165,   131,   132,   167,   168,   133,
     134,   135,   172,   136,   158,   124,   175,   125,   176,   193,
     126,   127,   137,   178,   194,   195,   199,   128,   129,   130,
     197,   139,    97,    71,   200,   204,   233,   234,   236,   131,
     132,   245,   246,   133,   134,   135,   124,   136,   125,   247,
     249,   126,   127,   251,   252,   257,   137,   243,   128,   129,
     130,   260,   -86,   280,   259,   139,   269,    71,   262,   274,
     131,   132,   275,   276,   133,   134,   135,   124,   136,   125,
     282,   284,   126,   127,   283,    11,   289,   137,   263,   128,
     129,   130,    65,   285,   293,    66,   139,     6,    71,    90,
      57,   131,   132,    83,   162,   133,   134,   135,   248,   136,
     210,   261,     0,   113,    67,     0,   152,    68,   137,     0,
      69,     0,     0,     0,    70,     0,     0,   139,     0,    71,
       0,     0,    71,   180,   181,   182,   183,   184,   185,   186,
     187,     0,   188,   189,   190,   191,   180,   181,   182,   183,
     184,   185,   186,   187,     0,   188,   189,   190,   191,    13,
      14,    15,    16,    17,     0,    18,   220,    19,    20,     0,
     180,   181,   182,   183,   184,   185,   186,   187,   196,   188,
     189,   190,   191,   124,     0,   205,     0,     0,   126,   127,
       0,     0,     0,     0,     0,     0,   206,   130,     0,     0,
       0,     0,   250,     0,     0,     0,     0,   207,     0,     0,
       0,   208,     0,     0,     0,   209,   180,   181,   182,   183,
     184,   185,   186,   187,     0,   188,   189,   190,   191,   180,
     181,   182,   183,   184,   185,   186,   187,     0,   188,   189,
     190,   191,     0,     0,     0,   203,     0,     0,     0,     0,
     180,   181,   182,   183,   184,   185,   186,   187,   217,   188,
     189,   190,   191,   180,   181,   182,   183,   184,   185,   186,
     187,     0,   188,   189,   190,   191,     0,     0,     0,   258,
       0,     0,     0,     0,   180,   181,   182,   183,   184,   185,
     186,   187,   266,   188,   189,   190,   191,   180,   181,   182,
     183,   184,   185,   186,   187,     0,   188,   189,   190,   191,
       0,     0,     0,   278,     0,     0,     0,     0,   180,   181,
     182,   183,   184,   185,   186,   187,   286,   188,   189,   190,
     191,     0,     0,     0,     0,   180,   181,   182,   183,   184,
     185,   186,   187,   198,   188,   189,   190,   191,     0,     0,
       0,     0,   180,   181,   182,   183,   184,   185,   186,   187,
     201,   188,   189,   190,   191,     0,     0,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   219,   188,   189,
     190,   191,    13,    14,    15,    16,    17,     0,    18,     0,
      19,    20,     0,     0,   277,     0,    13,    14,    15,    16,
      17,     0,    18,    28,    19,    20,     0,     0,     0,     0,
       0,     0,     0,    53,   180,   181,   182,   183,   184,   185,
     186,   187,     0,   188,   189,   190,   191,   180,   181,   182,
     183,   184,   185,   186,   187,     0,   188,     0,   190,   191,
     181,   182,   183,   184,   185,   186,   187,     0,   188,     0,
     190,   191,   181,     0,   183,   184,   185,   186,   187,     0,
     188,     0,   190,   191,   181,     0,   183,   184,   185,   186,
     187,     0,     0,     0,   190,   191
};

static const yytype_int16 yycheck[] =
{
      43,    46,    46,    82,    97,   202,    99,    94,   101,    34,
       6,    21,    37,   106,   107,     8,    16,    63,    63,    63,
       4,     5,     6,     7,     8,   270,    10,    70,    12,    13,
     123,    56,    20,    52,    53,    28,    70,    82,    82,    20,
      21,    25,   287,    24,   137,    45,   139,    43,    41,    11,
     143,    61,    50,     0,   251,    98,   100,   103,   103,   103,
      22,    86,    43,    44,    98,    46,    54,    51,    49,    55,
      56,    33,    53,    54,    60,    37,    16,    17,    18,    41,
      61,   174,   169,   170,   171,   257,   111,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    92,
      20,    21,   195,    41,    24,    45,   199,   200,   280,    20,
      21,    49,    51,    24,    20,    21,    16,    27,    24,   198,
      20,    51,   201,    43,    44,    55,    46,     4,    38,    49,
       7,    21,    43,    53,    54,    46,    52,    43,    49,    53,
      46,    61,    53,    49,   237,    45,    53,    53,    52,    53,
      61,     3,    50,   198,   198,    61,   201,   201,     9,   252,
      11,   254,    19,    14,    15,    17,    18,    52,    52,    50,
      21,    22,    23,    21,    27,   268,    57,    21,   257,    60,
      33,    54,    33,    34,    37,    38,    37,    38,    39,   282,
      41,    50,    20,    21,    54,   238,    24,    53,    57,    50,
      51,   280,    33,    57,   283,    54,    37,    38,    59,    56,
      61,    52,   257,   257,   258,    43,    52,     9,    46,    11,
      53,    49,    14,    15,    50,    53,    50,   270,    50,    21,
      22,    23,    21,    61,    55,   280,   280,    60,   283,   283,
      20,    33,    34,    21,   287,    37,    38,    39,    53,    41,
      42,     9,    50,    11,    54,    21,    14,    15,    50,    57,
      20,    54,    60,    21,    22,    23,    54,    59,    55,    61,
     169,   170,   171,    55,    60,    33,    34,    11,    11,    37,
      38,    39,    58,    41,    42,     9,    11,    11,    11,    60,
      14,    15,    50,    55,    51,    56,    55,    21,    22,    23,
      54,    59,    57,    61,    60,    54,    21,    55,    49,    33,
      34,    11,    11,    37,    38,    39,     9,    41,    11,    56,
      42,    14,    15,    50,    50,    44,    50,    51,    21,    22,
      23,    51,    60,    44,    55,    59,    54,    61,    55,    55,
      33,    34,    55,    51,    37,    38,    39,     9,    41,    11,
      60,    55,    14,    15,    51,     6,    54,    50,    51,    21,
      22,    23,    21,    55,    54,    24,    59,     0,    61,    55,
      40,    33,    34,    47,   110,    37,    38,    39,   215,    41,
     165,   247,    -1,    92,    43,    -1,   100,    46,    50,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    59,    -1,    61,
      -1,    -1,    61,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,     4,
       5,     6,     7,     8,    -1,    10,    59,    12,    13,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    58,    35,
      36,    37,    38,     9,    -1,    11,    -1,    -1,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    55,    35,
      36,    37,    38,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    55,    35,    36,    37,    38,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    33,    55,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    51,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      51,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    51,    35,    36,
      37,    38,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    13,    -1,    -1,    51,    -1,     4,     5,     6,     7,
       8,    -1,    10,    25,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    -1,    37,    38,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    -1,
      37,    38,    27,    -1,    29,    30,    31,    32,    33,    -1,
      35,    -1,    37,    38,    27,    -1,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    37,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    17,    18,    63,    64,    65,    66,    69,    50,
       0,    64,    66,     4,     5,     6,     7,     8,    10,    12,
      13,    67,    51,    21,    52,    50,     4,     7,    25,    51,
      67,    70,    71,    53,    53,    67,    52,    53,    52,    51,
      55,    16,    45,    65,    74,    96,   101,   102,    74,    52,
      19,    68,    74,    21,    72,    52,    53,    71,    67,    72,
     100,    21,    97,   101,    54,    21,    24,    43,    46,    49,
      53,    61,    79,    80,    81,    83,    86,    87,    90,    91,
      92,    94,    95,    96,    54,    72,    53,    54,    56,    73,
      68,    74,    52,    52,    57,    94,    50,    57,    53,    50,
      50,    50,    82,   101,    21,    55,    60,    20,    79,    74,
      21,    53,    54,   100,    21,    99,    11,    22,    33,    37,
      41,    76,    98,    20,     9,    11,    14,    15,    21,    22,
      23,    33,    34,    37,    38,    39,    41,    50,    51,    59,
      75,    76,    77,    78,    81,    83,    84,    85,    77,    82,
      77,    21,    80,    81,    77,    54,    94,    21,    42,    77,
      77,    54,    73,    74,    55,    60,    55,    11,    11,    33,
      37,    38,    58,    77,    57,    11,    11,    77,    55,    77,
      26,    27,    28,    29,    30,    31,    32,    33,    35,    36,
      37,    38,    77,    60,    51,    56,    58,    54,    51,    55,
      60,    51,    50,    55,    54,    11,    22,    33,    37,    41,
      75,    98,    98,    98,    55,    56,    60,    55,    77,    51,
      59,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    21,    55,    77,    49,    20,    53,    79,
      89,    77,    79,    51,    84,    11,    11,    56,    97,    42,
      58,    50,    50,    77,    20,    82,    88,    44,    55,    55,
      51,    99,    55,    51,    84,    77,    55,    77,    20,    54,
      53,    89,    81,    93,    55,    55,    51,    51,    55,    77,
      44,    88,    60,    51,    55,    55,    55,    53,    89,    54,
      77,    79,    88,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    63,    64,    64,    65,    65,    66,
      66,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    69,    69,    70,    70,    71,    71,    72,    72,
      73,    73,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    76,    76,    76,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    80,    80,    81,    81,    81,    82,    83,    83,
      83,    83,    84,    84,    85,    85,    86,    86,    87,    87,
      87,    87,    88,    88,    88,    88,    89,    89,    89,    90,
      91,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      96,    97,    97,    97,    98,    98,    98,    98,    99,    99,
      99,   100,   101,   101,   102,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     8,     8,     1,     2,    11,
      10,     9,     8,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     1,
       3,     0,     6,     5,     3,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     2,     4,     2,     7,     5,
       4,     6,     0,     1,     1,     3,     7,     5,    11,     7,
       9,     9,     4,     1,     3,     2,     1,     3,     2,     5,
       9,     9,     3,     0,     0,     1,     1,     2,     5,     5,
       2,     7,     5,     6,     1,     3,     3,     3,     5,     3,
       1,     1,     0,     1,     1,     2
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
  case 2: /* start: main  */
#line 48 "parser.y"
                                {printTree(mkNode("CODE",1,(yyvsp[0].nPtr)), 0, 0, 1);printf("\n");}
#line 1562 "parser.tab.c"
    break;

  case 3: /* start: functions main  */
#line 49 "parser.y"
                                {printTree(mkNode("CODE",2,mkParent("",(yyvsp[-1].nPtr)),mkParent("",(yyvsp[0].nPtr))), 0, 0, 1);printf("\n");}
#line 1568 "parser.tab.c"
    break;

  case 4: /* start: functions  */
#line 50 "parser.y"
                                        {printTree(mkNode("CODE",1,mkParent("",(yyvsp[0].nPtr))), 0, 0, 1);printf("\n");}
#line 1574 "parser.tab.c"
    break;

  case 5: /* main: MAIN '(' ')' ':' VOID '{' func_body '}'  */
#line 54 "parser.y"
         {(yyval.nPtr) = mkNode("MAIN",1,(yyval.nPtr));}
#line 1580 "parser.tab.c"
    break;

  case 6: /* main: MAIN '(' ')' ':' INT '{' func_body '}'  */
#line 56 "parser.y"
         {(yyval.nPtr) = mkNode("MAIN",1,(yyval.nPtr));}
#line 1586 "parser.tab.c"
    break;

  case 7: /* functions: function  */
#line 59 "parser.y"
                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1592 "parser.tab.c"
    break;

  case 8: /* functions: functions function  */
#line 60 "parser.y"
                                                        {(yyval.nPtr) = mkNode("",2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 1598 "parser.tab.c"
    break;

  case 9: /* function: var_start var_types ID '(' parameter_list ')' ':' var_static '{' func_body '}'  */
#line 65 "parser.y"
                                        {(yyval.nPtr) = mkNode("FUNC", 6,mkNode((yyvsp[-8].value),0),mkNode((yyvsp[-3].nPtr), 0),mkNode((yyvsp[-10].nPtr),0),mkParent("ARGS ",(yyvsp[-6].nPtr)),mkParent("RETURN",mkNode((yyvsp[-9].nPtr),0)),(yyvsp[-1].nPtr));}
#line 1604 "parser.tab.c"
    break;

  case 10: /* function: var_start var_types ID '(' ')' ':' var_static '{' func_body '}'  */
#line 69 "parser.y"
                                        {(yyval.nPtr) = mkNode("FUNC",7, mkNode((yyvsp[-7].value),0),mkNode((yyvsp[-3].nPtr), 0),mkNode((yyvsp[-9].nPtr),0),mkParent("ARGS",mkNode("NONE", 0)),mkParent("RETURN",mkNode((yyvsp[-8].nPtr),0)), (yyvsp[-1].nPtr));}
#line 1610 "parser.tab.c"
    break;

  case 11: /* function: var_start var_types ID '(' parameter_list ')' '{' func_body '}'  */
#line 73 "parser.y"
                                        {(yyval.nPtr) = mkNode("FUNC", 6,mkNode((yyvsp[-6].value),0),mkNode("NONSTATIC",0),mkNode((yyvsp[-8].nPtr),0),mkParent("ARGS ",(yyvsp[-4].nPtr)),mkParent("RETURN",mkNode((yyvsp[-7].nPtr),0)),(yyvsp[-1].nPtr));}
#line 1616 "parser.tab.c"
    break;

  case 12: /* function: var_start var_types ID '(' ')' '{' func_body '}'  */
#line 76 "parser.y"
                                        {(yyval.nPtr) = mkNode("FUNC",7, mkNode((yyvsp[-5].value),0),mkNode("NONSTATIC",0),mkNode((yyvsp[-7].nPtr),0),mkParent("ARGS",mkNode("NONE", 0)),mkParent("RETURN",mkNode((yyvsp[-6].nPtr),0)), (yyvsp[-1].nPtr));}
#line 1622 "parser.tab.c"
    break;

  case 13: /* var_types: CHAR  */
#line 80 "parser.y"
                                                {(yyval.nPtr) = "CHAR";}
#line 1628 "parser.tab.c"
    break;

  case 14: /* var_types: CHARPTR  */
#line 81 "parser.y"
                                                        {(yyval.nPtr) = "CHARPTR";}
#line 1634 "parser.tab.c"
    break;

  case 15: /* var_types: INT  */
#line 82 "parser.y"
                                                                {(yyval.nPtr) = "INT";}
#line 1640 "parser.tab.c"
    break;

  case 16: /* var_types: INTPTR  */
#line 83 "parser.y"
                                                        {(yyval.nPtr) = "INTPTR";}
#line 1646 "parser.tab.c"
    break;

  case 17: /* var_types: FLOAT  */
#line 84 "parser.y"
                                                        {(yyval.nPtr) = "FLOAT";}
#line 1652 "parser.tab.c"
    break;

  case 18: /* var_types: FLOATPTR  */
#line 85 "parser.y"
                                                        {(yyval.nPtr) = "FLOATPTR";}
#line 1658 "parser.tab.c"
    break;

  case 19: /* var_types: BOOLEAN  */
#line 86 "parser.y"
                                                        {(yyval.nPtr) = "BOOLEAN";}
#line 1664 "parser.tab.c"
    break;

  case 20: /* var_types: VOID  */
#line 87 "parser.y"
                                                        {(yyval.nPtr) = "VOID";}
#line 1670 "parser.tab.c"
    break;

  case 21: /* var_static: STATIC  */
#line 91 "parser.y"
                                                {(yyval.nPtr) = "STATIC";}
#line 1676 "parser.tab.c"
    break;

  case 22: /* var_start: PUBLIC  */
#line 94 "parser.y"
                                                {(yyval.nPtr) = "PUBLIC";}
#line 1682 "parser.tab.c"
    break;

  case 23: /* var_start: PRIVATE  */
#line 95 "parser.y"
                                                {(yyval.nPtr) = "PRIVATE";}
#line 1688 "parser.tab.c"
    break;

  case 24: /* parameter_list: pdecleration  */
#line 99 "parser.y"
                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1694 "parser.tab.c"
    break;

  case 25: /* parameter_list: parameter_list ';' pdecleration  */
#line 100 "parser.y"
                                                                {(yyval.nPtr) = mkNode("",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1700 "parser.tab.c"
    break;

  case 26: /* pdecleration: ARG_OP var_types ':' identifiers  */
#line 103 "parser.y"
                                                                {(yyval.nPtr) = mkParent((yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1706 "parser.tab.c"
    break;

  case 27: /* pdecleration: var_types ':' identifiers  */
#line 104 "parser.y"
                                                                        {(yyval.nPtr) = mkParent((yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1712 "parser.tab.c"
    break;

  case 28: /* identifiers: ID next_identifier  */
#line 107 "parser.y"
                                                                        {(yyval.nPtr) = mkNode((yyvsp[-1].value),1,(yyvsp[0].nPtr));}
#line 1718 "parser.tab.c"
    break;

  case 29: /* identifiers: ID  */
#line 108 "parser.y"
                                                                                                {(yyval.nPtr) = mkNode((yyvsp[0].value),0);}
#line 1724 "parser.tab.c"
    break;

  case 30: /* next_identifier: ',' ID next_identifier  */
#line 111 "parser.y"
                                                        {(yyval.nPtr) = mkNode("",2,mkNode((yyvsp[-1].value),0),(yyvsp[0].nPtr));}
#line 1730 "parser.tab.c"
    break;

  case 31: /* next_identifier: %empty  */
#line 112 "parser.y"
                                                                                                {(yyval.nPtr) = NULL;}
#line 1736 "parser.tab.c"
    break;

  case 32: /* func_body: functions var_declr statements RETURN expression ';'  */
#line 115 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("BODY",4,mkParent("",(yyvsp[-5].nPtr)),mkParent("VAR",(yyvsp[-4].nPtr)),(yyvsp[-3].nPtr),mkParent("RET",(yyvsp[-1].nPtr)));}
#line 1742 "parser.tab.c"
    break;

  case 33: /* func_body: var_declr statements RETURN expression ';'  */
#line 116 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("BODY",3,mkParent("VAR",(yyvsp[-4].nPtr)),(yyvsp[-3].nPtr),mkParent("RET",(yyvsp[-1].nPtr)));}
#line 1748 "parser.tab.c"
    break;

  case 34: /* func_body: functions var_declr statements  */
#line 117 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("BODY",3,mkParent("",(yyvsp[-2].nPtr)),mkParent("VAR",(yyvsp[-1].nPtr)),(yyvsp[0].nPtr));}
#line 1754 "parser.tab.c"
    break;

  case 35: /* func_body: var_declr statements  */
#line 118 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("BODY",2,mkParent("VAR",(yyvsp[-1].nPtr)),(yyvsp[0].nPtr));}
#line 1760 "parser.tab.c"
    break;

  case 36: /* const_value: CHAR_VAL  */
#line 122 "parser.y"
                        {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 1766 "parser.tab.c"
    break;

  case 37: /* const_value: HEX_VAL  */
#line 123 "parser.y"
                                    {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 1772 "parser.tab.c"
    break;

  case 38: /* const_value: INT_VAL  */
#line 124 "parser.y"
                                        {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 1778 "parser.tab.c"
    break;

  case 39: /* const_value: FLOAT_VAL  */
#line 125 "parser.y"
                                        {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 1784 "parser.tab.c"
    break;

  case 40: /* const_value: PLUS FLOAT_VAL  */
#line 126 "parser.y"
                                 { (yyval.value) = mkNode("+",1,mkNode((yyvsp[0].value),0));}
#line 1790 "parser.tab.c"
    break;

  case 41: /* const_value: MINUS FLOAT_VAL  */
#line 127 "parser.y"
                                  { (yyval.value) = mkNode("-",1,mkNode((yyvsp[0].value),0)); }
#line 1796 "parser.tab.c"
    break;

  case 42: /* const_value: TRUE  */
#line 128 "parser.y"
                                        {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 1802 "parser.tab.c"
    break;

  case 43: /* const_value: FALSE  */
#line 129 "parser.y"
                                        {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 1808 "parser.tab.c"
    break;

  case 44: /* const_value: NONE  */
#line 130 "parser.y"
                                        {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 1814 "parser.tab.c"
    break;

  case 45: /* integer: FLOAT_VAL  */
#line 133 "parser.y"
                                {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 1820 "parser.tab.c"
    break;

  case 46: /* integer: PLUS FLOAT_VAL  */
#line 134 "parser.y"
                                 {(yyval.value) = mkNode("+",1,mkNode((yyvsp[0].value),0));}
#line 1826 "parser.tab.c"
    break;

  case 47: /* integer: MINUS FLOAT_VAL  */
#line 135 "parser.y"
                                 {(yyval.value) = mkNode("-",1,mkNode((yyvsp[0].value),0));}
#line 1832 "parser.tab.c"
    break;

  case 48: /* integer: HEX_VAL  */
#line 136 "parser.y"
                                      {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 1838 "parser.tab.c"
    break;

  case 49: /* integer: INT_VAL  */
#line 137 "parser.y"
                                  {(yyval.value) = mkNode((yyvsp[0].value),0);}
#line 1844 "parser.tab.c"
    break;

  case 50: /* expression: ID  */
#line 139 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode((yyvsp[0].value),0);}
#line 1850 "parser.tab.c"
    break;

  case 51: /* expression: integer  */
#line 140 "parser.y"
                                                                                        {(yyval.nPtr) = (yyvsp[0].value);}
#line 1856 "parser.tab.c"
    break;

  case 52: /* expression: ID '[' expression ']'  */
#line 141 "parser.y"
                                                                        {(yyval.nPtr) = mkNode((yyvsp[-3].value),3,mkNode("[",0),(yyvsp[-1].nPtr),mkNode("]",0));}
#line 1862 "parser.tab.c"
    break;

  case 53: /* expression: const_value  */
#line 142 "parser.y"
                                                                                        {(yyval.nPtr) = (yyvsp[0].value);}
#line 1868 "parser.tab.c"
    break;

  case 54: /* expression: expression AND expression  */
#line 143 "parser.y"
                                                            {(yyval.nPtr) = mkNode("AND",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1874 "parser.tab.c"
    break;

  case 55: /* expression: expression EQUAL expression  */
#line 144 "parser.y"
                                                            {(yyval.nPtr) = mkNode("==",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1880 "parser.tab.c"
    break;

  case 56: /* expression: expression NOT_EQ expression  */
#line 145 "parser.y"
                                                            {(yyval.nPtr) = mkNode("!=",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1886 "parser.tab.c"
    break;

  case 57: /* expression: expression OR expression  */
#line 146 "parser.y"
                                                            {(yyval.nPtr) = mkNode("OR",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1892 "parser.tab.c"
    break;

  case 58: /* expression: expression BIGGER expression  */
#line 147 "parser.y"
                                                                {(yyval.nPtr) = mkNode(">",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1898 "parser.tab.c"
    break;

  case 59: /* expression: expression BIGGER_EQ expression  */
#line 148 "parser.y"
                                                            {(yyval.nPtr) = mkNode(">=",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1904 "parser.tab.c"
    break;

  case 60: /* expression: expression SMALLER_EQ expression  */
#line 149 "parser.y"
                                                                {(yyval.nPtr) = mkNode("<=",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1910 "parser.tab.c"
    break;

  case 61: /* expression: expression SMALLER expression  */
#line 150 "parser.y"
                                                                {(yyval.nPtr) = mkNode("<",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1916 "parser.tab.c"
    break;

  case 62: /* expression: expression PLUS expression  */
#line 151 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("+",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1922 "parser.tab.c"
    break;

  case 63: /* expression: expression MINUS expression  */
#line 152 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("-",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1928 "parser.tab.c"
    break;

  case 64: /* expression: expression MUL expression  */
#line 153 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("*",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1934 "parser.tab.c"
    break;

  case 65: /* expression: expression DIV expression  */
#line 154 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("/",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 1940 "parser.tab.c"
    break;

  case 66: /* expression: op_unary expression  */
#line 155 "parser.y"
                                                                                {(yyval.nPtr) = mkNode((yyvsp[-1].value),1,(yyvsp[0].nPtr));}
#line 1946 "parser.tab.c"
    break;

  case 67: /* expression: '(' expression ')'  */
#line 156 "parser.y"
                                                                                {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1952 "parser.tab.c"
    break;

  case 68: /* expression: '|' expression '|'  */
#line 157 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("|",2,(yyvsp[-1].nPtr),mkNode("|",0));}
#line 1958 "parser.tab.c"
    break;

  case 69: /* expression: func_call  */
#line 158 "parser.y"
                                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1964 "parser.tab.c"
    break;

  case 81: /* statement: '{' code_block '}'  */
#line 174 "parser.y"
                                              {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1970 "parser.tab.c"
    break;

  case 82: /* assignment: lhs '=' expression  */
#line 177 "parser.y"
                                                {(yyval.nPtr) = mkNode("ASS",2,mkNode("",1,(yyvsp[-2].nPtr)),(yyvsp[0].nPtr));}
#line 1976 "parser.tab.c"
    break;

  case 83: /* assignment: lhs '=' STRING_VAL  */
#line 178 "parser.y"
                                                        {(yyval.nPtr) = mkNode("ASS",2,(yyvsp[-2].nPtr),mkNode((yyvsp[0].value),0));}
#line 1982 "parser.tab.c"
    break;

  case 84: /* lhs: ID  */
#line 181 "parser.y"
                                                                                {(yyval.nPtr) = mkNode((yyvsp[0].value),0);}
#line 1988 "parser.tab.c"
    break;

  case 85: /* lhs: '*' ID  */
#line 182 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("*",1,mkNode((yyvsp[0].value),0));}
#line 1994 "parser.tab.c"
    break;

  case 86: /* lhs: ID '[' expression ']'  */
#line 183 "parser.y"
                                                                        {(yyval.nPtr) = mkNode((yyvsp[-3].value),3,mkNode("[",0),(yyvsp[-1].nPtr),mkNode("]",0));}
#line 2000 "parser.tab.c"
    break;

  case 87: /* code_block: var_declr statements  */
#line 186 "parser.y"
                                                {(yyval.nPtr) = mkNode("BLOCK",2,mkParent("VAR",(yyvsp[-1].nPtr)),(yyvsp[0].nPtr));}
#line 2006 "parser.tab.c"
    break;

  case 88: /* func_call: lhs '=' ID '(' expressions ')' ';'  */
#line 189 "parser.y"
                                                        {(yyval.nPtr) = mkNode("FUNCTION_CALL",1,(mkNode("ASS",3,(yyvsp[-6].nPtr),mkNode((yyvsp[-4].value),0),mkParent("ARGS",(yyvsp[-2].nPtr)))));}
#line 2012 "parser.tab.c"
    break;

  case 89: /* func_call: ID '(' expressions ')' ';'  */
#line 190 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("FUNCTION_CALL",1,mkParent((yyvsp[-4].value),mkParent("ARGS",(yyvsp[-2].nPtr))));}
#line 2018 "parser.tab.c"
    break;

  case 90: /* func_call: ID '(' ')' ';'  */
#line 191 "parser.y"
                                                                                {(yyval.nPtr) = mkNode("FUNCTION_CALL",2,mkNode((yyvsp[-3].value),0),mkParent("ARGS",mkNode("NONE", 0)));}
#line 2024 "parser.tab.c"
    break;

  case 91: /* func_call: lhs '=' ID '(' ')' ';'  */
#line 192 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("FUNCTION_CALL",1,(mkNode("ASS",3,(yyvsp[-5].nPtr),mkNode((yyvsp[-3].value),0),mkParent("ARGS",mkNode("NONE", 0)))));}
#line 2030 "parser.tab.c"
    break;

  case 92: /* expressions: %empty  */
#line 196 "parser.y"
                                                                {(yyval.nPtr) = NULL;}
#line 2036 "parser.tab.c"
    break;

  case 93: /* expressions: expressions_ne  */
#line 197 "parser.y"
                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2042 "parser.tab.c"
    break;

  case 94: /* expressions_ne: expression  */
#line 200 "parser.y"
                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2048 "parser.tab.c"
    break;

  case 95: /* expressions_ne: expressions_ne ',' expression  */
#line 201 "parser.y"
                                                                {(yyval.nPtr) = mkNode("",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2054 "parser.tab.c"
    break;

  case 96: /* if: IF '(' expression ')' '{' if_else_block '}'  */
#line 204 "parser.y"
                                                                {(yyval.nPtr) = mkNode("IF",2,(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 2060 "parser.tab.c"
    break;

  case 97: /* if: IF '(' expression ')' if_else_statement  */
#line 205 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("IF",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2066 "parser.tab.c"
    break;

  case 98: /* if_else: IF '(' expression ')' '{' if_else_block '}' ELSE '{' if_else_block '}'  */
#line 209 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("IF-ELSE",3,(yyvsp[-8].nPtr),(yyvsp[-5].nPtr),(yyvsp[-1].nPtr));}
#line 2072 "parser.tab.c"
    break;

  case 99: /* if_else: IF '(' expression ')' if_else_statement ELSE if_else_statement  */
#line 211 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("IF-ELSE",3,(yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2078 "parser.tab.c"
    break;

  case 100: /* if_else: IF '(' expression ')' if_else_statement ELSE '{' if_else_block '}'  */
#line 213 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("IF-ELSE",3,(yyvsp[-6].nPtr),(yyvsp[-4].nPtr),(yyvsp[-1].nPtr));}
#line 2084 "parser.tab.c"
    break;

  case 101: /* if_else: IF '(' expression ')' '{' if_else_block '}' ELSE if_else_statement  */
#line 215 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("IF-ELSE",3,(yyvsp[-6].nPtr),(yyvsp[-3].nPtr),(yyvsp[0].nPtr));}
#line 2090 "parser.tab.c"
    break;

  case 102: /* if_else_block: code_block RETURN expression ';'  */
#line 217 "parser.y"
                                                {(yyval.nPtr) = mkNode("",2,(yyvsp[-3].nPtr),mkParent("RET",(yyvsp[-1].nPtr)));}
#line 2096 "parser.tab.c"
    break;

  case 103: /* if_else_block: code_block  */
#line 218 "parser.y"
                                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2102 "parser.tab.c"
    break;

  case 104: /* if_else_block: RETURN expression ';'  */
#line 219 "parser.y"
                                                                        {(yyval.nPtr) = mkParent("RET",(yyvsp[-1].nPtr));}
#line 2108 "parser.tab.c"
    break;

  case 105: /* if_else_block: RETURN expression  */
#line 220 "parser.y"
                                                                                {(yyval.nPtr) = mkParent("RET",(yyvsp[0].nPtr));}
#line 2114 "parser.tab.c"
    break;

  case 106: /* if_else_statement: statement  */
#line 223 "parser.y"
                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2120 "parser.tab.c"
    break;

  case 107: /* if_else_statement: RETURN expression ';'  */
#line 224 "parser.y"
                                                                {(yyval.nPtr) = mkParent("RET",(yyvsp[-1].nPtr));}
#line 2126 "parser.tab.c"
    break;

  case 108: /* if_else_statement: RETURN expression  */
#line 225 "parser.y"
                                                                        {(yyval.nPtr) = mkParent("RET",(yyvsp[0].nPtr));}
#line 2132 "parser.tab.c"
    break;

  case 109: /* while: WHILE '(' expression ')' statement  */
#line 228 "parser.y"
                                                {(yyval.nPtr) = mkNode("WHILE",2,(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2138 "parser.tab.c"
    break;

  case 110: /* do_while: DO '{' code_block '}' WHILE '(' expression ')' ';'  */
#line 231 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("DO-WHILE",2,(yyvsp[-6].nPtr),mkNode("WHILE",1,(yyvsp[-2].nPtr)));}
#line 2144 "parser.tab.c"
    break;

  case 111: /* for: FOR '(' assignment ';' expression ';' update ')' statement  */
#line 234 "parser.y"
                                                                 {(yyval.nPtr) = mkNode("FOR",4,(yyvsp[-6].nPtr),(yyvsp[-4].nPtr),(yyvsp[-2].nPtr),(yyvsp[0].nPtr));}
#line 2150 "parser.tab.c"
    break;

  case 112: /* update: lhs '=' expression  */
#line 237 "parser.y"
                                        {(yyval.nPtr) = mkNode("ASS",2,mkNode("",1,(yyvsp[-2].nPtr)),(yyvsp[0].nPtr));}
#line 2156 "parser.tab.c"
    break;

  case 113: /* update: %empty  */
#line 238 "parser.y"
                                                                {(yyval.nPtr)=NULL;}
#line 2162 "parser.tab.c"
    break;

  case 114: /* statements: %empty  */
#line 241 "parser.y"
                                                                                                {(yyval.nPtr) = NULL;}
#line 2168 "parser.tab.c"
    break;

  case 115: /* statements: statements_ne  */
#line 242 "parser.y"
                                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2174 "parser.tab.c"
    break;

  case 116: /* statements_ne: statement  */
#line 245 "parser.y"
                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2180 "parser.tab.c"
    break;

  case 117: /* statements_ne: statements_ne statement  */
#line 246 "parser.y"
                                                                {(yyval.nPtr) = mkNode("",2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 2186 "parser.tab.c"
    break;

  case 118: /* variable_declaration: VAR type ':' variable_ass ';'  */
#line 251 "parser.y"
                                                              {(yyval.nPtr) = mkNode((yyvsp[-3].nPtr),1,(yyvsp[-1].nPtr));}
#line 2192 "parser.tab.c"
    break;

  case 119: /* variable_declaration: VAR identifiers ':' type ';'  */
#line 252 "parser.y"
                                                                                {(yyval.nPtr) = mkNode((yyvsp[-1].nPtr),1,(yyvsp[-3].nPtr));}
#line 2198 "parser.tab.c"
    break;

  case 120: /* variable_declaration: STRING str_declaration  */
#line 253 "parser.y"
                                                                                        {(yyval.nPtr) =(yyvsp[0].nPtr);}
#line 2204 "parser.tab.c"
    break;

  case 121: /* str_declaration: ID '[' integer_value ']' '=' STRING_VAL ';'  */
#line 256 "parser.y"
                                                             {(yyval.nPtr) = mkNode("STRING",3,mkNode((yyvsp[-6].value),0),mkNode("[",2,(yyvsp[-4].nPtr),mkNode("]",0)), mkNode("ASS",1,mkNode((yyvsp[-1].value),0)));}
#line 2210 "parser.tab.c"
    break;

  case 122: /* str_declaration: ID '[' integer_value ']' ';'  */
#line 257 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode("STRING",2,mkNode((yyvsp[-4].value),0),mkNode("[",2,(yyvsp[-2].nPtr),mkNode("]",0)));}
#line 2216 "parser.tab.c"
    break;

  case 123: /* str_declaration: ID '[' integer_value ']' ',' str_declaration  */
#line 258 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("STRING",3,mkNode((yyvsp[-5].value),0),mkNode("[",2,(yyvsp[-3].nPtr),mkNode("]",0)),(yyvsp[0].nPtr));}
#line 2222 "parser.tab.c"
    break;

  case 124: /* integer_value: integer  */
#line 261 "parser.y"
                                                                {(yyval.nPtr) = (yyvsp[0].value);}
#line 2228 "parser.tab.c"
    break;

  case 125: /* integer_value: integer PLUS integer_value  */
#line 262 "parser.y"
                                                            {(yyval.nPtr) = mkNode("+",0),(yyvsp[0].nPtr);}
#line 2234 "parser.tab.c"
    break;

  case 126: /* integer_value: integer MUL integer_value  */
#line 263 "parser.y"
                                                                {(yyval.nPtr) = mkNode("*",0),(yyvsp[0].nPtr);}
#line 2240 "parser.tab.c"
    break;

  case 127: /* integer_value: integer MINUS integer_value  */
#line 264 "parser.y"
                                                                {(yyval.nPtr) = 2,mkNode("-",0),(yyvsp[0].nPtr);}
#line 2246 "parser.tab.c"
    break;

  case 128: /* variable_ass: ID '=' const_value ',' variable_ass  */
#line 267 "parser.y"
                                                        {(yyval.nPtr) = mkNode("ASS",3,mkNode((yyvsp[-4].value),1,(yyvsp[-2].value)), mkParent("",(yyvsp[0].nPtr)));}
#line 2252 "parser.tab.c"
    break;

  case 129: /* variable_ass: ID '=' const_value  */
#line 268 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("ASS",1,mkNode((yyvsp[-2].value),1, (yyvsp[0].value)));}
#line 2258 "parser.tab.c"
    break;

  case 130: /* variable_ass: ID  */
#line 269 "parser.y"
                                                                                        {(yyval.nPtr) = mkNode((yyvsp[0].value),0);}
#line 2264 "parser.tab.c"
    break;

  case 131: /* type: var_types  */
#line 272 "parser.y"
                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2270 "parser.tab.c"
    break;

  case 132: /* var_declr: %empty  */
#line 275 "parser.y"
                                                                                {(yyval.nPtr) = NULL;}
#line 2276 "parser.tab.c"
    break;

  case 133: /* var_declr: var_declr_ne  */
#line 276 "parser.y"
                                                                        {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2282 "parser.tab.c"
    break;

  case 134: /* var_declr_ne: variable_declaration  */
#line 279 "parser.y"
                                                                {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 2288 "parser.tab.c"
    break;

  case 135: /* var_declr_ne: var_declr_ne variable_declaration  */
#line 280 "parser.y"
                                                                        {(yyval.nPtr) = mkNode("",2,(yyvsp[-1].nPtr),(yyvsp[0].nPtr));}
#line 2294 "parser.tab.c"
    break;


#line 2298 "parser.tab.c"

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

#line 282 "parser.y"


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
int main(void) {
    #if YYDEBUG
        yydebug = 1;
    #endif
	yyparse();
	return 0;
}
