
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "bison/parser.y"


/* Typedefs simplificados para evitar hacer un lexer hack, usa letra 't' */

#include <stdio.h>
#include <stringso.h>
#include <list.h>
#include "symtable.h"
#include "operationCheck.h"

int yylex(void);
int yyerror(const char *s);
extern FILE* yyin;
extern int yylineno;
symtable* st;



/* Line 189 of yacc.c  */
#line 92 "src/parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AUTO = 258,
     BREAK = 259,
     CASE = 260,
     CHAR = 261,
     CONST = 262,
     CONTINUE = 263,
     DEFAULT = 264,
     DO = 265,
     DOUBLE = 266,
     ELSE = 267,
     ENUM = 268,
     EXTERN = 269,
     FLOAT = 270,
     FOR = 271,
     GOTO = 272,
     IF = 273,
     INLINE = 274,
     INT = 275,
     LONG = 276,
     REGISTER = 277,
     RESTRICT = 278,
     RETURN = 279,
     SHORT = 280,
     SIGNED = 281,
     SIZEOF = 282,
     STATIC = 283,
     STRUCT = 284,
     SWITCH = 285,
     TYPEDEF = 286,
     UNION = 287,
     UNSIGNED = 288,
     VOID = 289,
     VOLATILE = 290,
     WHILE = 291,
     BOOL = 292,
     COMPLEX = 293,
     FLECHA = 294,
     MASMAS = 295,
     MENOSMENOS = 296,
     SHIFT_LEFT = 297,
     SHIFT_RIGHT = 298,
     MENOR_IGUAL = 299,
     MAYOR_IGUAL = 300,
     IGUALIGUAL = 301,
     DIFERENTE = 302,
     AND = 303,
     OR = 304,
     VARIARG = 305,
     ASIGN_MULT = 306,
     ASIGN_DIV = 307,
     ASIGN_MOD = 308,
     ASIGN_SUM = 309,
     ASIGN_RESTA = 310,
     ASIGN_SHIFT_LEFT = 311,
     ASIGN_SHIFT_RIGHT = 312,
     ASIGN_BITWISE_AND = 313,
     ASIGN_BITWISE_XOR = 314,
     ASIGN_BITWISE_OR = 315,
     INT_CONST = 316,
     CHAR_CONST = 317,
     REAL_CONST = 318,
     STRING_LITERAL = 319,
     IDENTIFIER = 320,
     IFX = 321
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 23 "bison/parser.y"

    char* strval;
    typeInfo* type;
    typeName typeName;
    symbol* sym;
    int intval;
    t_list* list;



