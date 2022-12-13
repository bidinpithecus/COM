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
#line 1 "tr-parte2.y"


#include "helpers.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);

enum types {INT_T = 1, FLOAT_T = 2, BOOL_T = 3};


#line 85 "tr-parte2.tab.c"

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

#include "tr-parte2.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INT = 3,                      /* T_INT  */
  YYSYMBOL_T_BOOL = 4,                     /* T_BOOL  */
  YYSYMBOL_T_TRUE = 5,                     /* T_TRUE  */
  YYSYMBOL_T_FALSE = 6,                    /* T_FALSE  */
  YYSYMBOL_T_INT_TYPE = 7,                 /* T_INT_TYPE  */
  YYSYMBOL_T_BOOL_TYPE = 8,                /* T_BOOL_TYPE  */
  YYSYMBOL_T_FLOAT_TYPE = 9,               /* T_FLOAT_TYPE  */
  YYSYMBOL_T_FLOAT = 10,                   /* T_FLOAT  */
  YYSYMBOL_T_SMALLER_EQUALS = 11,          /* T_SMALLER_EQUALS  */
  YYSYMBOL_T_SMALLER = 12,                 /* T_SMALLER  */
  YYSYMBOL_T_GREATER = 13,                 /* T_GREATER  */
  YYSYMBOL_T_GREATER_EQUALS = 14,          /* T_GREATER_EQUALS  */
  YYSYMBOL_T_EQUALS = 15,                  /* T_EQUALS  */
  YYSYMBOL_T_DIFFERENT = 16,               /* T_DIFFERENT  */
  YYSYMBOL_T_PRINT = 17,                   /* T_PRINT  */
  YYSYMBOL_T_SUM = 18,                     /* T_SUM  */
  YYSYMBOL_T_SUB = 19,                     /* T_SUB  */
  YYSYMBOL_T_MULT = 20,                    /* T_MULT  */
  YYSYMBOL_T_DIV = 21,                     /* T_DIV  */
  YYSYMBOL_T_AND = 22,                     /* T_AND  */
  YYSYMBOL_T_OR = 23,                      /* T_OR  */
  YYSYMBOL_T_ID = 24,                      /* T_ID  */
  YYSYMBOL_T_SEMICOLON = 25,               /* T_SEMICOLON  */
  YYSYMBOL_T_OPEN_BRACKETS = 26,           /* T_OPEN_BRACKETS  */
  YYSYMBOL_T_CLOSE_BRACKETS = 27,          /* T_CLOSE_BRACKETS  */
  YYSYMBOL_T_OPEN_CURLY_BRACKETS = 28,     /* T_OPEN_CURLY_BRACKETS  */
  YYSYMBOL_T_CLOSE_CURLY_BRACKETS = 29,    /* T_CLOSE_CURLY_BRACKETS  */
  YYSYMBOL_T_OPEN_PARENTHESIS = 30,        /* T_OPEN_PARENTHESIS  */
  YYSYMBOL_T_CLOSE_PARENTHESIS = 31,       /* T_CLOSE_PARENTHESIS  */
  YYSYMBOL_T_COLON = 32,                   /* T_COLON  */
  YYSYMBOL_T_IF = 33,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 34,                    /* T_ELSE  */
  YYSYMBOL_T_WHILE = 35,                   /* T_WHILE  */
  YYSYMBOL_T_FOR = 36,                     /* T_FOR  */
  YYSYMBOL_T_RETURN = 37,                  /* T_RETURN  */
  YYSYMBOL_T_COMMA = 38,                   /* T_COMMA  */
  YYSYMBOL_T_ATR = 39,                     /* T_ATR  */
  YYSYMBOL_T_FUNCTION = 40,                /* T_FUNCTION  */
  YYSYMBOL_T_PROCEDURE = 41,               /* T_PROCEDURE  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_programa = 43,                  /* programa  */
  YYSYMBOL_44_1 = 44,                      /* $@1  */
  YYSYMBOL_declaracao_lista = 45,          /* declaracao_lista  */
  YYSYMBOL_declaracao = 46,                /* declaracao  */
  YYSYMBOL_var_declaracao = 47,            /* var_declaracao  */
  YYSYMBOL_tipo_especificador_novo = 48,   /* tipo_especificador_novo  */
  YYSYMBOL_tipo_especificador = 49,        /* tipo_especificador  */
  YYSYMBOL_fun_declaracao = 50,            /* fun_declaracao  */
  YYSYMBOL_fun = 51,                       /* fun  */
  YYSYMBOL_procedure = 52,                 /* procedure  */
  YYSYMBOL_params = 53,                    /* params  */
  YYSYMBOL_param_lista = 54,               /* param_lista  */
  YYSYMBOL_param = 55,                     /* param  */
  YYSYMBOL_composto_decl = 56,             /* composto_decl  */
  YYSYMBOL_composto_decl_proc = 57,        /* composto_decl_proc  */
  YYSYMBOL_local_declaracoes = 58,         /* local_declaracoes  */
  YYSYMBOL_statement_lista = 59,           /* statement_lista  */
  YYSYMBOL_statement = 60,                 /* statement  */
  YYSYMBOL_statement_lista_proc = 61,      /* statement_lista_proc  */
  YYSYMBOL_statement_proc = 62,            /* statement_proc  */
  YYSYMBOL_expressao_decl = 63,            /* expressao_decl  */
  YYSYMBOL_selecao_decl = 64,              /* selecao_decl  */
  YYSYMBOL_65_2 = 65,                      /* $@2  */
  YYSYMBOL_selecao = 66,                   /* selecao  */
  YYSYMBOL_67_3 = 67,                      /* $@3  */
  YYSYMBOL_68_4 = 68,                      /* $@4  */
  YYSYMBOL_iteracao_decl = 69,             /* iteracao_decl  */
  YYSYMBOL_iteracao_tipo = 70,             /* iteracao_tipo  */
  YYSYMBOL_while = 71,                     /* while  */
  YYSYMBOL_72_5 = 72,                      /* $@5  */
  YYSYMBOL_73_6 = 73,                      /* $@6  */
  YYSYMBOL_for = 74,                       /* for  */
  YYSYMBOL_75_7 = 75,                      /* $@7  */
  YYSYMBOL_76_8 = 76,                      /* $@8  */
  YYSYMBOL_77_9 = 77,                      /* $@9  */
  YYSYMBOL_atribuicao = 78,                /* atribuicao  */
  YYSYMBOL_retorno_decl = 79,              /* retorno_decl  */
  YYSYMBOL_print_decl = 80,                /* print_decl  */
  YYSYMBOL_expressao = 81,                 /* expressao  */
  YYSYMBOL_var = 82,                       /* var  */
  YYSYMBOL_simples_expressao = 83,         /* simples_expressao  */
  YYSYMBOL_relacional = 84,                /* relacional  */
  YYSYMBOL_soma_expressao = 85,            /* soma_expressao  */
  YYSYMBOL_soma = 86,                      /* soma  */
  YYSYMBOL_termo = 87,                     /* termo  */
  YYSYMBOL_mult = 88,                      /* mult  */
  YYSYMBOL_fator = 89,                     /* fator  */
  YYSYMBOL_ativacao = 90,                  /* ativacao  */
  YYSYMBOL_args = 91,                      /* args  */
  YYSYMBOL_arg_lista = 92                  /* arg_lista  */
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    60,    63,    64,    67,    68,    71,    79,
      82,    88,    89,    90,    93,    94,    97,   100,   103,   104,
     107,   108,   111,   112,   115,   118,   121,   122,   125,   126,
     129,   130,   131,   132,   133,   134,   137,   138,   141,   142,
     143,   144,   145,   149,   150,   153,   154,   154,   159,   159,
     159,   164,   167,   168,   171,   171,   171,   174,   174,   174,
     174,   177,   187,   188,   191,   200,   209,   212,   213,   216,
     219,   222,   223,   224,   225,   226,   227,   230,   238,   241,
     242,   243,   246,   254,   257,   258,   259,   262,   263,   266,
     267,   268,   271,   282,   283,   286,   287
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
  "\"end of file\"", "error", "\"invalid token\"", "T_INT", "T_BOOL",
  "T_TRUE", "T_FALSE", "T_INT_TYPE", "T_BOOL_TYPE", "T_FLOAT_TYPE",
  "T_FLOAT", "T_SMALLER_EQUALS", "T_SMALLER", "T_GREATER",
  "T_GREATER_EQUALS", "T_EQUALS", "T_DIFFERENT", "T_PRINT", "T_SUM",
  "T_SUB", "T_MULT", "T_DIV", "T_AND", "T_OR", "T_ID", "T_SEMICOLON",
  "T_OPEN_BRACKETS", "T_CLOSE_BRACKETS", "T_OPEN_CURLY_BRACKETS",
  "T_CLOSE_CURLY_BRACKETS", "T_OPEN_PARENTHESIS", "T_CLOSE_PARENTHESIS",
  "T_COLON", "T_IF", "T_ELSE", "T_WHILE", "T_FOR", "T_RETURN", "T_COMMA",
  "T_ATR", "T_FUNCTION", "T_PROCEDURE", "$accept", "programa", "$@1",
  "declaracao_lista", "declaracao", "var_declaracao",
  "tipo_especificador_novo", "tipo_especificador", "fun_declaracao", "fun",
  "procedure", "params", "param_lista", "param", "composto_decl",
  "composto_decl_proc", "local_declaracoes", "statement_lista",
  "statement", "statement_lista_proc", "statement_proc", "expressao_decl",
  "selecao_decl", "$@2", "selecao", "$@3", "$@4", "iteracao_decl",
  "iteracao_tipo", "while", "$@5", "$@6", "for", "$@7", "$@8", "$@9",
  "atribuicao", "retorno_decl", "print_decl", "expressao", "var",
  "simples_expressao", "relacional", "soma_expressao", "soma", "termo",
  "mult", "fator", "ativacao", "args", "arg_lista", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-127)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-43)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
    -127,    17,    -2,  -127,  -127,  -127,  -127,   -22,    10,    -2,
    -127,  -127,    18,    22,  -127,  -127,  -127,    24,    25,  -127,
    -127,    62,  -127,    44,    44,    46,    38,    48,    36,  -127,
      50,    63,    78,    57,    44,    64,  -127,    65,    78,  -127,
    -127,  -127,    73,    75,     2,  -127,  -127,  -127,  -127,    47,
      76,    78,  -127,  -127,    74,   -10,  -127,    39,    80,  -127,
      81,    11,    84,  -127,  -127,    85,    86,    82,    88,  -127,
    -127,  -127,  -127,    89,    94,    90,  -127,    83,    87,  -127,
    -127,  -127,    23,    39,    39,    39,    91,    39,    93,  -127,
    -127,    95,  -127,  -127,    39,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,    39,    39,  -127,  -127,  -127,    39,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,    96,    97,  -127,
      99,    98,  -127,  -127,    39,   101,  -127,    47,  -127,    43,
      87,  -127,   103,  -127,  -127,    39,   100,  -127,   106,   108,
     102,  -127,  -127,  -127,  -127,   104,  -127,    39,    47,    47,
      39,  -127,  -127,  -127,  -127,   109,   101,   107,    47,  -127
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    11,    13,    12,     0,     0,     3,
       5,     6,     0,     0,     7,    14,    15,     0,     0,     4,
       8,     0,    10,    18,    18,     0,     0,     0,    19,    21,
       0,     0,     0,     0,     0,     0,     9,    22,     0,    20,
      27,    17,     0,     0,    29,    23,    27,    16,    26,     0,
       0,    29,    90,    91,     0,    67,    44,     0,     0,    54,
       0,     0,    31,    28,    36,    30,    32,    45,    33,    51,
      52,    53,    34,    35,     0,    88,    66,    70,    78,    83,
      89,    25,     0,     0,     0,    94,     0,     0,     0,    57,
      62,     0,    46,    43,     0,    71,    72,    73,    74,    75,
      76,    79,    80,    81,     0,     0,    84,    85,    86,     0,
      24,    31,    30,    32,    33,    35,    88,     0,     0,    96,
       0,    93,    87,    48,     0,     0,    63,     0,    65,    69,
      77,    82,     0,    68,    92,     0,     0,    55,    67,     0,
       0,    47,    64,    95,    49,     0,    58,     0,     0,     0,
       0,    61,    50,    56,    59,     0,     0,     0,     0,    60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -127,  -127,  -127,  -127,   112,   -36,  -127,   -20,  -127,  -127,
    -127,   113,  -127,    92,   -30,  -127,    66,   105,  -126,  -127,
    -127,   110,   111,  -127,  -127,  -127,  -127,   114,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,   -17,  -127,   115,   -57,
     -80,    59,  -127,    40,  -127,    35,  -127,    34,  -127,  -127,
    -127
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     9,    10,    11,    12,    13,    14,    15,
      16,    27,    28,    29,   111,    41,    44,    49,    63,    50,
      64,   112,   113,   127,    67,   136,   148,   114,    69,    70,
      88,   145,    71,   125,   150,   155,   139,    72,   115,    74,
      75,    76,   104,    77,   105,    78,   109,    79,    80,   120,
     121
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,   141,    17,   116,    91,     4,     5,     6,    48,     4,
       5,     6,    37,    47,    52,    48,    84,     3,    43,    62,
      85,    53,   152,   153,   116,   116,    52,   118,   119,   116,
     123,   -37,   159,    53,    18,    55,    90,   128,     7,     8,
      54,    57,    52,    20,    21,   140,    22,    55,    56,    53,
      52,    46,   110,    57,    23,    24,    58,    53,    59,    60,
      61,   101,   102,    55,    54,    25,   103,   137,    26,    57,
      32,    55,    56,    31,    34,    46,   140,    57,   143,    33,
      58,    35,    59,    60,    61,     4,     5,     6,    36,    38,
     151,    42,    40,   154,    95,    96,    97,    98,    99,   100,
      45,   101,   102,    46,    83,    81,   103,   106,   107,   108,
      87,    89,    51,   -39,   -38,   -40,    92,   -41,   -42,    93,
     126,    19,   122,   124,   133,   138,    39,   132,   142,    94,
     134,   144,    84,   146,   156,   149,   135,    30,   158,   157,
     130,   147,   117,   131,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,    65,
      66,     0,     0,    68,    73
};

