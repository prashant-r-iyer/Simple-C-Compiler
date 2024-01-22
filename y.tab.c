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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    WORD = 258,                    /* WORD  */
    NOTOKEN = 259,                 /* NOTOKEN  */
    LPARENT = 260,                 /* LPARENT  */
    RPARENT = 261,                 /* RPARENT  */
    LBRACE = 262,                  /* LBRACE  */
    RBRACE = 263,                  /* RBRACE  */
    LCURLY = 264,                  /* LCURLY  */
    RCURLY = 265,                  /* RCURLY  */
    COMA = 266,                    /* COMA  */
    SEMICOLON = 267,               /* SEMICOLON  */
    EQUAL = 268,                   /* EQUAL  */
    STRING_CONST = 269,            /* STRING_CONST  */
    LONG = 270,                    /* LONG  */
    LONGSTAR = 271,                /* LONGSTAR  */
    VOID = 272,                    /* VOID  */
    CHARSTAR = 273,                /* CHARSTAR  */
    CHARSTARSTAR = 274,            /* CHARSTARSTAR  */
    INTEGER_CONST = 275,           /* INTEGER_CONST  */
    AMPERSAND = 276,               /* AMPERSAND  */
    OROR = 277,                    /* OROR  */
    ANDAND = 278,                  /* ANDAND  */
    EQUALEQUAL = 279,              /* EQUALEQUAL  */
    NOTEQUAL = 280,                /* NOTEQUAL  */
    LESS = 281,                    /* LESS  */
    GREAT = 282,                   /* GREAT  */
    LESSEQUAL = 283,               /* LESSEQUAL  */
    GREATEQUAL = 284,              /* GREATEQUAL  */
    PLUS = 285,                    /* PLUS  */
    MINUS = 286,                   /* MINUS  */
    TIMES = 287,                   /* TIMES  */
    DIVIDE = 288,                  /* DIVIDE  */
    PERCENT = 289,                 /* PERCENT  */
    IF = 290,                      /* IF  */
    ELSE = 291,                    /* ELSE  */
    WHILE = 292,                   /* WHILE  */
    DO = 293,                      /* DO  */
    FOR = 294,                     /* FOR  */
    CONTINUE = 295,                /* CONTINUE  */
    BREAK = 296,                   /* BREAK  */
    RETURN = 297                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define WORD 258
#define NOTOKEN 259
#define LPARENT 260
#define RPARENT 261
#define LBRACE 262
#define RBRACE 263
#define LCURLY 264
#define RCURLY 265
#define COMA 266
#define SEMICOLON 267
#define EQUAL 268
#define STRING_CONST 269
#define LONG 270
#define LONGSTAR 271
#define VOID 272
#define CHARSTAR 273
#define CHARSTARSTAR 274
#define INTEGER_CONST 275
#define AMPERSAND 276
#define OROR 277
#define ANDAND 278
#define EQUALEQUAL 279
#define NOTEQUAL 280
#define LESS 281
#define GREAT 282
#define LESSEQUAL 283
#define GREATEQUAL 284
#define PLUS 285
#define MINUS 286
#define TIMES 287
#define DIVIDE 288
#define PERCENT 289
#define IF 290
#define ELSE 291
#define WHILE 292
#define DO 293
#define FOR 294
#define CONTINUE 295
#define BREAK 296
#define RETURN 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "simple.y"

		char *string_val;
		int nargs;
		int my_nlabel;
	