/* Line 214 of yacc.c  */
#line 205 "src/parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 217 "src/parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1715

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  249
/* YYNRULES -- Number of states.  */
#define YYNSTATES  421

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,     2,     2,    82,    75,     2,
      67,    68,    76,    77,    74,    78,    71,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,    90,
      83,    89,    84,    87,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    85,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    91,     2,     2,     2,
       2,     2,     2,    72,    86,    73,    79,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    25,    27,    32,    37,    41,    45,    48,    51,
      58,    66,    68,    69,    71,    75,    77,    80,    83,    86,
      89,    92,    95,    98,   101,   104,   109,   111,   116,   118,
     122,   126,   130,   132,   136,   140,   142,   146,   150,   152,
     156,   160,   164,   168,   170,   174,   178,   180,   184,   186,
     190,   192,   196,   198,   202,   204,   208,   210,   216,   218,
     222,   226,   230,   234,   238,   242,   246,   250,   254,   258,
     262,   264,   268,   270,   274,   277,   280,   283,   286,   289,
     290,   292,   293,   295,   297,   301,   303,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   345,   351,   356,   359,
     361,   363,   365,   368,   372,   375,   378,   379,   381,   383,
     387,   389,   393,   394,   396,   402,   409,   412,   413,   415,
     417,   421,   423,   427,   429,   431,   433,   435,   438,   440,
     442,   446,   452,   459,   466,   472,   477,   482,   483,   485,
     486,   488,   489,   491,   494,   498,   500,   503,   505,   509,
     511,   515,   518,   521,   522,   524,   526,   530,   532,   535,
     537,   540,   542,   546,   550,   554,   558,   561,   566,   571,
     576,   580,   582,   584,   588,   593,   596,   601,   602,   604,
     607,   609,   612,   616,   619,   621,   623,   625,   627,   629,
     631,   634,   638,   643,   647,   651,   652,   654,   656,   659,
     661,   663,   666,   667,   669,   672,   678,   683,   690,   696,
     704,   707,   716,   724,   728,   731,   734,   738,   740,   743,
     745,   747,   748,   754,   757,   760,   763,   764,   766,   768
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     175,     0,    -1,    65,    -1,    62,    -1,    61,    -1,    63,
      -1,    64,    -1,    93,    -1,    93,    -1,    94,    -1,    95,
      -1,    67,   115,    68,    -1,    97,    -1,    98,    69,   115,
      70,    -1,    98,    67,    99,    68,    -1,    98,    71,    93,
      -1,    98,    39,    93,    -1,    98,    40,    -1,    98,    41,
      -1,    67,   152,    68,    72,   157,    73,    -1,    67,   152,
      68,    72,   157,    74,    73,    -1,   100,    -1,    -1,   114,
      -1,   100,    74,   114,    -1,    98,    -1,    40,   101,    -1,
      41,   101,    -1,    75,   102,    -1,    76,   102,    -1,    77,
     102,    -1,    78,   102,    -1,    79,   102,    -1,    80,   102,
      -1,    27,   101,    -1,    27,    67,   152,    68,    -1,   101,
      -1,    67,   152,    68,   102,    -1,   102,    -1,   103,    76,
     102,    -1,   103,    81,   102,    -1,   103,    82,   102,    -1,
     103,    -1,   104,    77,   103,    -1,   104,    78,   103,    -1,
     104,    -1,   105,    42,   104,    -1,   105,    43,   104,    -1,
     105,    -1,   106,    83,   105,    -1,   106,    84,   105,    -1,
     106,    44,   105,    -1,   106,    45,   105,    -1,   106,    -1,
     107,    46,   106,    -1,   107,    47,   106,    -1,   107,    -1,
     108,    75,   107,    -1,   108,    -1,   109,    85,   108,    -1,
     109,    -1,   110,    86,   109,    -1,   110,    -1,   111,    48,
     110,    -1,   111,    -1,   112,    49,   111,    -1,   112,    -1,
     112,    87,   115,    88,   113,    -1,   113,    -1,   101,    89,
     114,    -1,   101,    51,   114,    -1,   101,    52,   114,    -1,
     101,    53,   114,    -1,   101,    54,   114,    -1,   101,    55,
     114,    -1,   101,    56,   114,    -1,   101,    57,   114,    -1,
     101,    58,   114,    -1,   101,    59,   114,    -1,   101,    60,
     114,    -1,   114,    -1,   115,    74,   114,    -1,   113,    -1,
     118,   120,    90,    -1,     1,    90,    -1,   123,   119,    -1,
     124,   119,    -1,   138,   119,    -1,   139,   119,    -1,    -1,
     118,    -1,    -1,   121,    -1,   122,    -1,   121,    74,   122,
      -1,   140,    -1,   140,    89,   156,    -1,    31,    -1,    14,
      -1,    28,    -1,     3,    -1,    22,    -1,    34,    -1,     6,
      -1,    25,    -1,    20,    -1,    21,    -1,    15,    -1,    11,
      -1,    26,    -1,    33,    -1,    37,    -1,    38,    -1,   125,
      -1,   134,    -1,   155,    -1,   126,    93,    72,   127,    73,
      -1,   126,    72,   127,    73,    -1,   126,    93,    -1,    29,
      -1,    32,    -1,   128,    -1,   127,   128,    -1,   129,   131,
      90,    -1,   124,   130,    -1,   138,   130,    -1,    -1,   129,
      -1,   132,    -1,   131,    74,   132,    -1,   140,    -1,   133,
      88,   116,    -1,    -1,   140,    -1,    13,   135,    72,   136,
      73,    -1,    13,   135,    72,   136,    74,    73,    -1,    13,
      93,    -1,    -1,    93,    -1,   137,    -1,   136,    74,   137,
      -1,    96,    -1,   137,    89,   116,    -1,     7,    -1,    23,
      -1,    35,    -1,    19,    -1,   145,   141,    -1,   141,    -1,
      93,    -1,    67,   140,    68,    -1,   141,    69,   143,   142,
      70,    -1,   141,    69,    28,   143,   114,    70,    -1,   141,
      69,   146,    28,   114,    70,    -1,   141,    69,   143,    76,
      70,    -1,   141,    67,   147,    68,    -1,   141,    67,   144,
      68,    -1,    -1,   114,    -1,    -1,   146,    -1,    -1,   151,
      -1,    76,   143,    -1,    76,   143,   145,    -1,   138,    -1,
     146,   138,    -1,   148,    -1,   148,    74,    50,    -1,   149,
      -1,   148,    74,   149,    -1,   118,   140,    -1,   118,   150,
      -1,    -1,   153,    -1,    93,    -1,   151,    74,    93,    -1,
     129,    -1,   129,   153,    -1,   145,    -1,   145,   154,    -1,
     154,    -1,    67,   153,    68,    -1,    69,   142,    70,    -1,
      69,    76,    70,    -1,    67,   147,    68,    -1,    67,    68,
      -1,   154,    69,   142,    70,    -1,   154,    69,    76,    70,
      -1,   154,    67,   147,    68,    -1,   154,    67,    68,    -1,
      91,    -1,   114,    -1,    72,   157,    73,    -1,    72,   157,
      74,    73,    -1,   158,   156,    -1,   157,    74,   158,   156,
      -1,    -1,   159,    -1,   160,    89,    -1,   161,    -1,   160,
     161,    -1,    69,   116,    70,    -1,    71,    93,    -1,   163,
      -1,   164,    -1,   168,    -1,   170,    -1,   172,    -1,   174,
      -1,     1,    90,    -1,    93,    88,   162,    -1,     5,   116,
      88,   162,    -1,     9,    88,   162,    -1,    72,   165,    73,
      -1,    -1,   166,    -1,   167,    -1,   166,   167,    -1,   117,
      -1,   162,    -1,   169,    90,    -1,    -1,   115,    -1,    18,
     171,    -1,    30,    67,   115,    68,   162,    -1,    67,   115,
      68,   162,    -1,    67,   115,    68,   162,    12,   162,    -1,
      36,    67,   115,    68,   162,    -1,    10,   162,    36,    67,
     115,    68,    90,    -1,    16,   173,    -1,    67,   169,    90,
     169,    90,   169,    68,   162,    -1,    67,   117,   169,    90,
     169,    68,   162,    -1,    17,    93,    90,    -1,     8,    90,
      -1,     4,    90,    -1,    24,   115,    90,    -1,   176,    -1,
     175,   176,    -1,   177,    -1,   117,    -1,    -1,   118,   140,
     179,   178,   164,    -1,     1,    72,    -1,     1,    90,    -1,
       1,    73,    -1,    -1,   180,    -1,   117,    -1,   180,   117,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   108,   109,   110,   113,   115,   117,   127,
     128,   129,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   143,   144,   147,   148,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   164,   165,   168,   169,
     170,   171,   174,   175,   176,   179,   180,   181,   184,   185,
     186,   187,   188,   192,   193,   194,   197,   198,   201,   202,
     205,   206,   209,   210,   213,   214,   217,   218,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     235,   236,   239,   241,   249,   252,   253,   254,   255,   258,
     259,   262,   263,   266,   267,   270,   283,   286,   287,   288,
     289,   290,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   309,   310,   311,   314,
     314,   316,   317,   320,   322,   323,   326,   327,   330,   331,
     334,   335,   338,   339,   342,   343,   344,   347,   348,   351,
     352,   355,   356,   359,   360,   361,   364,   366,   367,   370,
     371,   372,   373,   374,   375,   376,   377,   380,   381,   384,
     385,   388,   389,   392,   393,   396,   397,   400,   401,   404,
     405,   408,   409,   412,   413,   416,   417,   420,   421,   424,
     425,   426,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   440,   442,   443,   444,   447,   448,   451,   452,   455,
     457,   458,   461,   462,   465,   466,   467,   468,   469,   470,
     471,   474,   475,   476,   479,   481,   482,   485,   486,   489,
     490,   493,   495,   496,   499,   500,   503,   504,   507,   508,
     509,   512,   513,   516,   517,   518,   519,   522,   523,   526,
     527,   531,   530,   535,   536,   537,   540,   541,   544,   545
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL",
  "COMPLEX", "\"->\"", "\"++\"", "\"--\"", "\"<<\"", "\">>\"", "\"<=\"",
  "\">=\"", "\"==\"", "\"!=\"", "\"&&\"", "\"||\"", "\"...\"", "\"*=\"",
  "\"/=\"", "\"%=\"", "\"+=\"", "\"-=\"", "\"<<=\"", "\">>=\"", "\"&=\"",
  "\"^=\"", "\"|=\"", "INT_CONST", "CHAR_CONST", "REAL_CONST",
  "STRING_LITERAL", "IDENTIFIER", "IFX", "'('", "')'", "'['", "']'", "'.'",
  "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'t'",
  "$accept", "identifier", "constant", "string_literal",
  "enumeration_constant", "primary_expression", "postfix_expression",
  "argument_expression_list.opt", "argument_expression_list",
  "unary_expression", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "AND_expression", "exclusive_OR_expression",
  "inclusive_OR_expression", "logical_AND_expression",
  "logical_OR_expression", "conditional_expression",
  "assignment_expression", "expression", "constant_expression",
  "declaration", "declaration_specifiers", "declaration_specifiers.opt",
  "init_declarator_list.opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "specifier_qualifier_list.opt",
  "struct_declarator_list", "struct_declarator", "declarator.opt",
  "enum_specifier", "identifier.opt", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "assignment_expression.opt",
  "type_qualifier_list.opt", "identifier_list.opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator.opt", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "typedef_name", "initializer", "initializer_list", "designation.opt",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list.opt",
  "block_item_list", "block_item", "expression_statement",
  "expression.opt", "selection_statement", "if_body",
  "iteration_statement", "for_body", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "$@1",
  "declaration_list.opt", "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    40,    41,    91,
      93,    46,   123,   125,    44,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    58,    61,
      59,   116
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    94,    94,    94,    95,    96,    97,    97,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,   100,   100,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   103,   103,
     103,   103,   104,   104,   104,   105,   105,   105,   106,   106,
     106,   106,   106,   107,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   116,   117,   117,   118,   118,   118,   118,   119,
     119,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   125,   125,   125,   126,
     126,   127,   127,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   138,   139,   140,   140,   141,
     141,   141,   141,   141,   141,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   151,   152,   152,   153,
     153,   153,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   155,   156,   156,   156,   157,   157,   158,   158,   159,
     160,   160,   161,   161,   162,   162,   162,   162,   162,   162,
     162,   163,   163,   163,   164,   165,   165,   166,   166,   167,
     167,   168,   169,   169,   170,   170,   171,   171,   172,   172,
     172,   173,   173,   174,   174,   174,   174,   175,   175,   176,
     176,   178,   177,   177,   177,   177,   179,   179,   180,   180
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     4,     4,     3,     3,     2,     2,     6,
       7,     1,     0,     1,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     1,     3,     2,     2,     2,     2,     2,     0,
       1,     0,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     2,     0,     1,     1,     3,
       1,     3,     0,     1,     5,     6,     2,     0,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     2,     1,     1,
       3,     5,     6,     6,     5,     4,     4,     0,     1,     0,
       1,     0,     1,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     2,     0,     1,     1,     3,     1,     2,     1,
       2,     1,     3,     3,     3,     3,     2,     4,     4,     4,
       3,     1,     1,     3,     4,     2,     4,     0,     1,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       2,     3,     4,     3,     3,     0,     1,     1,     2,     1,
       1,     2,     0,     1,     2,     5,     4,     6,     5,     7,
       2,     8,     7,     3,     2,     2,     3,     1,     2,     1,
       1,     0,     5,     2,     2,     2,     0,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   100,   103,   143,   108,   137,    98,   107,   146,
     105,   106,   101,   144,   104,   109,    99,   119,    97,   120,
     110,   102,   145,   111,   112,   191,   240,    91,    89,    89,
     113,     0,   114,    89,    89,   115,     0,   237,   239,   243,
     245,    84,     2,   136,     0,     0,   159,   149,     0,    92,
      93,     0,   148,     0,    90,    85,    86,     0,   118,    87,
      88,     1,   238,     0,     0,   165,   163,   160,    83,     0,
       0,     0,   248,    91,   241,     0,   161,   159,   147,   126,
       0,   121,   132,   126,     0,     7,   141,     0,   139,   150,
     164,   166,    94,    95,    84,     0,     0,     0,     4,     3,
       5,     6,     0,   197,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    12,    25,    36,    38,    42,    45,    48,
      53,    56,    58,    60,    62,    64,    66,    68,   192,    96,
       0,   249,   175,   173,     0,     0,   167,   169,   162,   159,
     157,   160,   127,   124,   117,   122,     0,   128,     0,   130,
     125,     0,   134,     0,     0,     0,    34,     0,    26,    27,
      80,     0,   177,     0,     0,     0,     0,     0,   198,     0,
     200,    36,    28,    29,    30,    31,    32,    33,     0,    17,
      18,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,   157,   171,   179,
     172,   174,   181,   156,   155,     0,     0,     0,     0,   158,
       0,     0,   132,   123,     0,   116,   135,   140,    82,   142,
       0,     0,    11,     0,     0,   179,   178,     0,     0,   203,
     193,   197,   195,   199,   201,    16,     0,    21,    23,     0,
      15,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    69,    39,    40,    41,    43,    44,    46,    47,    51,
      52,    49,    50,    54,    55,    57,    59,    61,    63,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,   223,   219,   220,   204,   205,     0,
       0,   217,   206,     0,   207,   208,   209,   186,     0,     0,
       0,     0,   180,     0,   157,   168,   170,   176,     0,   154,
     151,     0,   129,   131,    35,     0,    81,   197,    37,   202,
     194,     0,    14,     0,    13,     0,    84,   235,     0,   234,
       0,     0,     0,     0,   230,     0,     0,   224,     0,     0,
       0,     0,   214,   218,   221,   185,   182,   184,   183,   190,
       0,     0,     0,   152,   153,     0,   196,    24,    67,     0,
     213,   210,     0,   222,     0,   233,     0,   236,     0,     0,
     211,   189,   188,   187,    19,   197,   212,     0,     0,   222,
       0,     0,     0,    20,     0,   222,     0,   226,   225,   228,
       0,     0,   222,     0,   229,     0,     0,   227,   232,     0,
     231
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   110,   111,   112,    86,   113,   114,   256,   257,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   160,   304,   239,    26,    73,    55,    48,    49,
      50,    28,    29,    30,    31,    80,    81,    82,   143,   146,
     147,   148,    32,    44,    87,    88,    33,    34,    64,    52,
     230,    66,   134,    53,    67,   318,   136,   137,   220,   138,
     163,   319,   222,    35,   129,   166,   167,   168,   169,   170,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   357,
     315,   354,   316,    36,    37,    38,   130,    74,    75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -320