static const yytype_int16 yycheck[] =
{
      57,   127,    24,    83,    61,     7,     8,     9,    44,     7,
       8,     9,    32,    43,     3,    51,    26,     0,    38,    49,
      30,    10,   148,   149,   104,   105,     3,    84,    85,   109,
      87,    29,   158,    10,    24,    24,    25,    94,    40,    41,
      17,    30,     3,    25,    26,   125,    24,    24,    25,    10,
       3,    28,    29,    30,    30,    30,    33,    10,    35,    36,
      37,    18,    19,    24,    17,     3,    23,   124,    24,    30,
      32,    24,    25,    27,    38,    28,   156,    30,   135,    31,
      33,    31,    35,    36,    37,     7,     8,     9,    25,    32,
     147,    26,    28,   150,    11,    12,    13,    14,    15,    16,
      27,    18,    19,    28,    30,    29,    23,    20,    21,    22,
      30,    30,    46,    29,    29,    29,    34,    29,    29,    25,
      25,     9,    31,    30,    27,    24,    34,    31,    25,    39,
      31,    31,    26,    25,    25,    31,    38,    24,    31,   156,
     105,    39,    83,   109,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    49,
      49,    -1,    -1,    49,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    43,    44,     0,     7,     8,     9,    40,    41,    45,
      46,    47,    48,    49,    50,    51,    52,    24,    24,    46,
      25,    26,    24,    30,    30,     3,    24,    53,    54,    55,
      53,    27,    32,    31,    38,    31,    25,    49,    32,    55,
      28,    57,    26,    49,    58,    27,    28,    56,    47,    59,
      61,    58,     3,    10,    17,    24,    25,    30,    33,    35,
      36,    37,    56,    60,    62,    63,    64,    66,    69,    70,
      71,    74,    79,    80,    81,    82,    83,    85,    87,    89,
      90,    29,    59,    30,    26,    30,    81,    30,    72,    30,
      25,    81,    34,    25,    39,    11,    12,    13,    14,    15,
      16,    18,    19,    23,    84,    86,    20,    21,    22,    88,
      29,    56,    63,    64,    69,    80,    82,    83,    81,    81,
      91,    92,    31,    81,    30,    75,    25,    65,    81,    85,
      87,    89,    31,    27,    31,    38,    67,    81,    24,    78,
      82,    60,    25,    81,    31,    73,    25,    39,    68,    31,
      76,    81,    60,    60,    81,    77,    25,    78,    31,    60
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    44,    43,    45,    45,    46,    46,    47,    47,
      48,    49,    49,    49,    50,    50,    51,    52,    53,    53,
      54,    54,    55,    55,    56,    57,    58,    58,    59,    59,
      60,    60,    60,    60,    60,    60,    61,    61,    62,    62,
      62,    62,    62,    63,    63,    64,    65,    64,    67,    68,
      66,    69,    70,    70,    72,    73,    71,    75,    76,    77,
      74,    78,    79,    79,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    85,    85,    86,
      86,    86,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    91,    91,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     2,     5,
       2,     1,     1,     1,     1,     1,     8,     6,     0,     1,
       3,     1,     3,     5,     4,     4,     2,     0,     2,     0,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     1,
       1,     1,     1,     2,     1,     1,     0,     4,     0,     0,
       7,     1,     1,     1,     0,     0,     7,     0,     0,     0,
      12,     3,     2,     3,     5,     3,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     1,     0,     3,     1
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
  case 2: /* $@1: %empty  */
#line 60 "tr-parte2.y"
                { initiateProgram(); }
#line 1285 "tr-parte2.tab.c"
    break;

  case 3: /* programa: $@1 declaracao_lista  */
#line 60 "tr-parte2.y"
                                                        { finishProgram(); }
#line 1291 "tr-parte2.tab.c"
    break;

  case 8: /* var_declaracao: tipo_especificador_novo T_SEMICOLON  */
#line 71 "tr-parte2.y"
                                                            {
		(yyvsp[-1].typeAndId).id[strlen((yyvsp[-1].typeAndId).id)] = '\0';
		if ((yyvsp[-1].typeAndId).type == INT_T || (yyvsp[-1].typeAndId).type == BOOL_T) {
			initializeVariableOnCode(table, (yyvsp[-1].typeAndId).id, "i");
		} else if ((yyvsp[-1].typeAndId).type == FLOAT_T) {
			initializeVariableOnCode(table, (yyvsp[-1].typeAndId).id, "f");
		}
	}
#line 1304 "tr-parte2.tab.c"
    break;

  case 10: /* tipo_especificador_novo: tipo_especificador T_ID  */
#line 82 "tr-parte2.y"
                                                 {
		(yyval.typeAndId).type = (yyvsp[-1].ival);
		(yyval.typeAndId).id = strdup((yyvsp[0].sval));
	}
#line 1313 "tr-parte2.tab.c"
    break;

  case 11: /* tipo_especificador: T_INT_TYPE  */
#line 88 "tr-parte2.y"
                                   { (yyval.ival) = INT_T; }
#line 1319 "tr-parte2.tab.c"
    break;

  case 12: /* tipo_especificador: T_FLOAT_TYPE  */
#line 89 "tr-parte2.y"
                                                     { (yyval.ival) = FLOAT_T; }
#line 1325 "tr-parte2.tab.c"
    break;

  case 13: /* tipo_especificador: T_BOOL_TYPE  */
#line 90 "tr-parte2.y"
                                                    { (yyval.ival) = BOOL_T; }
#line 1331 "tr-parte2.tab.c"
    break;

  case 16: /* fun: T_FUNCTION T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS T_COLON tipo_especificador composto_decl  */
#line 97 "tr-parte2.y"
                                                                                                            { changeTokenOnRow(table, (yyvsp[-6].sval), "function"); }
#line 1337 "tr-parte2.tab.c"
    break;

  case 17: /* procedure: T_PROCEDURE T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS composto_decl_proc  */
#line 100 "tr-parte2.y"
                                                                                             { changeTokenOnRow(table, (yyvsp[-4].sval), "procedure"); }
#line 1343 "tr-parte2.tab.c"
    break;

  case 45: /* selecao_decl: selecao  */
#line 153 "tr-parte2.y"
                        { writeFullLabelOnCode((yyvsp[0].ival));}
#line 1349 "tr-parte2.tab.c"
    break;

  case 46: /* $@2: %empty  */
#line 154 "tr-parte2.y"
                                               { 
		writeGoToOnCode((yyvsp[0].ival)); writeLabel((yyvsp[0].ival)); writeFullLabelOnCode((yyvsp[-1].ival));					
	}
#line 1357 "tr-parte2.tab.c"
    break;

  case 47: /* selecao_decl: selecao T_ELSE $@2 statement  */
#line 156 "tr-parte2.y"
                    { writeFullLabelOnCode((yyvsp[-2].ival)); }
#line 1363 "tr-parte2.tab.c"
    break;

  case 48: /* $@3: %empty  */
#line 159 "tr-parte2.y"
                                           { writeLabel((yyvsp[-2].ival)); }
#line 1369 "tr-parte2.tab.c"
    break;

  case 49: /* $@4: %empty  */
#line 159 "tr-parte2.y"
                                                                                   { 
		writeGoToOnCode((yyvsp[-2].symboltypeval)); writeLabel((yyvsp[-2].symboltypeval)); writeFullLabelOnCode((yyvsp[-4].ival));
	}
#line 1377 "tr-parte2.tab.c"
    break;

  case 50: /* selecao: T_IF T_OPEN_PARENTHESIS expressao $@3 T_CLOSE_PARENTHESIS $@4 statement  */
#line 161 "tr-parte2.y"
                    { (yyval.ival) = (yyvsp[-4].symboltypeval); }
#line 1383 "tr-parte2.tab.c"
    break;

  case 54: /* $@5: %empty  */
#line 171 "tr-parte2.y"
               { writeFullLabelOnCode((yyvsp[0].ival)); }
#line 1389 "tr-parte2.tab.c"
    break;

  case 55: /* $@6: %empty  */
#line 171 "tr-parte2.y"
                                                                          { writeLabel(labelNum); writeGoToOnCode(labelNum); writeLabel(++labelNum); writeFullLabelOnCode(labelNum - 1); }
#line 1395 "tr-parte2.tab.c"
    break;

  case 56: /* while: T_WHILE $@5 T_OPEN_PARENTHESIS expressao $@6 T_CLOSE_PARENTHESIS statement  */
#line 171 "tr-parte2.y"
                                                                                                                                                                                                                         { writeGoToOnCode((yyvsp[-6].ival)); writeLabel((yyvsp[-6].ival)); writeFullLabelOnCode(labelNum); }
#line 1401 "tr-parte2.tab.c"
    break;

  case 57: /* $@7: %empty  */
#line 174 "tr-parte2.y"
                              { writeFullLabelOnCode((yyvsp[-1].ival)); }
#line 1407 "tr-parte2.tab.c"
    break;

  case 58: /* $@8: %empty  */
#line 174 "tr-parte2.y"
                                                                                   { writeFullLabelOnCode(++labelNum); }
#line 1413 "tr-parte2.tab.c"
    break;

  case 59: /* $@9: %empty  */
#line 174 "tr-parte2.y"
                                                                                                                                   { writeLabel(labelNum); writeGoToOnCode(labelNum); writeLabel(++labelNum); writeFullLabelOnCode(labelNum - 1); }
#line 1419 "tr-parte2.tab.c"
    break;

  case 60: /* for: T_FOR T_OPEN_PARENTHESIS $@7 atribuicao T_SEMICOLON $@8 expressao $@9 T_SEMICOLON atribuicao T_CLOSE_PARENTHESIS statement  */
#line 174 "tr-parte2.y"
                                                                                                                                                                                                                                                                                                         { writeGoToOnCode((yyvsp[-11].ival) + 1); writeLabel((yyvsp[-11].ival) + 1); writeFullLabelOnCode(labelNum); }
#line 1425 "tr-parte2.tab.c"
    break;

  case 61: /* atribuicao: var T_ATR expressao  */
#line 177 "tr-parte2.y"
                                {
		int type = getVarType(table, (yyvsp[-2].sval));
		if (type == INT_T) {
			pushIntToVariableOnCode(table, (yyvsp[-2].sval));
		} else if (type == FLOAT_T) {
			pushFloatToVariableOnCode(table, (yyvsp[-2].sval));
		}
		(yyval.symboltypeval) = (yyvsp[0].symboltypeval);
	}
#line 1439 "tr-parte2.tab.c"
    break;

  case 62: /* retorno_decl: T_RETURN T_SEMICOLON  */
#line 187 "tr-parte2.y"
                                     {}
#line 1445 "tr-parte2.tab.c"
    break;

  case 63: /* retorno_decl: T_RETURN expressao T_SEMICOLON  */
#line 188 "tr-parte2.y"
                                                               { (yyval.symboltypeval) = (yyvsp[-1].symboltypeval); }
#line 1451 "tr-parte2.tab.c"
    break;

  case 64: /* print_decl: T_PRINT T_OPEN_PARENTHESIS simples_expressao T_CLOSE_PARENTHESIS T_SEMICOLON  */
#line 191 "tr-parte2.y"
                                                                                         {
			if (ceil((yyvsp[-2].symboltypeval)) == (yyvsp[-2].symboltypeval)) {
				writePrintOnCode('i');
			} else {
				writePrintOnCode('f');
			}
	}
#line 1463 "tr-parte2.tab.c"
    break;

  case 65: /* expressao: var T_ATR expressao  */
#line 200 "tr-parte2.y"
                                    {
		int type = getVarType(table, (yyvsp[-2].sval));
		if (type == INT_T) {
			pushIntToVariableOnCode(table, (yyvsp[-2].sval));
		} else if (type == FLOAT_T) {
			pushFloatToVariableOnCode(table, (yyvsp[-2].sval));
		}
		(yyval.symboltypeval) = (yyvsp[0].symboltypeval);
	}
#line 1477 "tr-parte2.tab.c"
    break;

  case 66: /* expressao: simples_expressao  */
#line 209 "tr-parte2.y"
                                          { (yyval.symboltypeval) = (yyvsp[0].symboltypeval); }
#line 1483 "tr-parte2.tab.c"
    break;

  case 67: /* var: T_ID  */
#line 212 "tr-parte2.y"
             { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1489 "tr-parte2.tab.c"
    break;

  case 69: /* simples_expressao: soma_expressao relacional soma_expressao  */
#line 216 "tr-parte2.y"
                                                                 {
		(yyval.symboltypeval) = writeRelationalOpOnCode((yyvsp[-1].sval), "i");
	}
#line 1497 "tr-parte2.tab.c"
    break;

  case 70: /* simples_expressao: soma_expressao  */
#line 219 "tr-parte2.y"
                                                      { (yyval.symboltypeval) = (yyvsp[0].symboltypeval); }
#line 1503 "tr-parte2.tab.c"
    break;

  case 71: /* relacional: T_SMALLER_EQUALS  */
#line 222 "tr-parte2.y"
                                         { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1509 "tr-parte2.tab.c"
    break;

  case 72: /* relacional: T_SMALLER  */
#line 223 "tr-parte2.y"
                                          { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1515 "tr-parte2.tab.c"
    break;

  case 73: /* relacional: T_GREATER  */
#line 224 "tr-parte2.y"
                                          { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1521 "tr-parte2.tab.c"
    break;

  case 74: /* relacional: T_GREATER_EQUALS  */
#line 225 "tr-parte2.y"
                                                 { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1527 "tr-parte2.tab.c"
    break;

  case 75: /* relacional: T_EQUALS  */
#line 226 "tr-parte2.y"
                                         { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1533 "tr-parte2.tab.c"
    break;

  case 76: /* relacional: T_DIFFERENT  */
#line 227 "tr-parte2.y"
                                            { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1539 "tr-parte2.tab.c"
    break;

  case 77: /* soma_expressao: soma_expressao soma termo  */
#line 230 "tr-parte2.y"
                                                  {
		if (ceil((yyvsp[-2].symboltypeval)) == (yyvsp[-2].symboltypeval) && ceil((yyvsp[0].symboltypeval)) == (yyvsp[0].symboltypeval)) {
			writeOpOnCode((yyvsp[-1].sval)[0], 'i');
		} else {
			writeOpOnCode((yyvsp[-1].sval)[0], 'f');
		}
		(yyval.symboltypeval) = (yyvsp[-2].symboltypeval);
	}
#line 1552 "tr-parte2.tab.c"
    break;

  case 78: /* soma_expressao: termo  */
#line 238 "tr-parte2.y"
                      { (yyval.symboltypeval) = (yyvsp[0].symboltypeval); }
#line 1558 "tr-parte2.tab.c"
    break;

  case 79: /* soma: T_SUM  */
#line 241 "tr-parte2.y"
              { (yyval.sval) = (yyvsp[0].sval); }
#line 1564 "tr-parte2.tab.c"
    break;

  case 80: /* soma: T_SUB  */
#line 242 "tr-parte2.y"
                      { (yyval.sval) = (yyvsp[0].sval); }
#line 1570 "tr-parte2.tab.c"
    break;

  case 81: /* soma: T_OR  */
#line 243 "tr-parte2.y"
                     { (yyval.sval) = (yyvsp[0].sval); }
#line 1576 "tr-parte2.tab.c"
    break;

  case 82: /* termo: termo mult fator  */
#line 246 "tr-parte2.y"
                                 {
		if (ceil((yyvsp[-2].symboltypeval)) == (yyvsp[-2].symboltypeval) && ceil((yyvsp[0].symboltypeval)) == (yyvsp[0].symboltypeval)) {
			writeOpOnCode((yyvsp[-1].sval)[0], 'i');
		} else {
			writeOpOnCode((yyvsp[-1].sval)[0], 'f');
		}
		(yyval.symboltypeval) = (yyvsp[-2].symboltypeval);
	}
#line 1589 "tr-parte2.tab.c"
    break;

  case 83: /* termo: fator  */
#line 254 "tr-parte2.y"
                              { (yyval.symboltypeval) = (yyvsp[0].symboltypeval); }
#line 1595 "tr-parte2.tab.c"
    break;

  case 84: /* mult: T_MULT  */
#line 257 "tr-parte2.y"
                       { (yyval.sval) = (yyvsp[0].sval); }
#line 1601 "tr-parte2.tab.c"
    break;

  case 85: /* mult: T_DIV  */
#line 258 "tr-parte2.y"
                              { (yyval.sval) = (yyvsp[0].sval); }
#line 1607 "tr-parte2.tab.c"
    break;

  case 86: /* mult: T_AND  */
#line 259 "tr-parte2.y"
                              { (yyval.sval) = (yyvsp[0].sval); }
#line 1613 "tr-parte2.tab.c"
    break;

  case 87: /* fator: T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS  */
#line 262 "tr-parte2.y"
                                                                 { (yyval.symboltypeval) = (yyvsp[-1].symboltypeval); }
#line 1619 "tr-parte2.tab.c"
    break;

  case 88: /* fator: var  */
#line 263 "tr-parte2.y"
                            {
		loadVariable(table, (yyvsp[0].sval));
	}
#line 1627 "tr-parte2.tab.c"
    break;

  case 90: /* fator: T_INT  */
#line 267 "tr-parte2.y"
                               { writeIntOnCode((yyvsp[0].ival)); (yyval.symboltypeval) = (yyvsp[0].ival); }
#line 1633 "tr-parte2.tab.c"
    break;

  case 91: /* fator: T_FLOAT  */
#line 268 "tr-parte2.y"
                                 { writeFloatOnCode((yyvsp[0].fval)); (yyval.symboltypeval) = (yyvsp[0].fval); }
#line 1639 "tr-parte2.tab.c"
    break;

  case 92: /* ativacao: T_ID T_OPEN_PARENTHESIS args T_CLOSE_PARENTHESIS  */
#line 271 "tr-parte2.y"
                                                                 { 
		Row* token = getToken(table, (yyvsp[-3].sval));
		if (strcmp(token->token, "function")) {
			(yyval.sval) = (yyvsp[-1].sval);
		} else if (strcmp(token->token, "procedure") == 0) {
			yyerror("Trying to atribute procedure value to a variable");
			return 0;
		}
	}
#line 1653 "tr-parte2.tab.c"
    break;

  case 93: /* args: arg_lista  */
#line 282 "tr-parte2.y"
                          { (yyval.sval) = (yyvsp[0].sval); }
#line 1659 "tr-parte2.tab.c"
    break;


#line 1663 "tr-parte2.tab.c"

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

#line 290 "tr-parte2.y"


int main(int argc, char **argv) {
    ++argv, --argc;
	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}

	do {
		yyparse();

	} while(!feof(yyin));
	
	return 0;
}

void yyerror (char const *s) {
   fprintf (stderr, "Syntax Error: (%s)\n", s);
}