#line 213 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_WORD = 3,                       /* WORD  */
  YYSYMBOL_NOTOKEN = 4,                    /* NOTOKEN  */
  YYSYMBOL_LPARENT = 5,                    /* LPARENT  */
  YYSYMBOL_RPARENT = 6,                    /* RPARENT  */
  YYSYMBOL_LBRACE = 7,                     /* LBRACE  */
  YYSYMBOL_RBRACE = 8,                     /* RBRACE  */
  YYSYMBOL_LCURLY = 9,                     /* LCURLY  */
  YYSYMBOL_RCURLY = 10,                    /* RCURLY  */
  YYSYMBOL_COMA = 11,                      /* COMA  */
  YYSYMBOL_SEMICOLON = 12,                 /* SEMICOLON  */
  YYSYMBOL_EQUAL = 13,                     /* EQUAL  */
  YYSYMBOL_STRING_CONST = 14,              /* STRING_CONST  */
  YYSYMBOL_LONG = 15,                      /* LONG  */
  YYSYMBOL_LONGSTAR = 16,                  /* LONGSTAR  */
  YYSYMBOL_VOID = 17,                      /* VOID  */
  YYSYMBOL_CHARSTAR = 18,                  /* CHARSTAR  */
  YYSYMBOL_CHARSTARSTAR = 19,              /* CHARSTARSTAR  */
  YYSYMBOL_INTEGER_CONST = 20,             /* INTEGER_CONST  */
  YYSYMBOL_AMPERSAND = 21,                 /* AMPERSAND  */
  YYSYMBOL_OROR = 22,                      /* OROR  */
  YYSYMBOL_ANDAND = 23,                    /* ANDAND  */
  YYSYMBOL_EQUALEQUAL = 24,                /* EQUALEQUAL  */
  YYSYMBOL_NOTEQUAL = 25,                  /* NOTEQUAL  */
  YYSYMBOL_LESS = 26,                      /* LESS  */
  YYSYMBOL_GREAT = 27,                     /* GREAT  */
  YYSYMBOL_LESSEQUAL = 28,                 /* LESSEQUAL  */
  YYSYMBOL_GREATEQUAL = 29,                /* GREATEQUAL  */
  YYSYMBOL_PLUS = 30,                      /* PLUS  */
  YYSYMBOL_MINUS = 31,                     /* MINUS  */
  YYSYMBOL_TIMES = 32,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 33,                    /* DIVIDE  */
  YYSYMBOL_PERCENT = 34,                   /* PERCENT  */
  YYSYMBOL_IF = 35,                        /* IF  */
  YYSYMBOL_ELSE = 36,                      /* ELSE  */
  YYSYMBOL_WHILE = 37,                     /* WHILE  */
  YYSYMBOL_DO = 38,                        /* DO  */
  YYSYMBOL_FOR = 39,                       /* FOR  */
  YYSYMBOL_CONTINUE = 40,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 41,                     /* BREAK  */
  YYSYMBOL_RETURN = 42,                    /* RETURN  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_goal = 44,                      /* goal  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_function_or_var_list = 46,      /* function_or_var_list  */
  YYSYMBOL_function = 47,                  /* function  */
  YYSYMBOL_48_1 = 48,                      /* $@1  */
  YYSYMBOL_49_2 = 49,                      /* $@2  */
  YYSYMBOL_arg_list = 50,                  /* arg_list  */
  YYSYMBOL_arguments = 51,                 /* arguments  */
  YYSYMBOL_arg = 52,                       /* arg  */
  YYSYMBOL_global_var = 53,                /* global_var  */
  YYSYMBOL_global_var_list = 54,           /* global_var_list  */
  YYSYMBOL_var_type = 55,                  /* var_type  */
  YYSYMBOL_assignment = 56,                /* assignment  */
  YYSYMBOL_call = 57,                      /* call  */
  YYSYMBOL_call_arg_list = 58,             /* call_arg_list  */
  YYSYMBOL_call_arguments = 59,            /* call_arguments  */
  YYSYMBOL_expression = 60,                /* expression  */
  YYSYMBOL_logical_or_expr = 61,           /* logical_or_expr  */
  YYSYMBOL_62_3 = 62,                      /* $@3  */
  YYSYMBOL_logical_and_expr = 63,          /* logical_and_expr  */
  YYSYMBOL_64_4 = 64,                      /* $@4  */
  YYSYMBOL_equality_expr = 65,             /* equality_expr  */
  YYSYMBOL_relational_expr = 66,           /* relational_expr  */
  YYSYMBOL_additive_expr = 67,             /* additive_expr  */
  YYSYMBOL_multiplicative_expr = 68,       /* multiplicative_expr  */
  YYSYMBOL_primary_expr = 69,              /* primary_expr  */
  YYSYMBOL_compound_statement = 70,        /* compound_statement  */
  YYSYMBOL_statement_list = 71,            /* statement_list  */
  YYSYMBOL_local_var = 72,                 /* local_var  */
  YYSYMBOL_local_var_list = 73,            /* local_var_list  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_75_5 = 75,                      /* $@5  */
  YYSYMBOL_76_6 = 76,                      /* $@6  */
  YYSYMBOL_77_7 = 77,                      /* $@7  */
  YYSYMBOL_78_8 = 78,                      /* $@8  */
  YYSYMBOL_79_9 = 79,                      /* $@9  */
  YYSYMBOL_80_10 = 80,                     /* $@10  */
  YYSYMBOL_81_11 = 81,                     /* $@11  */
  YYSYMBOL_82_12 = 82,                     /* $@12  */
  YYSYMBOL_83_13 = 83,                     /* $@13  */
  YYSYMBOL_84_14 = 84,                     /* $@14  */
  YYSYMBOL_else_optional = 85,             /* else_optional  */
  YYSYMBOL_jump_statement = 86             /* jump_statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 21 "simple.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();
int yyerror(const char * s);

extern int line_number;
const char * input_file;
char * asm_file;
FILE * fasm;

#define MAX_ARGS 5
int nargs;
char * args_table[MAX_ARGS];

#define MAX_GLOBALS 100
int nglobals = 0;
char * global_vars_table[MAX_GLOBALS];

#define MAX_LOCALS 32
#define MAX_LOCALS_SPACE (8 * MAX_LOCALS)
int nlocals = 0;
char * local_vars_table[MAX_LOCALS];

#define MAX_STRINGS 100
int nstrings = 0;
char * string_table[MAX_STRINGS];

char * string_variable_table[MAX_LOCALS + MAX_GLOBALS];
int string_variable_count = 0;

char *regStk[]={ "rbx", "r10", "r13", "r14", "r15", "r11", "r9"};
char nregStk = sizeof(regStk)/sizeof(char*);

char *regByte[]={ "bl", "r10b", "r13b", "r14b", "r15b", "r11b", "r9b"};

char *regArgs[]={ "rdi", "rsi", "rdx", "rcx", "r8", "r9"};
char nregArgs = sizeof(regArgs)/sizeof(char*);

int top = 0;
int nargs = 0;

int nlabelwhile = 1;
int nlabelif = 1;
int nlabeldowhile = 1;
int nlabelfor = 1;

int currentloop = 0;
int currentforcount = 0;
int currentwhilecount = 0;
int currentdowhilecount = 0;

int currentvarischar = 0;

int var_id = -1;

int and_label = 0;
int or_label = 0;

int ischar(char *var) {
	for (int i = 0; i < string_variable_count; i++) {
		if (strcmp(string_variable_table[i], var) == 0) {
			return 1;
		}
	}

	return 0;
}


#line 398 "y.tab.c"


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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   150

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    97,    97,   100,   103,   104,   105,   109,   131,   109,
     155,   156,   160,   161,   165,   177,   180,   194,   203,   206,
     209,   212,   215,   221,   239,   289,   313,   316,   322,   325,
     331,   335,   336,   336,   359,   360,   360,   383,   384,   391,
     401,   402,   409,   416,   423,   433,   434,   441,   451,   452,
     459,   469,   482,   493,   494,   512,   555,   574,   585,   589,
     593,   594,   598,   601,   612,   619,   620,   623,   624,   626,
     630,   635,   626,   643,   650,   643,   661,   668,   661,   679,
     686,   693,   679,   703,   707,   708,   712,   723,   737
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
  "\"end of file\"", "error", "\"invalid token\"", "WORD", "NOTOKEN",
  "LPARENT", "RPARENT", "LBRACE", "RBRACE", "LCURLY", "RCURLY", "COMA",
  "SEMICOLON", "EQUAL", "STRING_CONST", "LONG", "LONGSTAR", "VOID",
  "CHARSTAR", "CHARSTARSTAR", "INTEGER_CONST", "AMPERSAND", "OROR",
  "ANDAND", "EQUALEQUAL", "NOTEQUAL", "LESS", "GREAT", "LESSEQUAL",
  "GREATEQUAL", "PLUS", "MINUS", "TIMES", "DIVIDE", "PERCENT", "IF",
  "ELSE", "WHILE", "DO", "FOR", "CONTINUE", "BREAK", "RETURN", "$accept",
  "goal", "program", "function_or_var_list", "function", "$@1", "$@2",
  "arg_list", "arguments", "arg", "global_var", "global_var_list",
  "var_type", "assignment", "call", "call_arg_list", "call_arguments",
  "expression", "logical_or_expr", "$@3", "logical_and_expr", "$@4",
  "equality_expr", "relational_expr", "additive_expr",
  "multiplicative_expr", "primary_expr", "compound_statement",
  "statement_list", "local_var", "local_var_list", "statement", "$@5",
  "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14",
  "else_optional", "jump_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-59)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-36)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -59,     2,   -59,    18,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     3,    16,    49,    26,    20,   -59,    18,   -59,
      35,   -59,   -59,    51,    18,    56,   -59,   -59,    60,   -59,
     -59,    10,    25,   -59,    77,    78,   -59,    79,    76,    80,
      50,    86,    81,    82,   -59,   -59,   -59,   -59,    50,    50,
      50,   -59,   -59,    95,    92,   -59,   -59,     5,    50,   -59,
     -59,    96,   -59,    88,    83,    85,    48,    30,    44,   -18,
     -59,   -59,    65,   -59,   -59,    90,    97,   -59,   101,   -59,
      50,    50,    84,    -2,   -59,    50,   109,   -59,   -59,    94,
      99,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,   115,   -59,    50,   -59,   106,   114,   118,   120,
     116,   119,   -59,    50,    50,    30,    30,    44,    44,    44,
      44,   -18,   -18,   -59,   -59,   -59,   -59,   -59,    50,   -59,
     -59,    50,    50,   -59,    85,    48,   -59,    95,    95,   -59,
     117,   -59,   -59,   125,   -59,   102,   127,    92,    95,   -59,
     -59,   134,   -59,   -59,    95,   -59
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     2,     3,     1,    20,    21,    22,    18,    19,
       4,     5,     0,    16,     0,     0,     0,    15,    13,    17,
      12,     8,    10,     0,     0,     0,    14,    11,     0,    61,
       9,     0,     0,    59,     0,     0,    76,     0,     0,     0,
       0,     0,     0,     0,    68,    67,    60,    83,    29,     0,
       0,    69,    73,     0,     0,    86,    87,    54,     0,    52,
      57,     0,    53,     0,    30,    31,    34,    37,    40,    45,
      48,    63,     0,    65,    66,    28,     0,    26,     0,    23,
       0,     0,     0,     0,    79,     0,     0,    56,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,     0,    25,     0,     0,     0,     0,
       0,     0,    58,     0,     0,    38,    39,    41,    42,    43,
      44,    46,    47,    49,    50,    51,    64,    27,     0,    70,
      74,     0,     0,    55,    33,    36,    24,     0,     0,    77,
       0,    71,    75,     0,    80,    85,     0,     0,     0,    72,
      78,     0,    84,    81,     0,    82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   121,
     -59,   -59,     0,   -50,   -31,   -59,   -59,   -41,   -59,   -59,
      13,   -59,    27,   -13,   -28,   -17,   -58,   122,   -59,   -59,
     -59,   -52,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     3,    10,    15,    25,    20,    21,    22,
      11,    14,    41,    42,    62,    75,    76,    63,    64,    89,
      65,    90,    66,    67,    68,    69,    70,    44,    31,    45,
      72,    46,    80,   137,   145,    81,   138,    53,   143,   110,
     147,   154,   149,    47
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    82,     4,    12,    84,    49,    13,    77,    78,    79,
      48,    50,    85,    32,    99,   100,   101,    86,    23,    29,
      33,    -7,    43,    19,    23,     5,     6,     7,     8,     9,
      48,    18,    49,     5,     6,     7,     8,     9,    50,   107,
     108,   123,   124,   125,   111,    34,    24,    35,    36,    37,
      38,    39,    40,    57,    26,    58,    93,    94,    95,    96,
      16,    17,    28,   127,    59,   117,   118,   119,   120,    29,
      60,    61,    91,    92,    97,    98,   102,   103,   115,   116,
     121,   122,    51,    52,    54,   141,   142,   136,    55,    71,
     139,   140,    56,    73,    74,    83,   152,   151,    32,    87,
      88,   104,   155,   105,    29,   -32,    43,    43,   -35,   106,
       5,     6,     7,     8,     9,   112,   113,    43,   126,   128,
     129,   109,   114,    43,   130,   131,   134,   133,   132,   144,
      34,   146,    35,    36,    37,    38,    39,    40,   148,   150,
     153,   135,     0,     0,     0,    27,     0,     0,     0,     0,
      30
};

static const yytype_int16 yycheck[] =
{
      31,    53,     0,     3,    54,     7,     3,    48,    49,    50,
       5,    13,     7,     3,    32,    33,    34,    58,    18,     9,
      10,     5,    53,     3,    24,    15,    16,    17,    18,    19,
       5,     5,     7,    15,    16,    17,    18,    19,    13,    80,
      81,    99,   100,   101,    85,    35,    11,    37,    38,    39,
      40,    41,    42,     3,     3,     5,    26,    27,    28,    29,
      11,    12,     6,   104,    14,    93,    94,    95,    96,     9,
      20,    21,    24,    25,    30,    31,    11,    12,    91,    92,
      97,    98,     5,     5,     5,   137,   138,   128,    12,     3,
     131,   132,    12,    12,    12,     3,   148,   147,     3,     3,
      12,    11,   154,     6,     9,    22,   137,   138,    23,     8,
      15,    16,    17,    18,    19,     6,    22,   148,     3,    13,
       6,    37,    23,   154,     6,     5,   113,     8,    12,    12,
      35,     6,    37,    38,    39,    40,    41,    42,    36,    12,
       6,   114,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    44,    45,    46,     0,    15,    16,    17,    18,    19,
      47,    53,    55,     3,    54,    48,    11,    12,     5,     3,
      50,    51,    52,    55,    11,    49,     3,    52,     6,     9,
      70,    71,     3,    10,    35,    37,    38,    39,    40,    41,
      42,    55,    56,    57,    70,    72,    74,    86,     5,     7,
      13,     5,     5,    80,     5,    12,    12,     3,     5,    14,
      20,    21,    57,    60,    61,    63,    65,    66,    67,    68,
      69,     3,    73,    12,    12,    58,    59,    60,    60,    60,
      75,    78,    74,     3,    56,     7,    60,     3,    12,    62,
      64,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    11,    12,    11,     6,     8,    60,    60,    37,
      82,    60,     6,    22,    23,    66,    66,    67,    67,    67,
      67,    68,    68,    69,    69,    69,     3,    60,    13,     6,
       6,     5,    12,     8,    63,    65,    60,    76,    79,    60,
      60,    74,    74,    81,    12,    77,     6,    83,    36,    85,
      12,    56,    74,     6,    84,    74
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    46,    46,    46,    48,    49,    47,
      50,    50,    51,    51,    52,    53,    54,    54,    55,    55,
      55,    55,    55,    56,    56,    57,    58,    58,    59,    59,
      60,    61,    62,    61,    63,    64,    63,    65,    65,    65,
      66,    66,    66,    66,    66,    67,    67,    67,    68,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    69,    70,
      71,    71,    72,    73,    73,    74,    74,    74,    74,    75,
      76,    77,    74,    78,    79,    74,    80,    81,    74,    82,
      83,    84,    74,    74,    85,    85,    86,    86,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     0,     0,     0,     8,
       1,     3,     1,     0,     2,     3,     1,     3,     1,     1,
       1,     1,     1,     3,     6,     4,     1,     3,     1,     0,
       1,     1,     0,     4,     1,     0,     4,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     1,     1,     4,     2,     1,     3,     3,
       2,     0,     3,     1,     3,     2,     2,     1,     1,     0,
       0,     0,     9,     0,     0,     7,     0,     0,     9,     0,
       0,     0,    12,     1,     2,     0,     2,     2,     3
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
  case 7: /* $@1: %empty  */