static const yytype_int16 yypact[] =
{
     843,    63,  -320,  -320,  -320,  -320,   -52,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,    29,  1207,  1207,
    -320,    10,  -320,  1207,  1207,  -320,   429,  -320,  -320,  -320,
    -320,  -320,  -320,   -54,   -12,    29,    62,  -320,   -25,    14,
    -320,   720,    34,    46,  -320,  -320,  -320,  1391,    -4,  -320,
    -320,  -320,  -320,   -52,    40,  -320,    58,    62,  -320,    29,
      32,   257,  -320,    29,  -320,   801,  1090,    72,    34,  1391,
    1316,  -320,    29,  1391,  1391,  -320,  -320,   127,    59,  -320,
    -320,  -320,  -320,    78,  -320,  1495,  1523,  1523,  -320,  -320,
    -320,  -320,  1241,   136,  1551,  1551,  1551,  1551,  1551,  1551,
    -320,  -320,  -320,  -320,    50,   459,  -320,    68,   118,   211,
     -22,   247,    86,    94,   125,   158,   -29,  -320,  -320,  -320,
     185,  -320,  -320,    93,   151,   154,   186,  -320,   189,    62,
    1579,   150,  -320,  -320,  -320,  -320,    25,  -320,   194,   198,
    -320,  1349,  -320,   -49,  1551,  1241,  -320,  1241,  -320,  -320,
    -320,    77,    47,   220,  1551,   -52,   226,   257,  -320,     3,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,   -52,  -320,
    -320,  1551,  1551,   -52,  1551,  1551,  1551,  1551,  1551,  1551,
    1551,  1551,  1551,  1551,  1551,  1551,  1551,  1551,  1551,  1551,
    1551,  1551,  1551,  1551,  1551,  1551,  1551,  1551,  1551,  1551,
    1551,  1551,  1551,  1551,   467,  -320,   956,  1607,  -320,   147,
    -320,  -320,   122,  -320,  -320,  1128,   -52,  1551,  1369,  -320,
     221,  1551,    29,  -320,  1551,  -320,  -320,    59,  -320,  -320,
     227,   238,  -320,  1551,  1023,   156,  -320,  1411,   240,  -320,
    -320,   210,  -320,  -320,  -320,  -320,   244,   242,  -320,   120,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,    68,    68,   118,   118,   211,
     211,   211,   211,   -22,   -22,   247,    86,    94,   125,   158,
     -55,   233,   248,  1551,   250,   253,   878,   275,   -52,   276,
    1551,   278,   279,   259,   243,  -320,  -320,  -320,  -320,   277,
     558,  -320,  -320,   258,  -320,  -320,  -320,  -320,   283,   284,
    1439,   286,   122,  1169,  1635,  -320,  -320,  -320,   287,  -320,
    -320,   288,  -320,  -320,   291,   291,  -320,   136,  -320,  -320,
    -320,   257,  -320,  1551,  -320,  1551,  -320,  -320,   266,  -320,
     878,   270,   328,   639,  -320,   280,  1551,  -320,    35,  1551,
    1551,   878,  -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,
     299,  1467,   298,  -320,  -320,   229,  -320,  -320,  -320,   878,
    -320,  -320,   302,  1551,   281,  -320,    97,  -320,   100,   102,
    -320,  -320,  -320,  -320,  -320,   216,  -320,  1551,   285,  1551,
     878,   878,   878,  -320,   112,  1551,   289,   360,  -320,  -320,
     290,   306,  1551,   878,  -320,   878,   308,  -320,  -320,   878,
    -320
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,    -6,  -320,  -320,  -320,  -320,  -320,  -320,  -320,    33,
     -64,   110,   113,    45,   124,   169,   172,   173,   171,   174,
    -320,  -147,    84,  -101,  -150,   -48,     2,   159,  -320,  -320,
     316,  -320,   -31,  -320,  -320,   303,   -68,   -51,   305,  -320,
     157,  -320,  -320,  -320,  -320,   237,   282,  -320,   -23,   -44,
    -206,   -62,  -320,   -60,   314,   -71,  -320,   167,  -320,  -320,
     109,   -96,  -190,  -320,  -159,    56,  -241,  -320,  -320,   228,
    -198,  -320,   268,  -320,  -320,    89,  -320,  -319,  -320,  -320,
    -320,  -320,  -320,  -320,   364,  -320,  -320,  -320,  -320
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -248
static const yytype_int16 yytable[] =
{
      43,   161,    27,    72,    51,   135,    90,   238,   252,    78,
     341,   321,   145,    42,   248,   140,    42,   238,  -138,   243,
     212,    47,   202,   203,   236,    58,    79,   131,   142,   322,
      54,    54,   142,   345,   384,    54,    54,   221,    27,    47,
     172,   173,   174,   175,   176,   177,    93,    47,    79,    79,
      93,   162,    79,    79,   161,   322,   161,    85,   213,   149,
      63,   204,   205,    47,   398,    68,   246,    47,    84,     4,
     132,    79,   164,   219,   165,    42,    47,   227,   133,     4,
     406,   259,    57,   145,   333,    13,   411,   238,    69,   178,
     179,   180,   253,   416,    42,    13,    45,    22,   352,   232,
     139,    76,   245,    77,   162,    46,   162,    22,    89,   243,
     218,    42,   290,    45,   244,   233,   217,   181,   372,   182,
      79,   183,    94,    46,    79,   387,    79,    47,   156,   158,
     159,   272,   273,   274,    46,    39,    40,   171,   171,   171,
     171,   171,   171,   348,   195,   242,   238,    85,   154,   196,
     197,   243,   380,    41,   341,   128,   219,     4,    42,   249,
     216,   208,   217,   390,   173,   400,   305,    71,   401,    46,
     402,   243,   255,    13,   243,    78,   243,   260,   231,   209,
     410,   396,   376,   338,   245,    22,   243,   171,    56,   323,
     344,   324,    59,    60,   243,   198,   199,   171,   378,   358,
     152,   153,   407,   408,   409,   164,   211,   165,   303,   149,
      47,   210,    42,    47,   216,   417,   217,   418,   133,   223,
     327,   420,   224,   244,   229,   217,    47,   133,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   133,   279,   280,   281,
     282,   128,   370,   200,   201,   386,   173,   214,   388,   389,
     225,   171,   305,   226,   240,   258,   241,   171,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   164,
     171,   165,   234,   340,    95,   164,  -133,   165,   247,   403,
     303,   330,   355,   206,   207,   334,   404,    96,    97,   250,
     251,   229,   394,   395,   303,   383,   335,   173,   275,   276,
     339,   328,   342,   277,   278,   331,   343,   243,    98,    99,
     100,   101,    42,   346,   102,   133,   171,   336,    65,   103,
     283,   284,   104,   105,   106,   107,   108,   109,   347,    83,
     349,   350,   353,   356,   303,   359,   360,   361,   364,    91,
     362,   365,   366,   171,   379,   303,   368,   373,   374,    65,
     381,    83,    83,   337,   382,    83,    83,   391,   393,   397,
     385,   399,   413,   303,   415,   405,   419,   285,   171,   412,
     414,   286,   288,   287,    83,    92,   289,   151,   150,   332,
     237,   141,   326,   375,   303,   303,   303,   254,   215,   363,
      62,     0,     0,     0,   171,     0,     0,   303,   229,   303,
       0,     0,     0,   303,     0,     0,     0,     0,     0,     0,
       0,    65,     0,    91,     0,   128,     0,   377,     0,    61,
       1,     0,     2,    83,     0,     3,     4,    83,     0,    83,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,     0,    23,    24,   291,     0,
       2,   292,   293,     3,     4,   294,   295,   296,     5,     0,
       6,     7,     8,   297,   298,   299,     9,    10,    11,    12,
      13,   300,    14,    15,    95,    16,    17,   301,    18,    19,
      20,    21,    22,   302,    23,    24,     0,    96,    97,     0,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
      25,     0,     0,     0,     0,     0,     0,     0,    98,    99,
     100,   101,    42,     0,   102,     0,     0,     0,     0,   214,
    -215,     0,   104,   105,   106,   107,   108,   109,   194,     0,
       0,     0,     0,     0,     0,     0,     0,  -222,    25,   291,
       0,     2,   292,   293,     3,     4,   294,   295,   296,     5,
       0,     6,     7,     8,   297,   298,   299,     9,    10,    11,
      12,    13,   300,    14,    15,    95,    16,    17,   301,    18,
      19,    20,    21,    22,   302,    23,    24,     0,    96,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,   101,    42,     0,   102,     0,     0,     0,     0,
     214,  -216,     0,   104,   105,   106,   107,   108,   109,     0,
      70,     0,     2,     0,     0,     3,     4,     0,  -222,    25,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,    95,    16,    17,     0,
      18,    19,    20,    21,    22,     0,    23,    24,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,   101,    42,     0,   102,     0,     0,     0,
       0,     0,     0,     0,   104,   105,   106,   107,   108,   109,
       0,    70,     0,     2,     0,     0,     3,     4,     0,  -222,
      25,     5,     0,     6,     7,     8,     0,     0,     0,     9,
      10,    11,    12,    13,     0,    14,    15,     0,    16,    17,
       0,    18,    19,    20,    21,    22,     0,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -246,     0,   -95,     0,     0,     0,     0,     0,
       0,     0,    70,     0,     2,     0,     0,     3,     4,    71,
     -95,    25,     5,     0,     6,     7,     8,     0,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,     0,    16,
      17,     0,    18,    19,    20,    21,    22,     0,    23,    24,
       0,     0,     0,     0,     1,     0,     2,     0,     0,     3,
       4,     0,     0,     0,     5,     0,     6,     7,     8,     0,
       0,     0,     9,    10,    11,    12,    13,     0,    14,    15,
       0,    16,    17,  -247,    18,    19,    20,    21,    22,   351,
      23,    24,   292,   293,     0,     0,   294,   295,   296,     0,
       0,     0,    25,     0,   297,   298,   299,     0,     0,     0,
       0,     0,   300,     0,     0,    95,     0,     0,   301,     0,
       0,     0,     0,     0,   302,     0,     0,     0,    96,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,     0,    98,
      99,   100,   101,    42,     0,   102,     0,     0,     0,     0,
     214,     0,     0,   104,   105,   106,   107,   108,   109,     2,
       0,     0,     3,     4,     0,     0,     0,     5,  -222,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,     0,    16,    17,     0,    18,    19,    20,
      21,    22,     0,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,   216,   317,   217,     2,     0,     0,     3,
       4,     0,    46,     0,     5,     0,     6,     7,     8,     0,
       0,     0,     9,    10,    11,    12,    13,    25,    14,    15,
       0,    16,    17,     0,    18,    19,    20,    21,    22,     0,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,   317,   217,     2,     0,     0,     3,     4,     0,    46,
       0,     5,     0,     6,     7,     8,     0,     0,     0,     9,
      10,    11,    12,    13,    25,    14,    15,     0,    16,    17,
       0,    18,    19,    20,    21,    22,     0,    23,    24,     0,
       0,     2,     0,     0,     3,     4,     0,     0,     0,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,    42,    16,    17,     0,    18,
      19,    20,    21,    22,     0,    23,    24,     0,     0,     0,
       0,     0,     2,     0,     0,     3,     4,     0,   325,     0,
       5,    25,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,     0,    23,    24,     0,     0,
       2,     0,     0,     3,     4,     0,     0,     0,     5,    25,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,     0,    16,    17,   369,    18,    19,
      20,    21,    22,     0,    23,    24,     0,     3,     4,     0,
       0,     0,     5,     0,     6,     0,     8,     0,     0,     0,
      25,    10,    11,     0,    13,     0,    14,    15,    95,     0,
      17,     0,     0,    19,    20,    21,    22,     0,    23,    24,
       0,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,     0,    98,    99,   100,   101,    42,     0,   102,     0,
       0,     0,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,     3,     4,     0,     0,     0,     5,     0,     6,
       0,     8,    25,     0,     0,     0,    10,    11,     0,    13,
       0,    14,    15,     0,     0,    17,     0,     0,    19,    20,
      21,    22,     0,    23,    24,     3,     4,     0,     0,     0,
       5,     0,     6,     0,     8,     0,     0,     0,     0,    10,
      11,     0,    13,     0,    14,    15,     0,     0,    17,     0,
       0,    19,    20,    21,    22,     0,    23,    24,     0,   144,
       0,     0,     0,     0,     0,     0,    95,     3,     4,     0,
       0,     0,     5,     0,     6,     0,     8,    25,     0,    96,
      97,    10,    11,     0,    13,     0,    14,    15,     0,     0,
      17,     0,   235,    19,    20,    21,    22,     0,    23,    24,
      98,    99,   100,   101,    42,     0,   102,     0,    95,   329,
      25,     0,     0,     0,   104,   105,   106,   107,   108,   109,
       0,    96,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,     0,
       0,     0,    98,    99,   100,   101,    42,     0,   102,    96,
      97,     0,    25,   337,     0,     0,   104,   105,   106,   107,
     108,   109,     0,     0,    95,     0,     0,     0,     0,     0,
      98,    99,   100,   101,    42,     0,   102,    96,    97,   367,
       0,     0,     0,     0,   104,   105,   106,   107,   108,   109,
       0,     0,    95,     0,     0,     0,     0,     0,    98,    99,
     100,   101,    42,     0,   102,    96,    97,   392,     0,     0,
       0,     0,   104,   105,   106,   107,   108,   109,     0,     0,
      95,     0,     0,     0,     0,     0,    98,    99,   100,   101,
      42,     0,   155,    96,    97,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,     0,     0,    95,     0,
       0,     0,     0,     0,    98,    99,   100,   101,    42,     0,
     157,    96,    97,     0,     0,     0,     0,     0,   104,   105,
     106,   107,   108,   109,     0,     0,    95,     0,     0,     0,
       0,     0,    98,    99,   100,   101,    42,     0,   102,    96,
      97,     0,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,     0,     0,    95,     0,     0,     0,     0,     0,
      98,    99,   100,   101,    42,     0,   102,    96,    97,     0,
       0,     0,     0,     0,   104,   228,   106,   107,   108,   109,
       0,     0,    95,     0,     0,     0,     0,     0,    98,    99,
     100,   101,    42,     0,   102,    96,    97,     0,     0,     0,
       0,     0,   104,   320,   106,   107,   108,   109,     0,     0,
       0,     0,     0,     0,     0,     0,    98,    99,   100,   101,
      42,     0,   102,     0,     0,     0,     0,     0,     0,     0,
     104,   371,   106,   107,   108,   109
};

static const yytype_int16 yycheck[] =
{
       6,   102,     0,    51,    27,    76,    66,   154,   167,    53,
     251,   217,    80,    65,   164,    77,    65,   164,    72,    74,
      49,    27,    44,    45,    73,    31,    57,    75,    79,   219,
      28,    29,    83,    88,   353,    33,    34,   133,    36,    45,
     104,   105,   106,   107,   108,   109,    69,    53,    79,    80,
      73,   102,    83,    84,   155,   245,   157,    63,    87,    82,
      72,    83,    84,    69,   383,    90,   162,    73,    72,     7,
      76,   102,    69,   133,    71,    65,    82,   139,    76,     7,
     399,   182,    72,   151,   234,    23,   405,   234,    74,    39,
      40,    41,    89,   412,    65,    23,    67,    35,   296,    74,
      28,    67,   162,    69,   155,    76,   157,    35,    68,    74,
     133,    65,   213,    67,    67,    90,    69,    67,   324,    69,
     151,    71,    90,    76,   155,    90,   157,   133,    95,    96,
      97,   195,   196,   197,    76,    72,    73,   104,   105,   106,
     107,   108,   109,   293,    76,    68,   293,   153,    89,    81,
      82,    74,   350,    90,   395,    71,   216,     7,    65,   165,
      67,    75,    69,   361,   228,    68,   214,    89,    68,    76,
      68,    74,   178,    23,    74,   219,    74,   183,    28,    85,
      68,   379,   341,   247,   244,    35,    74,   154,    29,    67,
      70,    69,    33,    34,    74,    77,    78,   164,   345,   300,
      73,    74,   400,   401,   402,    69,    48,    71,   214,   232,
     216,    86,    65,   219,    67,   413,    69,   415,   216,    68,
     226,   419,    68,    67,   140,    69,   232,   225,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   244,   202,   203,   204,
     205,   167,   323,    42,    43,   356,   320,    72,   359,   360,
      74,   228,   310,    74,   155,   181,   157,   234,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,    69,
     247,    71,    88,    73,    27,    69,    88,    71,    68,    73,
     296,    70,   298,    46,    47,    68,   397,    40,    41,    73,
      74,   217,    73,    74,   310,   353,    68,   371,   198,   199,
      70,   227,    68,   200,   201,   231,    74,    74,    61,    62,
      63,    64,    65,    90,    67,   323,   293,   243,    46,    72,
     206,   207,    75,    76,    77,    78,    79,    80,    90,    57,
      90,    88,    67,    67,   350,    67,    67,    88,    90,    67,
      73,    68,    68,   320,    88,   361,    70,    70,    70,    77,
      90,    79,    80,    72,    36,    83,    84,    68,    70,    67,
      90,    90,    12,   379,    68,    90,    68,   208,   345,    90,
      90,   209,   211,   210,   102,    69,   212,    84,    83,   232,
     153,    77,   225,   337,   400,   401,   402,   169,   130,   310,
      36,    -1,    -1,    -1,   371,    -1,    -1,   413,   324,   415,
      -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,   141,    -1,   341,    -1,   343,    -1,     0,
       1,    -1,     3,   151,    -1,     6,     7,   155,    -1,   157,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,    72,
      73,    -1,    75,    76,    77,    78,    79,    80,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,    -1,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,    90,    91,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,    -1,    90,
      91,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,    -1,     6,     7,    89,
      90,    91,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,     1,    -1,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    28,    29,    72,    31,    32,    33,    34,    35,     1,
      37,    38,     4,     5,    -1,    -1,     8,     9,    10,    -1,
      -1,    -1,    91,    -1,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    75,    76,    77,    78,    79,    80,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    90,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    67,    68,    69,     3,    -1,    -1,     6,
       7,    -1,    76,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    91,    25,    26,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,     3,    -1,    -1,     6,     7,    -1,    76,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    91,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    65,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    50,    -1,
      11,    91,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    91,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    29,    68,    31,    32,
      33,    34,    35,    -1,    37,    38,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,
      91,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      29,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      -1,    15,    91,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    -1,    -1,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    -1,    15,    -1,    -1,    -1,    -1,    20,
      21,    -1,    23,    -1,    25,    26,    -1,    -1,    29,    -1,
      -1,    32,    33,    34,    35,    -1,    37,    38,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    27,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    -1,    15,    91,    -1,    40,
      41,    20,    21,    -1,    23,    -1,    25,    26,    -1,    -1,
      29,    -1,    73,    32,    33,    34,    35,    -1,    37,    38,
      61,    62,    63,    64,    65,    -1,    67,    -1,    27,    70,
      91,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    -1,    67,    40,
      41,    -1,    91,    72,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    67,    40,    41,    70,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    67,    40,    41,    70,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    -1,    67,    40,    41,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    -1,
      67,    40,    41,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    -1,    67,    40,
      41,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    67,    40,    41,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    67,    40,    41,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     6,     7,    11,    13,    14,    15,    19,
      20,    21,    22,    23,    25,    26,    28,    29,    31,    32,
      33,    34,    35,    37,    38,    91,   117,   118,   123,   124,
     125,   126,   134,   138,   139,   155,   175,   176,   177,    72,
      73,    90,    65,    93,   135,    67,    76,    93,   120,   121,
     122,   140,   141,   145,   118,   119,   119,    72,    93,   119,
     119,     0,   176,    72,   140,   138,   143,   146,    90,    74,
       1,    89,   117,   118,   179,   180,    67,    69,   141,   124,
     127,   128,   129,   138,    72,    93,    96,   136,   137,    68,
     145,   138,   122,   140,    90,    27,    40,    41,    61,    62,
      63,    64,    67,    72,    75,    76,    77,    78,    79,    80,
      93,    94,    95,    97,    98,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   156,
     178,   117,    93,   118,   144,   147,   148,   149,   151,    28,
     143,   146,   129,   130,    73,   128,   131,   132,   133,   140,
     130,   127,    73,    74,    89,    67,   101,    67,   101,   101,
     114,   115,   129,   152,    69,    71,   157,   158,   159,   160,
     161,   101,   102,   102,   102,   102,   102,   102,    39,    40,
      41,    67,    69,    71,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    89,    76,    81,    82,    77,    78,
      42,    43,    44,    45,    83,    84,    46,    47,    75,    85,
      86,    48,    49,    87,    72,   164,    67,    69,   140,   145,
     150,   153,   154,    68,    68,    74,    74,   143,    76,   114,
     142,    28,    74,    90,    88,    73,    73,   137,   113,   116,
     152,   152,    68,    74,    67,   145,   153,    68,   116,    93,
      73,    74,   156,    89,   161,    93,    99,   100,   114,   115,
      93,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   102,   102,   102,   103,   103,   104,   104,   105,
     105,   105,   105,   106,   106,   107,   108,   109,   110,   111,
     115,     1,     4,     5,     8,     9,    10,    16,    17,    18,
      24,    30,    36,    93,   115,   117,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   172,   174,    68,   147,   153,
      76,   142,   154,    67,    69,    50,   149,    93,   114,    70,
      70,   114,   132,   116,    68,    68,   114,    72,   102,    70,
      73,   158,    68,    74,    70,    88,    90,    90,   116,    90,
      88,     1,   162,    67,   173,    93,    67,   171,   115,    67,
      67,    88,    73,   167,    90,    68,    68,    70,    70,    68,
     147,    76,   142,    70,    70,   157,   156,   114,   113,    88,
     162,    90,    36,   117,   169,    90,   115,    90,   115,   115,
     162,    68,    70,    70,    73,    74,   162,    67,   169,    90,
      68,    68,    68,    73,   115,    90,   169,   162,   162,   162,
      68,   169,    90,    12,    90,    68,   169,   162,   162,    68,
     162
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 106 "bison/parser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 108 "bison/parser.y"
    { (yyval.type) = typeChar;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 109 "bison/parser.y"
    { (yyval.type) = typeInt; ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 110 "bison/parser.y"
    { (yyval.type) = typeDouble; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 113 "bison/parser.y"
    {(yyval.type) = typeString;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 118 "bison/parser.y"
    {   
                        if(symtable_isPresent(st, (yyvsp[(1) - (1)].strval))){
                            (yyval.type) = symtable_lookup(st, (yyvsp[(1) - (1)].strval))->type;
                        }
                        else {
                            (yyval.type) = typeError;
                            printError("El simbolo %s no fue declarado", (yyvsp[(1) - (1)].strval));
                        }
                    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 127 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 128 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 129 "bison/parser.y"
    { (yyval.type) = (yyvsp[(2) - (3)].type); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 132 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 133 "bison/parser.y"
    {(yyval.type) = reduceArray((yyvsp[(1) - (4)].type), (yyvsp[(3) - (4)].type));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 134 "bison/parser.y"
    {(yyval.type) = reduceFunction((yyvsp[(1) - (4)].type), (yyvsp[(3) - (4)].list));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 135 "bison/parser.y"
    { /* No consideramos structs */ ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 136 "bison/parser.y"
    { /* No consideramos structs */ ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 137 "bison/parser.y"
    {(yyval.type) = reduceIncrement((yyvsp[(1) - (2)].type));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 138 "bison/parser.y"
    {(yyval.type) = reduceIncrement((yyvsp[(1) - (2)].type));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 139 "bison/parser.y"
    { /* No consideramos los literales compuestos */ ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 140 "bison/parser.y"
    { /* No consideramos los literales compuestos */ ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 143 "bison/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 144 "bison/parser.y"
    { (yyval.list) = list_create(); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 147 "bison/parser.y"
    { (yyval.list) = list_create(); list_add((yyval.list), (yyvsp[(1) - (1)].type)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 148 "bison/parser.y"
    { (yyval.list) = (yyvsp[(1) - (3)].list); list_add((yyval.list), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 151 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 152 "bison/parser.y"
    {(yyval.type) = reduceIncrement((yyvsp[(2) - (2)].type));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 153 "bison/parser.y"
    {(yyval.type) = reduceIncrement((yyvsp[(2) - (2)].type));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 154 "bison/parser.y"
    { /* No consideramos el operador de referencia */ ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 155 "bison/parser.y"
    {(yyval.type) = reduceDereference((yyvsp[(2) - (2)].type));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 156 "bison/parser.y"
    {(yyval.type) = reduceUnaryPlus((yyvsp[(2) - (2)].type));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 157 "bison/parser.y"
    {(yyval.type) = reduceUnaryPlus((yyvsp[(2) - (2)].type));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 158 "bison/parser.y"
    {(yyval.type) = reduceBitwiseNot((yyvsp[(2) - (2)].type));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 159 "bison/parser.y"
    {(yyval.type) = reduceLogicalNot((yyvsp[(2) - (2)].type));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 160 "bison/parser.y"
    {(yyval.type) = reduceSizeOf((yyvsp[(2) - (2)].type));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 161 "bison/parser.y"
    {(yyval.type) = reduceSizeOf((yyvsp[(2) - (4)].type));;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 164 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 165 "bison/parser.y"
    {(yyval.type) = reduceCast((yyvsp[(2) - (4)].type), (yyvsp[(4) - (4)].type));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 168 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 169 "bison/parser.y"
    { (yyval.type) = reduceProduct((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 170 "bison/parser.y"
    { (yyval.type) = reduceProduct((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 171 "bison/parser.y"
    { (yyval.type) = reduceRemainder((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 174 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 175 "bison/parser.y"
    { (yyval.type) = reduceSum((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 176 "bison/parser.y"
    { (yyval.type) = reduceSubtract((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 179 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 180 "bison/parser.y"
    {(yyval.type) = reduceBitwise((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 181 "bison/parser.y"
    {(yyval.type) = reduceBitwise((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 184 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 185 "bison/parser.y"
    { (yyval.type) = reduceRelational((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 186 "bison/parser.y"
    { (yyval.type) = reduceRelational((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 187 "bison/parser.y"
    { (yyval.type) = reduceRelational((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 188 "bison/parser.y"
    { (yyval.type) = reduceRelational((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 192 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 193 "bison/parser.y"
    { (yyval.type) = reduceEquality((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 194 "bison/parser.y"
    { (yyval.type) = reduceEquality((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 197 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 198 "bison/parser.y"
    { (yyval.type) = reduceBitwise((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 201 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 202 "bison/parser.y"
    { (yyval.type) = reduceBitwise((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 205 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 206 "bison/parser.y"
    { (yyval.type) = reduceBitwise((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 209 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 210 "bison/parser.y"
    { (yyval.type) = reduceLogical((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 213 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 214 "bison/parser.y"
    { (yyval.type) = reduceLogical((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 217 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 218 "bison/parser.y"
    { (yyval.type) = reduceConditional((yyvsp[(1) - (5)].type), (yyvsp[(3) - (5)].type), (yyvsp[(5) - (5)].type)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 221 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 222 "bison/parser.y"
    {(yyval.type) = reduceAssignment((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 223 "bison/parser.y"
    {(yyval.type) = reduceProduct((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 224 "bison/parser.y"
    {(yyval.type) = reduceProduct((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 225 "bison/parser.y"
    {(yyval.type) = reduceRemainder((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 226 "bison/parser.y"
    {(yyval.type) = reduceSum((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 227 "bison/parser.y"
    {(yyval.type) = reduceSubtract((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 228 "bison/parser.y"
    {(yyval.type) = reduceBitwise((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 229 "bison/parser.y"
    {(yyval.type) = reduceBitwise((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 230 "bison/parser.y"
    {(yyval.type) = reduceBitwise((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 231 "bison/parser.y"
    {(yyval.type) = reduceBitwise((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 232 "bison/parser.y"
    {(yyval.type) = reduceBitwise((yyvsp[(1) - (3)].type), (yyvsp[(3) - (3)].type));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 235 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 236 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (3)].type);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 242 "bison/parser.y"
    {
                    void agregarEspecificador(void* elem){
                        typeInfo_append(&((symbol*)elem)->type, (yyvsp[(1) - (3)].type));
                    }
                    list_iterate((yyvsp[(2) - (3)].list), agregarEspecificador);
                    symtable_addSymbols(st, (yyvsp[(2) - (3)].list));
                ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 249 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 252 "bison/parser.y"
    {(yyval.type) = (yyvsp[(2) - (2)].type);;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 253 "bison/parser.y"
    {(yyvsp[(2) - (2)].type)->type = (yyvsp[(1) - (2)].typeName); (yyval.type) = (yyvsp[(2) - (2)].type);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 254 "bison/parser.y"
    {(yyval.type) = (yyvsp[(2) - (2)].type);;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 255 "bison/parser.y"
    {(yyval.type) = (yyvsp[(2) - (2)].type);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 258 "bison/parser.y"
    {(yyval.type) = typeInfo_create(t_ERROR);;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 259 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 262 "bison/parser.y"
    {(yyval.list) = list_create();;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 263 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (1)].list);;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 266 "bison/parser.y"
    {(yyval.list) = list_create(); list_add((yyval.list), (yyvsp[(1) - (1)].sym));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 267 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (3)].list); list_add((yyval.list), (yyvsp[(3) - (3)].sym));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 271 "bison/parser.y"
    {
                        (yyval.sym) = (yyvsp[(1) - (1)].sym);
                        if((yyval.sym)->type != NULL){
                            if((yyval.sym)->type->type == t_FUNC){
                                bool isNamedParam(void* elem){
                                    return ((symbol*)elem)->identifier != NULL;
                                }
                                t_list* namedParams = list_filter((yyval.sym)->type->params, isNamedParam);
                                symtable_addSymbols(st, namedParams);
                            }
                        }
                    ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 283 "bison/parser.y"
    {(yyval.sym) = (yyvsp[(1) - (3)].sym);;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 293 "bison/parser.y"
    {(yyval.typeName) = t_VOID;;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 294 "bison/parser.y"
    {(yyval.typeName) = t_CHAR;;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 295 "bison/parser.y"
    {(yyval.typeName) = t_ERROR;;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 296 "bison/parser.y"
    {(yyval.typeName) = t_INT;;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 297 "bison/parser.y"
    {(yyval.typeName) = t_ERROR;;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 298 "bison/parser.y"
    {(yyval.typeName) = t_FLOAT;;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 299 "bison/parser.y"
    {(yyval.typeName) = t_DOUBLE;;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 300 "bison/parser.y"
    {(yyval.typeName) = t_ERROR;;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 301 "bison/parser.y"
    {(yyval.typeName) = t_ERROR;;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 302 "bison/parser.y"
    {(yyval.typeName) = t_ERROR;;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 303 "bison/parser.y"
    {(yyval.typeName) = t_ERROR;;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 304 "bison/parser.y"
    {(yyval.typeName) = t_ERROR;;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 305 "bison/parser.y"
    {(yyval.typeName) = t_ERROR;;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 306 "bison/parser.y"
    {(yyval.typeName) = t_ERROR;;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 322 "bison/parser.y"
    {(yyval.type) = (yyvsp[(2) - (2)].type); (yyval.type)->type = (yyvsp[(1) - (2)].typeName);;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 323 "bison/parser.y"
    {(yyval.type) = (yyvsp[(2) - (2)].type);;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 326 "bison/parser.y"
    {(yyval.type) = typeInfo_create(t_ERROR);;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 327 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 347 "bison/parser.y"
    {(yyval.strval) = NULL;;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 348 "bison/parser.y"
    {(yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 366 "bison/parser.y"
    {typeInfo_append(&(yyvsp[(2) - (2)].sym)->type, (yyvsp[(1) - (2)].type)); (yyval.sym) = (yyvsp[(2) - (2)].sym);;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 367 "bison/parser.y"
    {(yyval.sym) = (yyvsp[(1) - (1)].sym);;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 370 "bison/parser.y"
    {(yyval.sym) = symbol_create((yyvsp[(1) - (1)].strval)); (yyval.sym)->identifier = string_duplicate((yyvsp[(1) - (1)].strval));;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 371 "bison/parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 372 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (5)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (5)].sym);;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 373 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (6)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (6)].sym);;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 374 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (6)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (6)].sym);;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 375 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (5)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (5)].sym);;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 376 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_FUNC); t->params = (yyvsp[(3) - (4)].list); typeInfo_append(&(yyvsp[(1) - (4)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (4)].sym);;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 377 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_FUNC); t->params = (yyvsp[(3) - (4)].list); typeInfo_append(&(yyvsp[(1) - (4)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (4)].sym);;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 388 "bison/parser.y"
    {(yyval.list) = list_create();;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 389 "bison/parser.y"
    {(yyval.list) = list_create();;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 392 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_PTR); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 393 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_PTR); typeInfo_append(&(yyvsp[(3) - (3)].type), t); (yyval.type) = (yyvsp[(3) - (3)].type);;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 400 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (1)].list);;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 401 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (3)].list); /* TODO: Por ahora ignoramos los argumentos variadicos */ ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 404 "bison/parser.y"
    {(yyval.list) = list_create(); list_add((yyval.list), (yyvsp[(1) - (1)].sym));;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 405 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (3)].list); list_add((yyval.list), (yyvsp[(3) - (3)].sym));;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 408 "bison/parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); typeInfo_append(&(yyval.sym)->type, (yyvsp[(1) - (2)].type)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 409 "bison/parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); typeInfo_append(&(yyval.sym)->type, (yyvsp[(1) - (2)].type)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 412 "bison/parser.y"
    { (yyval.sym) = symbol_create(); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 413 "bison/parser.y"
    { (yyval.sym) = symbol_create(); (yyval.sym)->type = (yyvsp[(1) - (1)].type); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 420 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 421 "bison/parser.y"
    {typeInfo_append(&(yyvsp[(2) - (2)].type), (yyvsp[(1) - (2)].type)); (yyval.type) = (yyvsp[(2) - (2)].type);;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 424 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 425 "bison/parser.y"
    { (yyval.type) = (yyvsp[(2) - (2)].type); typeInfo_append(&(yyval.type), (yyvsp[(1) - (2)].type)); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 426 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 429 "bison/parser.y"
    { (yyval.type) = (yyvsp[(2) - (3)].type); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 430 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_ARRAY); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 431 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_ARRAY); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 432 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_FUNC); (yyval.type)->params = (yyvsp[(2) - (3)].list); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 433 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_FUNC); (yyval.type)->params = list_create(); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 434 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (4)].type); typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 435 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (4)].type); typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 436 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (4)].type); typeInfo* t = typeInfo_create(t_FUNC); t->params = (yyvsp[(3) - (4)].list); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 437 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); typeInfo* t = typeInfo_create(t_FUNC); t->params = list_create(); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 471 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 531 "bison/parser.y"
    {
                            typeInfo_append(&(yyvsp[(2) - (3)].sym)->type, (yyvsp[(1) - (3)].type));
                            symtable_functionDefinition(st, (yyvsp[(2) - (3)].sym));
                        ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 535 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 536 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 537 "bison/parser.y"
    { yyerrok; ;}
    break;



/* Line 1455 of yacc.c  */
#line 3213 "src/parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 548 "bison/parser.y"


int main(int argc, char *argv[]) {
    char* file = "tests.c";
    if (argc == 1) {
        printf("\nAl no especificar un archivo de lectura automaticamente sera leido el archivo tests.c\n");
    } else {
        file = argv[1];
    }
    
    if (argc > 2) {
        printf("\nUnicamente el primer archivo especificado sera analizado :)\n");
    }

    printf("\nArchivo %s\n", file);

    yydebug = 0;
	yyin=fopen(file,"r");

    initBaseTypes();
    st = symtable_create();

    printf("\n~~~~~ INICIO DETECCION DE ERRORES ~~~~~\n");
   	yyparse();
    printf("\n~~~~~ FIN DE DETECCION DE ERRORES ~~~~~\n");
	
    symtable_print(st);

    fclose(yyin);
    return 0; 
}

int yyerror(const char *msg) {
	printf("\nLinea %d: %s\n", yylineno, msg);
	return 0; 
}