#line 109 "simple.y"
                      {
		fprintf(fasm, "\t.text\n");
		fprintf(fasm, "\n.globl %s\n", (yyvsp[0].string_val));
		fprintf(fasm, "%s:\n", (yyvsp[0].string_val));

		fprintf(fasm, "\t# Save Frame pointer\n");
		fprintf(fasm, "\tpushq %%rbp\n");
		fprintf(fasm, "\tmovq %%rsp, %%rbp\n");

		fprintf(fasm, "\tsubq $%d, %%rsp\n", MAX_LOCALS_SPACE);

		fprintf(fasm, "\tpushq %%rbx\n");
		fprintf(fasm, "\tpushq %%rbx\n");
		fprintf(fasm, "\tpushq %%r10\n");
		fprintf(fasm, "\tpushq %%r13\n");
		fprintf(fasm, "\tpushq %%r14\n");
		fprintf(fasm, "\tpushq %%r15\n");
		fprintf(fasm, "\tpushq %%r11\n");
		fprintf(fasm, "\tpushq %%r9\n");

		nlocals = 0;
	}
#line 1485 "y.tab.c"
    break;

  case 8: /* $@2: %empty  */
#line 131 "simple.y"
                          {
		for (int i = 0; i < nlocals; i++) {
			fprintf(fasm, "\tmovq %%%s, -%d(%%rbp)\n", regArgs[i], 8 * (i + 1));
		}
	}
#line 1495 "y.tab.c"
    break;

  case 9: /* function: var_type WORD $@1 LPARENT arguments $@2 RPARENT compound_statement  */
#line 136 "simple.y"
                                   {
		fprintf(fasm, "\n\t# Restore registers\n");
		fprintf(fasm, "\tpopq %%r9\n");
		fprintf(fasm, "\tpopq %%r11\n");
		fprintf(fasm, "\tpopq %%r15\n");
		fprintf(fasm, "\tpopq %%r14\n");
		fprintf(fasm, "\tpopq %%r13\n");
		fprintf(fasm, "\tpopq %%r10\n");
		fprintf(fasm, "\tpopq %%rbx\n");
		fprintf(fasm, "\tpopq %%rbx\n");

		fprintf(fasm, "\taddq $%d, %%rsp\n", MAX_LOCALS_SPACE);

		fprintf(fasm, "\n\tleave\n");
		fprintf(fasm, "\tret\n\n");
	}
#line 1516 "y.tab.c"
    break;

  case 14: /* arg: var_type WORD  */
#line 165 "simple.y"
                      {
		local_vars_table[nlocals] = (yyvsp[0].string_val);
		nlocals++;

		if (var_id == 1) {
			string_variable_table[string_variable_count] = (yyvsp[0].string_val);
			string_variable_count++;
		}
	}
#line 1530 "y.tab.c"
    break;

  case 16: /* global_var_list: WORD  */
#line 180 "simple.y"
             {
		fprintf(fasm, "\t.data\n");
		fprintf(fasm, "\t.comm %s, 8\n", (yyvsp[0].string_val));

		global_vars_table[nglobals] = (yyvsp[0].string_val);
		

		if (var_id == 1) {
			string_variable_table[string_variable_count] = (yyvsp[0].string_val);
			string_variable_count++;
		}

		nglobals++;
	}
#line 1549 "y.tab.c"
    break;

  case 17: /* global_var_list: global_var_list COMA WORD  */
#line 194 "simple.y"
                                    {
		fprintf(fasm, "\t.comm %s, 8\n", (yyvsp[0].string_val));

		global_vars_table[nglobals] = (yyvsp[0].string_val);
		nglobals++;
	}
#line 1560 "y.tab.c"
    break;

  case 18: /* var_type: CHARSTAR  */
#line 203 "simple.y"
                 {
		var_id = 1;
	}
#line 1568 "y.tab.c"
    break;

  case 19: /* var_type: CHARSTARSTAR  */
#line 206 "simple.y"
                       {
		var_id = 2;
	}
#line 1576 "y.tab.c"
    break;

  case 20: /* var_type: LONG  */
#line 209 "simple.y"
               {
		var_id = 3;
	}
#line 1584 "y.tab.c"
    break;

  case 21: /* var_type: LONGSTAR  */
#line 212 "simple.y"
                   {
		var_id = 4;
	}
#line 1592 "y.tab.c"
    break;

  case 22: /* var_type: VOID  */
#line 215 "simple.y"
               {
		var_id = 5;
	}
#line 1600 "y.tab.c"
    break;

  case 23: /* assignment: WORD EQUAL expression  */
#line 221 "simple.y"
                              {
		int pos = -1;
		char *variable = (yyvsp[-2].string_val);
		for (int i = 0; i < nlocals; i++) {
			if (strcmp(local_vars_table[i], variable) == 0) {
				pos = i;
				break;
			}
		}

		if (pos == -1) {
			fprintf(fasm, "\tmovq %%%s, %s\n", regStk[top - 1], (yyvsp[-2].string_val));
		}
		else {
			fprintf(fasm, "\tmovq %%%s, -%d(%%rbp)\n", regStk[top - 1], 8 * (pos + 1));
		}
		top--;
	}
#line 1623 "y.tab.c"
    break;

  case 24: /* assignment: WORD LBRACE expression RBRACE EQUAL expression  */
#line 239 "simple.y"
                                                         {
		if (ischar((yyvsp[-5].string_val))) {
			int pos = -1;
			char *variable = (yyvsp[-5].string_val);
			for (int i = 0; i < nlocals; i++) {
				if (strcmp(local_vars_table[i], variable) == 0) {
					pos = i;
					break;
				}
			}

			if (pos == -1) {
				fprintf(fasm, "\taddq %s, %%%s\n", (yyvsp[-5].string_val), regStk[top - 2]);
			}
			else {
				fprintf(fasm, "\taddq -%d(%%rbp), %%%s\n", 8 * (pos + 1), regStk[top - 2]);
			}
			fprintf(fasm, "\tmovq $0, %%%s\n", regStk[top]);
			fprintf(fasm, "\tmovb %%%s, %%%s\n", regByte[top - 1], regByte[top]);
			fprintf(fasm, "\tmovq %%%s, (%%%s)\n", regStk[top], regStk[top - 2]);

			top -= 2;
		}
		else {
			int pos = -1;
			char *variable = (yyvsp[-5].string_val);
			for (int i = 0; i < nlocals; i++) {
				if (strcmp(local_vars_table[i], variable) == 0) {
					pos = i;
					break;
				}
			}

			if (pos == -1) {
				fprintf(fasm, "\timulq $8, %%%s\n", regStk[top - 2]);
				fprintf(fasm, "\taddq %s, %%%s\n", (yyvsp[-5].string_val), regStk[top - 2]);
				fprintf(fasm, "\tmovq %%%s, (%%%s)\n", regStk[top - 1], regStk[top - 2]);
			}
			else {
				fprintf(fasm, "\timulq $8, %%%s\n", regStk[top - 2]);
				fprintf(fasm, "\taddq -%d(%%rbp), %%%s\n", 8 * (pos + 1), regStk[top - 2]);
				fprintf(fasm, "\tmovq %%%s, (%%%s)\n", regStk[top - 1], regStk[top - 2]);
			}
			top -= 2;
		}
		
	}
#line 1675 "y.tab.c"
    break;

  case 25: /* call: WORD LPARENT call_arguments RPARENT  */
#line 289 "simple.y"
                                            {
		char * funcName = (yyvsp[-3].string_val);
		int nargs = (yyvsp[-1].nargs);
		int i;

		fprintf(fasm,"\t# func=%s nargs=%d\n", funcName, nargs);
		fprintf(fasm,"\n\t# Move values from reg stack to reg args\n");

		for (i = nargs - 1; i >= 0; i--) {
			top--;
			fprintf(fasm, "\tmovq %%%s, %%%s\n", regStk[top], regArgs[i]);
		}

		if (!strcmp(funcName, "printf")) {
			fprintf(fasm, "\tmovl $0, %%eax\n");
		}
		
		fprintf(fasm, "\tcall %s\n", funcName);
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top]);
		top++;
	}
#line 1701 "y.tab.c"
    break;

  case 26: /* call_arg_list: expression  */
#line 313 "simple.y"
                   {
		(yyval.nargs)=1;
	}
#line 1709 "y.tab.c"
    break;

  case 27: /* call_arg_list: call_arg_list COMA expression  */
#line 316 "simple.y"
                                        {
		(yyval.nargs)++;
	}
#line 1717 "y.tab.c"
    break;

  case 28: /* call_arguments: call_arg_list  */
#line 322 "simple.y"
                      {
		(yyval.nargs)=(yyvsp[0].nargs);
	}
#line 1725 "y.tab.c"
    break;

  case 29: /* call_arguments: %empty  */
#line 325 "simple.y"
                    {
		(yyval.nargs)=0;
	}
#line 1733 "y.tab.c"
    break;

  case 32: /* $@3: %empty  */
#line 336 "simple.y"
                          {
		fprintf(fasm, "or_start_%d:\n", or_label);

		fprintf(fasm, "\tmovq $1, %%rax\n");

		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tjne or_end_%d\n", or_label);
	}
#line 1746 "y.tab.c"
    break;

  case 33: /* logical_or_expr: logical_or_expr $@3 OROR logical_and_expr  */
#line 344 "simple.y"
                              {
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tjne or_end_%d\n", or_label);

		fprintf(fasm, "\tmovq $0, %%rax\n");

		fprintf(fasm, "or_end_%d:\n", or_label);
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);

		or_label++;
		top--;
	}
#line 1763 "y.tab.c"
    break;

  case 35: /* $@4: %empty  */
#line 360 "simple.y"
                           {
		fprintf(fasm, "and_start_%d:\n", and_label);

		fprintf(fasm, "\tmovq $0, %%rax\n");

		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje and_end_%d\n", and_label);
	}
#line 1776 "y.tab.c"
    break;

  case 36: /* logical_and_expr: logical_and_expr $@4 ANDAND equality_expr  */
#line 368 "simple.y"
                             {
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje and_end_%d\n", and_label);

		fprintf(fasm, "\tmovq $1, %%rax\n");

		fprintf(fasm, "and_end_%d:\n", and_label);
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);

		and_label++;
		top--;
	}
#line 1793 "y.tab.c"
    break;

  case 38: /* equality_expr: equality_expr EQUALEQUAL relational_expr  */
#line 384 "simple.y"
                                                   {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsete %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
#line 1805 "y.tab.c"
    break;

  case 39: /* equality_expr: equality_expr NOTEQUAL relational_expr  */
#line 391 "simple.y"
                                                 {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsetne %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
#line 1817 "y.tab.c"
    break;

  case 41: /* relational_expr: relational_expr LESS additive_expr  */
#line 402 "simple.y"
                                             {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsetl %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
#line 1829 "y.tab.c"
    break;

  case 42: /* relational_expr: relational_expr GREAT additive_expr  */
#line 409 "simple.y"
                                              {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsetg %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
#line 1841 "y.tab.c"
    break;

  case 43: /* relational_expr: relational_expr LESSEQUAL additive_expr  */
#line 416 "simple.y"
                                                  {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsetle %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
#line 1853 "y.tab.c"
    break;

  case 44: /* relational_expr: relational_expr GREATEQUAL additive_expr  */
#line 423 "simple.y"
                                                   {
		fprintf(fasm, "\tmovq $0, %%rax\n");
		fprintf(fasm, "\tcmpq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
		fprintf(fasm, "\tsetge %%al\n");
		fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
		top--;
	}
#line 1865 "y.tab.c"
    break;

  case 46: /* additive_expr: additive_expr PLUS multiplicative_expr  */
#line 434 "simple.y"
                                                 {
		fprintf(fasm,"\n\t# +\n");
		if (top < nregStk) {
			fprintf(fasm, "\taddq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
			top--;
		}
	}
#line 1877 "y.tab.c"
    break;

  case 47: /* additive_expr: additive_expr MINUS multiplicative_expr  */
#line 441 "simple.y"
                                                  {
		fprintf(fasm,"\n\t# -\n");
		if (top < nregStk) {
			fprintf(fasm, "\tsubq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
			top--;
		}
	}
#line 1889 "y.tab.c"
    break;

  case 49: /* multiplicative_expr: multiplicative_expr TIMES primary_expr  */
#line 452 "simple.y"
                                                 {
		fprintf(fasm, "\n\t# *\n");
		if (top < nregStk) {
			fprintf(fasm, "\timulq %%%s, %%%s\n", regStk[top - 1], regStk[top - 2]);
			top--;
		}
	}
#line 1901 "y.tab.c"
    break;

  case 50: /* multiplicative_expr: multiplicative_expr DIVIDE primary_expr  */
#line 459 "simple.y"
                                                  {
		fprintf(fasm, "\n\t# /\n");
		if (top < nregStk) {
			fprintf(fasm, "\tmovq %%%s, %%rax\n", regStk[top - 2]);
			fprintf(fasm, "\tcqto\n");
			fprintf(fasm, "\tidivq %%%s\n", regStk[top - 1]);
			fprintf(fasm, "\tmovq %%rax, %%%s\n", regStk[top - 2]);
			top--;
		}
	}
#line 1916 "y.tab.c"
    break;

  case 51: /* multiplicative_expr: multiplicative_expr PERCENT primary_expr  */
#line 469 "simple.y"
                                                   {
		fprintf(fasm, "\n\t# %%\n");
		if (top < nregStk) {
			fprintf(fasm, "\tmovq %%%s, %%rax\n", regStk[top - 2]);
			fprintf(fasm, "\tcqto\n");
			fprintf(fasm, "\tidivq %%%s\n", regStk[top - 1]);
			fprintf(fasm, "\tmovq %%rdx, %%%s\n", regStk[top - 2]);
			top--;
		}
	}
#line 1931 "y.tab.c"
    break;

  case 52: /* primary_expr: STRING_CONST  */
#line 482 "simple.y"
                     {
		string_table[nstrings] = (yyvsp[0].string_val);
		if (top < nregStk) {
			fprintf(fasm, "\tmovq $string%d, %%%s\n", nstrings, regStk[top]);
			top++;
		}
		else {
			fprintf(stdout, "Register overflow\n");
		}
		nstrings++;
	}
#line 1947 "y.tab.c"
    break;

  case 54: /* primary_expr: WORD  */
#line 494 "simple.y"
               {		
		int pos = -1;
		char *id = (yyvsp[0].string_val);
		for (int i = 0; i < nlocals; i++) {
			if (strcmp(local_vars_table[i], id) == 0) {
				pos = i;
				break;
			}
		}

		if (pos == -1) {
			fprintf(fasm, "\tmovq %s, %%%s\n", id, regStk[top]);
		}
		else {
			fprintf(fasm, "\tmovq -%d(%%rbp), %%%s\n", 8 * (pos + 1), regStk[top]);
		}
		top++;			
	}
#line 1970 "y.tab.c"
    break;

  case 55: /* primary_expr: WORD LBRACE expression RBRACE  */
#line 512 "simple.y"
                                        {
		if (ischar((yyvsp[-3].string_val))) {
			int pos = -1;
			char *variable = (yyvsp[-3].string_val);
			for (int i = 0; i < nlocals; i++) {
				if (strcmp(local_vars_table[i], variable) == 0) {
					pos = i;
					break;
				}
			}

			if (pos == -1) {
				fprintf(fasm, "\taddq %s, %%%s\n", (yyvsp[-3].string_val), regStk[top - 1]);
			}
			else {
				fprintf(fasm, "\taddq -%d(%%rbp), %%%s\n", 8 * (pos + 1), regStk[top - 1]);
			}
			fprintf(fasm, "\tmovq $0, %%%s\n", regStk[top]);
			fprintf(fasm, "\tmovb (%%%s), %%%s\n", regStk[top - 1], regByte[top]);
			fprintf(fasm, "\tmovq %%%s, %%%s\n", regStk[top], regStk[top - 1]);
		}
		else {
			int pos = -1;
			char *variable = (yyvsp[-3].string_val);
			for (int i = 0; i < nlocals; i++) {
				if (strcmp(local_vars_table[i], variable) == 0) {
					pos = i;
					break;
				}
			}

			if (pos == -1) {
				fprintf(fasm, "\timulq $8, %%%s\n", regStk[top - 1]);
				fprintf(fasm, "\taddq %s, %%%s\n", (yyvsp[-3].string_val), regStk[top - 1]);
				fprintf(fasm, "\tmovq (%%%s), %%%s\n", regStk[top - 1], regStk[top - 1]);
			}
			else {
				fprintf(fasm, "\timulq $8, %%%s\n", regStk[top - 1]);
				fprintf(fasm, "\taddq -%d(%%rbp), %%%s\n", 8 * (pos + 1), regStk[top - 1]);
				fprintf(fasm, "\tmovq (%%%s), %%%s\n", regStk[top - 1], regStk[top - 1]);
			}
		}
	}
#line 2018 "y.tab.c"
    break;

  case 56: /* primary_expr: AMPERSAND WORD  */
#line 555 "simple.y"
                         {
		int pos = -1;
		char *variable = (yyvsp[0].string_val);
		for (int i = 0; i < nlocals; i++) {
			if (strcmp(local_vars_table[i], variable) == 0) {
				pos = i;
				break;
			}
		}

		if (pos == -1) {
			fprintf(fasm, "\tmovq $%s, %%%s\n", (yyvsp[0].string_val), regStk[top]);
		}
		else {
			fprintf(fasm, "\tmovq %%rbp, %%%s\n", regStk[top]);
			fprintf(fasm, "\tsubq $%d, %%%s\n", 8 * (pos + 1), regStk[top]);
		}
		top++;
	}
#line 2042 "y.tab.c"
    break;

  case 57: /* primary_expr: INTEGER_CONST  */
#line 574 "simple.y"
                        {
		fprintf(fasm, "\n\t# push %s\n", (yyvsp[0].string_val));
		if (top < nregStk) {
			fprintf(fasm, "\tmovq $%s, %%%s\n", (yyvsp[0].string_val), regStk[top]);
			top++;
		}
		else {
			fprintf(stderr, "Line %d: register overflow\n", line_number);
			exit(1);
		}
	}
#line 2058 "y.tab.c"
    break;

  case 63: /* local_var_list: WORD  */
#line 601 "simple.y"
             {
		local_vars_table[nlocals] = (yyvsp[0].string_val);
		

		if (var_id == 1) {
			string_variable_table[string_variable_count] = (yyvsp[0].string_val);
			string_variable_count++;
		}

		nlocals++;
	}
#line 2074 "y.tab.c"
    break;

  case 64: /* local_var_list: local_var_list COMA WORD  */
#line 612 "simple.y"
                                   {
		local_vars_table[nlocals] = (yyvsp[0].string_val);
		nlocals++;
	}
#line 2083 "y.tab.c"
    break;

  case 66: /* statement: call SEMICOLON  */
#line 620 "simple.y"
                         {
		top = 0;
	}
#line 2091 "y.tab.c"
    break;

  case 69: /* $@5: %empty  */
#line 626 "simple.y"
                     {
		(yyvsp[-1].my_nlabel) = nlabelif;
		nlabelif++;
	}
#line 2100 "y.tab.c"
    break;

  case 70: /* $@6: %empty  */
#line 630 "simple.y"
                           {
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje else_%d\n", (yyvsp[-4].my_nlabel));
		top--;
	}
#line 2110 "y.tab.c"
    break;

  case 71: /* $@7: %empty  */
#line 635 "simple.y"
                  {
		fprintf(fasm, "\tjmp if_end_%d\n", (yyvsp[-6].my_nlabel));
		fprintf(fasm, "\nelse_%d:\n", (yyvsp[-6].my_nlabel));
	}
#line 2119 "y.tab.c"
    break;

  case 72: /* statement: IF LPARENT $@5 expression RPARENT $@6 statement $@7 else_optional  */
#line 639 "simple.y"
                      {
		fprintf(fasm, "\nif_end_%d:\n", (yyvsp[-8].my_nlabel));
	}
#line 2127 "y.tab.c"
    break;

  case 73: /* $@8: %empty  */
#line 643 "simple.y"
                        {
		(yyvsp[-1].my_nlabel) = nlabelwhile;
		nlabelwhile++;
		currentwhilecount++;
		currentloop = 0;
		fprintf(fasm, "\nwhile_start_%d:\n", (yyvsp[-1].my_nlabel));
	}
#line 2139 "y.tab.c"
    break;

  case 74: /* $@9: %empty  */
#line 650 "simple.y"
                           {
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje while_end_%d\n", (yyvsp[-4].my_nlabel));
		top--;
	}
#line 2149 "y.tab.c"
    break;

  case 75: /* statement: WHILE LPARENT $@8 expression RPARENT $@9 statement  */
#line 655 "simple.y"
                  {
		currentloop = 0;
		fprintf(fasm, "\tjmp while_start_%d\n", (yyvsp[-6].my_nlabel));
		fprintf(fasm, "\nwhile_end_%d:\n", (yyvsp[-6].my_nlabel));
	}
#line 2159 "y.tab.c"
    break;

  case 76: /* $@10: %empty  */
#line 661 "simple.y"
             {
		(yyvsp[0].my_nlabel) = nlabeldowhile;
		nlabeldowhile++;
		currentdowhilecount++;
		currentloop = 1;
		fprintf(fasm, "\ndo_%d:\n", (yyvsp[0].my_nlabel));
	}
#line 2171 "y.tab.c"
    break;

  case 77: /* $@11: %empty  */
#line 668 "simple.y"
                                           {
		currentloop = 1;
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje do_while_end_%d\n", (yyvsp[-5].my_nlabel));
		fprintf(fasm, "\tjmp do_%d\n", (yyvsp[-5].my_nlabel));
		top--;
	}
#line 2183 "y.tab.c"
    break;

  case 78: /* statement: DO $@10 statement WHILE LPARENT expression $@11 RPARENT SEMICOLON  */
#line 675 "simple.y"
                          {
		fprintf(fasm, "\ndo_while_end_%d:\n", (yyvsp[-8].my_nlabel));
	}
#line 2191 "y.tab.c"
    break;

  case 79: /* $@12: %empty  */
#line 679 "simple.y"
                                 {
		(yyvsp[-2].my_nlabel) = nlabelfor;
		nlabelfor++;
		currentforcount++;
		currentloop = 2;
		fprintf(fasm, "\nfor_condition_%d:\n", (yyvsp[-2].my_nlabel));
	}
#line 2203 "y.tab.c"
    break;

  case 80: /* $@13: %empty  */
#line 686 "simple.y"
                                       {
		fprintf(fasm, "\tcmpq $0, %%%s\n", regStk[top - 1]);
		fprintf(fasm, "\tje for_end_%d\n", (yyvsp[-6].my_nlabel));
		fprintf(fasm, "\tjmp for_statement_%d\n", (yyvsp[-6].my_nlabel));
		fprintf(fasm, "\nfor_increment_%d:\n", (yyvsp[-6].my_nlabel));
		top--;
	}
#line 2215 "y.tab.c"
    break;

  case 81: /* $@14: %empty  */
#line 693 "simple.y"
                           {
		fprintf(fasm, "\tjmp for_condition_%d\n", (yyvsp[-9].my_nlabel));
		fprintf(fasm, "\nfor_statement_%d:\n", (yyvsp[-9].my_nlabel));
	}
#line 2224 "y.tab.c"
    break;

  case 82: /* statement: FOR LPARENT assignment $@12 SEMICOLON expression SEMICOLON $@13 assignment RPARENT $@14 statement  */
#line 697 "simple.y"
                  {
		currentloop = 2;
		fprintf(fasm, "\tjmp for_increment_%d\n", (yyvsp[-11].my_nlabel));
		fprintf(fasm, "\nfor_end_%d:\n", (yyvsp[-11].my_nlabel));
	}
#line 2234 "y.tab.c"
    break;

  case 86: /* jump_statement: CONTINUE SEMICOLON  */
#line 712 "simple.y"
                           {
		if (currentloop == 0) {
			fprintf(fasm, "\tjmp while_start_%d\n", currentwhilecount);
		}
		else if (currentloop == 1) {
			fprintf(fasm, "\tjmp do_%d\n", currentdowhilecount);
		}
		else if (currentloop == 2) {
			fprintf(fasm, "\tjmp for_increment_%d\n", currentforcount);
		}
	}
#line 2250 "y.tab.c"
    break;

  case 87: /* jump_statement: BREAK SEMICOLON  */
#line 723 "simple.y"
                          {
		if (currentloop == 0) {
			fprintf(fasm, "\tjmp while_end_%d\n", currentwhilecount);
			currentwhilecount--;
		}
		else if (currentloop == 1) {
			fprintf(fasm, "\tjmp do_while_end_%d\n", currentdowhilecount);
			currentdowhilecount--;
		}
		else if (currentloop == 2) {
			fprintf(fasm, "\t\tjmp for_end_%d\n", currentforcount);
			currentforcount--;
		}
	}
#line 2269 "y.tab.c"
    break;

  case 88: /* jump_statement: RETURN expression SEMICOLON  */
#line 737 "simple.y"
                                      {
		fprintf(fasm, "\tmovq %%%s, %%rax\n", regStk[top - 1]);
		top = 0;

		fprintf(fasm, "\n\t# Restore registers\n");
		fprintf(fasm, "\tpopq %%r9\n");
		fprintf(fasm, "\tpopq %%r11\n");
		fprintf(fasm, "\tpopq %%r15\n");
		fprintf(fasm, "\tpopq %%r14\n");
		fprintf(fasm, "\tpopq %%r13\n");
		fprintf(fasm, "\tpopq %%r10\n");
		fprintf(fasm, "\tpopq %%rbx\n");
		fprintf(fasm, "\tpopq %%rbx\n");

		fprintf(fasm, "\taddq $%d, %%rsp\n", MAX_LOCALS_SPACE);

		fprintf(fasm, "\n\tleave\n");
		fprintf(fasm, "\tret\n\n");
	}
#line 2293 "y.tab.c"
    break;


#line 2297 "y.tab.c"

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

#line 758 "simple.y"


void yyset_in (FILE *  in_str );

int
yyerror(const char * s)
{
	fprintf(stderr,"%s:%d: %s\n", input_file, line_number, s);
}


int
main(int argc, char **argv)
{
	for (int i = 0; i < MAX_GLOBALS + MAX_LOCALS; i++) {
		string_variable_table[i] = "";
	}

	printf("-------------WARNING: You need to implement global and local vars ------\n");
	printf("------------- or you may get problems with top------\n");
	
	// Make sure there are enough arguments
	if (argc <2) {
		fprintf(stderr, "Usage: simple file\n");
		exit(1);
	}

	// Get file name
	input_file = strdup(argv[1]);

	int len = strlen(input_file);
	if (len < 2 || input_file[len-2]!='.' || input_file[len-1]!='c') {
		fprintf(stderr, "Error: file extension is not .c\n");
		exit(1);
	}

	// Get assembly file name
	asm_file = strdup(input_file);
	asm_file[len-1]='s';

	// Open file to compile
	FILE * f = fopen(input_file, "r");
	if (f==NULL) {
		fprintf(stderr, "Cannot open file %s\n", input_file);
		perror("fopen");
		exit(1);
	}

	// Create assembly file
	fasm = fopen(asm_file, "w");
	if (fasm==NULL) {
		fprintf(stderr, "Cannot open file %s\n", asm_file);
		perror("fopen");
		exit(1);
	}

	// Uncomment for debugging
	//fasm = stderr;

	// Create compilation file
	// 
	yyset_in(f);
	yyparse();

	// Generate string table
	int i;
	for (i = 0; i<nstrings; i++) {
		fprintf(fasm, "string%d:\n", i);
		fprintf(fasm, "\t.string %s\n\n", string_table[i]);
	}

	fclose(f);
	fclose(fasm);

	return 0;
}
