
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

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 23 "bison/parser.y"

    #include <stdio.h>
    #include <list.h>
    #include "symtable.h"
    #include <stringso.h>



/* Line 209 of yacc.c  */
#line 125 "src/parser.c"

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
#line 31 "bison/parser.y"

    char* strval;
    typeInfo* type;
    typeName typeName;
    symbol* sym;
    int intval;
    t_list* list;



/* Line 214 of yacc.c  */
#line 219 "src/parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 231 "src/parser.c"

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
#define YYLAST   1690

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  258
/* YYNRULES -- Number of states.  */
#define YYNSTATES  420

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
     222,   224,   226,   228,   230,   232,   234,   236,   238,   240,
     242,   244,   246,   250,   252,   256,   259,   262,   265,   268,
     271,   272,   274,   275,   277,   279,   283,   285,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   333,   338,
     341,   343,   345,   347,   350,   354,   357,   360,   361,   363,
     365,   369,   371,   375,   376,   378,   384,   391,   394,   395,
     397,   399,   403,   405,   409,   411,   413,   415,   417,   420,
     422,   424,   428,   434,   441,   448,   454,   459,   464,   465,
     467,   468,   470,   471,   473,   476,   480,   482,   485,   487,
     491,   493,   497,   500,   503,   504,   506,   508,   512,   514,
     517,   519,   522,   524,   528,   532,   536,   540,   543,   548,
     553,   558,   562,   564,   566,   570,   575,   578,   583,   584,
     586,   589,   591,   594,   598,   601,   603,   605,   607,   609,
     611,   613,   616,   617,   622,   623,   629,   630,   635,   636,
     641,   642,   644,   646,   649,   651,   653,   656,   657,   659,
     660,   664,   665,   672,   677,   684,   685,   692,   693,   702,
     703,   707,   716,   724,   728,   731,   734,   738,   740,   743,
     745,   747,   752,   755,   758,   761,   762,   764,   766
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     185,     0,    -1,    65,    -1,    62,    -1,    61,    -1,    63,
      -1,    64,    -1,    93,    -1,    93,    -1,    94,    -1,    95,
      -1,    67,   116,    68,    -1,    97,    -1,    98,    69,   116,
      70,    -1,    98,    67,    99,    68,    -1,    98,    71,    93,
      -1,    98,    39,    93,    -1,    98,    40,    -1,    98,    41,
      -1,    67,   153,    68,    72,   158,    73,    -1,    67,   153,
      68,    72,   158,    74,    73,    -1,   100,    -1,    -1,   114,
      -1,   100,    74,   114,    -1,    98,    -1,    40,   101,    -1,
      41,   101,    -1,    75,   102,    -1,    76,   102,    -1,    77,
     102,    -1,    78,   102,    -1,    79,   102,    -1,    80,   102,
      -1,    27,   101,    -1,    27,    67,   153,    68,    -1,   101,
      -1,    67,   153,    68,   102,    -1,   102,    -1,   103,    76,
     102,    -1,   103,    81,   102,    -1,   103,    82,   102,    -1,
     103,    -1,   104,    77,   103,    -1,   104,    78,   103,    -1,
     104,    -1,   105,    42,   104,    -1,   105,    43,   104,    -1,
     105,    -1,   106,    83,   105,    -1,   106,    84,   105,    -1,
     106,    44,   105,    -1,   106,    45,   105,    -1,   106,    -1,
     107,    46,   106,    -1,   107,    47,   106,    -1,   107,    -1,
     108,    75,   107,    -1,   108,    -1,   109,    85,   108,    -1,
     109,    -1,   110,    86,   109,    -1,   110,    -1,   111,    48,
     110,    -1,   111,    -1,   112,    49,   111,    -1,   112,    -1,
     112,    87,   116,    88,   113,    -1,   113,    -1,   101,   115,
     114,    -1,    89,    -1,    51,    -1,    52,    -1,    53,    -1,
      54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,
      59,    -1,    60,    -1,   114,    -1,   116,    74,   114,    -1,
     113,    -1,   119,   121,    90,    -1,     1,    90,    -1,   124,
     120,    -1,   125,   120,    -1,   139,   120,    -1,   140,   120,
      -1,    -1,   119,    -1,    -1,   122,    -1,   123,    -1,   122,
      74,   123,    -1,   141,    -1,   141,    89,   157,    -1,    31,
      -1,    14,    -1,    28,    -1,     3,    -1,    22,    -1,    34,
      -1,     6,    -1,    25,    -1,    20,    -1,    21,    -1,    15,
      -1,    11,    -1,    26,    -1,    33,    -1,    37,    -1,    38,
      -1,   126,    -1,   135,    -1,   156,    -1,   127,    93,    72,
     128,    73,    -1,   127,    72,   128,    73,    -1,   127,    93,
      -1,    29,    -1,    32,    -1,   129,    -1,   128,   129,    -1,
     130,   132,    90,    -1,   125,   131,    -1,   139,   131,    -1,
      -1,   130,    -1,   133,    -1,   132,    74,   133,    -1,   141,
      -1,   134,    88,   117,    -1,    -1,   141,    -1,    13,   136,
      72,   137,    73,    -1,    13,   136,    72,   137,    74,    73,
      -1,    13,    93,    -1,    -1,    93,    -1,   138,    -1,   137,
      74,   138,    -1,    96,    -1,   138,    89,   117,    -1,     7,
      -1,    23,    -1,    35,    -1,    19,    -1,   146,   142,    -1,
     142,    -1,    93,    -1,    67,   141,    68,    -1,   142,    69,
     144,   143,    70,    -1,   142,    69,    28,   144,   114,    70,
      -1,   142,    69,   147,    28,   114,    70,    -1,   142,    69,
     144,    76,    70,    -1,   142,    67,   148,    68,    -1,   142,
      67,   145,    68,    -1,    -1,   114,    -1,    -1,   147,    -1,
      -1,   152,    -1,    76,   144,    -1,    76,   144,   146,    -1,
     139,    -1,   147,   139,    -1,   149,    -1,   149,    74,    50,
      -1,   150,    -1,   149,    74,   150,    -1,   119,   141,    -1,
     119,   151,    -1,    -1,   154,    -1,    93,    -1,   152,    74,
      93,    -1,   130,    -1,   130,   154,    -1,   146,    -1,   146,
     155,    -1,   155,    -1,    67,   154,    68,    -1,    69,   143,
      70,    -1,    69,    76,    70,    -1,    67,   148,    68,    -1,
      67,    68,    -1,   155,    69,   143,    70,    -1,   155,    69,
      76,    70,    -1,   155,    67,   148,    68,    -1,   155,    67,
      68,    -1,    91,    -1,   114,    -1,    72,   158,    73,    -1,
      72,   158,    74,    73,    -1,   159,   157,    -1,   158,    74,
     159,   157,    -1,    -1,   160,    -1,   161,    89,    -1,   162,
      -1,   161,   162,    -1,    69,   117,    70,    -1,    71,    93,
      -1,   164,    -1,   168,    -1,   173,    -1,   175,    -1,   179,
      -1,   184,    -1,     1,    90,    -1,    -1,    93,    88,   165,
     163,    -1,    -1,     5,   166,   117,    88,   163,    -1,    -1,
       9,   167,    88,   163,    -1,    -1,    72,   169,   170,    73,
      -1,    -1,   171,    -1,   172,    -1,   171,   172,    -1,   118,
      -1,   163,    -1,   174,    90,    -1,    -1,   116,    -1,    -1,
      18,   176,   178,    -1,    -1,    30,   177,    67,   116,    68,
     163,    -1,    67,   116,    68,   163,    -1,    67,   116,    68,
     163,    12,   163,    -1,    -1,    36,   180,    67,   116,    68,
     163,    -1,    -1,    10,   181,   163,    36,    67,   116,    68,
      90,    -1,    -1,    16,   182,   183,    -1,    67,   174,    90,
     174,    90,   174,    68,   163,    -1,    67,   118,   174,    90,
     174,    68,   163,    -1,    17,    93,    90,    -1,     8,    90,
      -1,     4,    90,    -1,    24,   116,    90,    -1,   186,    -1,
     185,   186,    -1,   187,    -1,   118,    -1,   119,   141,   188,
     168,    -1,     1,    72,    -1,     1,    90,    -1,     1,    73,
      -1,    -1,   189,    -1,   118,    -1,   189,   118,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   116,   117,   118,   121,   123,   125,   135,
     136,   137,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   151,   152,   155,   156,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   172,   173,   176,   177,
     178,   179,   182,   183,   184,   187,   188,   189,   192,   193,
     194,   195,   196,   200,   201,   202,   205,   206,   209,   210,
     213,   214,   217,   218,   221,   222,   225,   226,   229,   230,
     233,   233,   233,   233,   233,   233,   234,   234,   234,   234,
     234,   237,   238,   241,   243,   251,   254,   255,   256,   257,
     260,   261,   264,   265,   268,   269,   272,   273,   276,   277,
     278,   279,   280,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   299,   300,   301,
     304,   304,   306,   307,   310,   312,   313,   316,   317,   320,
     321,   324,   325,   328,   329,   332,   333,   334,   337,   338,
     341,   342,   345,   346,   349,   350,   351,   354,   356,   357,
     360,   361,   362,   363,   364,   365,   366,   367,   372,   373,
     376,   377,   380,   381,   384,   385,   388,   389,   392,   393,
     396,   397,   400,   401,   404,   405,   408,   409,   412,   413,
     416,   417,   418,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   432,   434,   435,   436,   439,   440,   443,   444,
     447,   449,   450,   453,   454,   457,   458,   459,   460,   461,
     462,   463,   466,   466,   467,   467,   468,   468,   471,   471,
     473,   474,   477,   478,   481,   482,   485,   487,   488,   491,
     491,   492,   492,   495,   496,   499,   499,   500,   500,   501,
     501,   504,   505,   508,   509,   510,   511,   514,   515,   518,
     519,   522,   523,   524,   525,   528,   529,   532,   533
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
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "declaration_specifiers.opt", "init_declarator_list.opt",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
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
  "labeled_statement", "$@1", "$@2", "$@3", "compound_statement", "$@4",
  "block_item_list.opt", "block_item_list", "block_item",
  "expression_statement", "expression.opt", "selection_statement", "$@5",
  "$@6", "if_body", "iteration_statement", "$@7", "$@8", "$@9", "for_body",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list.opt", "declaration_list", 0
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
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   117,   118,   118,   119,   119,   119,   119,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   124,
     124,   124,   124,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   126,   126,
     127,   127,   128,   128,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   134,   134,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   139,   140,   141,   141,
     142,   142,   142,   142,   142,   142,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   154,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   156,   157,   157,   157,   158,   158,   159,   159,
     160,   161,   161,   162,   162,   163,   163,   163,   163,   163,
     163,   163,   165,   164,   166,   164,   167,   164,   169,   168,
     170,   170,   171,   171,   172,   172,   173,   174,   174,   176,
     175,   177,   175,   178,   178,   180,   179,   181,   179,   182,
     179,   183,   183,   184,   184,   184,   184,   185,   185,   186,
     186,   187,   187,   187,   187,   188,   188,   189,   189
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     2,     2,     2,
       0,     1,     0,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       1,     1,     1,     2,     3,     2,     2,     0,     1,     1,
       3,     1,     3,     0,     1,     5,     6,     2,     0,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     2,     1,
       1,     3,     5,     6,     6,     5,     4,     4,     0,     1,
       0,     1,     0,     1,     2,     3,     1,     2,     1,     3,
       1,     3,     2,     2,     0,     1,     1,     3,     1,     2,
       1,     2,     1,     3,     3,     3,     3,     2,     4,     4,
       4,     3,     1,     1,     3,     4,     2,     4,     0,     1,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     2,     0,     4,     0,     5,     0,     4,     0,     4,
       0,     1,     1,     2,     1,     1,     2,     0,     1,     0,
       3,     0,     6,     4,     6,     0,     6,     0,     8,     0,
       3,     8,     7,     3,     2,     2,     3,     1,     2,     1,
       1,     4,     2,     2,     2,     0,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   101,   104,   144,   109,   138,    99,   108,   147,
     106,   107,   102,   145,   105,   110,   100,   120,    98,   121,
     111,   103,   146,   112,   113,   192,   250,    92,    90,    90,
     114,     0,   115,    90,    90,   116,     0,   247,   249,   252,
     254,    85,     2,   137,     0,     0,   160,   150,     0,    93,
      94,     0,   149,     0,    91,    86,    87,     0,   119,    88,
      89,     1,   248,     0,     0,   166,   164,   161,    84,     0,
       0,     0,   257,    92,     0,     0,   162,   160,   148,   127,
       0,   122,   133,   127,     0,     7,   142,     0,   140,   151,
     165,   167,    95,    96,    85,     0,     0,     0,     4,     3,
       5,     6,     0,   198,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    12,    25,    36,    38,    42,    45,    48,
      53,    56,    58,    60,    62,    64,    66,    68,   193,    97,
     218,   251,   258,   176,   174,     0,     0,   168,   170,   163,
     160,   158,   161,   128,   125,   118,   123,     0,   129,     0,
     131,   126,     0,   135,     0,     0,     0,    34,     0,    26,
      27,    81,     0,   178,     0,     0,     0,     0,     0,   199,
       0,   201,    36,    28,    29,    30,    31,    32,    33,     0,
      17,    18,    22,     0,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,   172,
     180,   173,   175,   182,   157,   156,     0,     0,     0,     0,
     159,     0,     0,   133,   124,     0,   117,   136,   141,    83,
     143,     0,     0,    11,     0,     0,   180,   179,     0,     0,
     204,   194,   198,   196,   200,   202,    16,     0,    21,    23,
       0,    15,    69,    39,    40,    41,    43,    44,    46,    47,
      51,    52,    49,    50,    54,    55,    57,    59,    61,    63,
      65,     0,     0,     0,   214,     0,   216,   237,   239,     0,
     229,     0,   231,   235,     8,   228,   224,   225,   205,   206,
       0,     0,   222,   207,     0,   208,   209,   210,   187,     0,
       0,     0,     0,   181,     0,   158,   169,   171,   177,     0,
     155,   152,     0,   130,   132,    35,     0,    82,   198,    37,
     203,   195,     0,    14,     0,    13,     0,    85,   245,     0,
     244,     0,     0,     0,     0,     0,     0,     0,     0,   212,
     219,   223,   226,   186,   183,   185,   184,   191,     0,     0,
       0,   153,   154,     0,   197,    24,    67,     0,     0,     0,
       0,     0,   240,   243,     0,   230,   246,     0,     0,     0,
     190,   189,   188,    19,   198,     0,   217,   211,     0,   227,
       0,     0,     0,     0,   213,    20,   215,     0,     0,   227,
       0,     0,     0,     0,   227,     0,   233,   232,   236,     0,
       0,   227,     0,   238,     0,     0,   234,   242,     0,   241
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   110,   111,   112,    86,   113,   114,   257,   258,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   161,   196,   295,   240,    26,    73,    55,    48,
      49,    50,    28,    29,    30,    31,    80,    81,    82,   144,
     147,   148,   149,    32,    44,    87,    88,    33,    34,    64,
      52,   231,    66,   135,    53,    67,   309,   137,   138,   221,
     139,   164,   310,   223,    35,   129,   167,   168,   169,   170,
     171,   297,   298,   379,   339,   341,   299,   216,   300,   301,
     302,   303,   304,   305,   345,   347,   375,   306,   348,   342,
     343,   372,   307,    36,    37,    38,    74,    75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -308
static const yytype_int16 yypact[] =
{
     450,    40,  -308,  -308,  -308,  -308,   -17,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,    98,  1196,  1196,
    -308,    31,  -308,  1196,  1196,  -308,   404,  -308,  -308,  -308,
    -308,  -308,  -308,   -14,     6,    98,   103,  -308,    -7,    19,
    -308,   751,     8,    54,  -308,  -308,  -308,  1338,    44,  -308,
    -308,  -308,  -308,   -17,    81,  -308,   115,   103,  -308,    98,
     125,  1325,  -308,    98,   148,   832,  1079,    67,     8,  1338,
     292,  -308,    98,  1338,  1338,  -308,  -308,   -44,   162,  -308,
    -308,  -308,  -308,   164,  -308,  1470,  1498,  1498,  -308,  -308,
    -308,  -308,  1230,    63,  1526,  1526,  1526,  1526,  1526,  1526,
    -308,  -308,  -308,  -308,    84,   144,  -308,   104,   110,   223,
      -4,   224,   181,   178,   143,   220,   -22,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,   114,   208,   214,   199,  -308,   227,
     103,  1554,    92,  -308,  -308,  -308,  -308,   -40,  -308,   209,
     221,  -308,  1305,  -308,    96,  1526,  1230,  -308,  1230,  -308,
    -308,  -308,   149,    66,   242,  1526,   -17,   205,  1325,  -308,
     -38,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,   -17,
    -308,  -308,  1526,  1526,   -17,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  1526,  1526,  1526,  1526,
    1526,  1526,  1526,  1526,  1526,  1526,  1526,  1526,  1526,  1526,
    1526,  1526,  1526,  1526,  1526,  1526,   498,   945,  1582,  -308,
     140,  -308,  -308,    90,  -308,  -308,  1117,   -17,  1526,  1358,
    -308,   241,  1526,    98,  -308,  1526,  -308,  -308,   162,  -308,
    -308,   246,   248,  -308,  1526,  1012,    97,  -308,  1386,   249,
    -308,  -308,   188,  -308,  -308,  -308,  -308,   252,   254,  -308,
      76,  -308,  -308,  -308,  -308,  -308,   104,   104,   110,   110,
     223,   223,   223,   223,    -4,    -4,   224,   181,   178,   143,
     220,    10,   243,   244,  -308,   245,  -308,  -308,  -308,   -17,
    -308,  1526,  -308,  -308,   268,   257,  -308,  -308,  -308,  -308,
     259,   589,  -308,  -308,   247,  -308,  -308,  -308,  -308,   289,
     290,  1414,   291,    90,  1158,  1610,  -308,  -308,  -308,   293,
    -308,  -308,   294,  -308,  -308,   287,   287,  -308,    63,  -308,
    -308,  -308,  1325,  -308,  1526,  -308,  1526,  -308,  -308,  1526,
    -308,   272,   867,   299,   277,   301,   -30,   302,   304,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,   306,  1442,
     305,  -308,  -308,   211,  -308,  -308,  -308,   284,   867,   288,
     341,   670,  -308,  -308,  1526,  -308,  -308,  1526,  1526,   867,
    -308,  -308,  -308,  -308,   191,   867,  -308,  -308,   313,  1526,
     295,   154,   156,   157,  -308,  -308,  -308,  1526,   296,  1526,
     867,   867,   867,   166,  1526,   297,   369,  -308,  -308,   298,
     314,  1526,   867,  -308,   867,   316,  -308,  -308,   867,  -308
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -308,    -6,  -308,  -308,  -308,  -308,  -308,  -308,  -308,   141,
     -92,    86,    91,    37,    80,   180,   182,   179,   184,   185,
    -308,  -147,   -60,  -308,   -97,  -146,   -49,     9,   142,  -308,
    -308,   323,  -308,    60,  -308,  -308,   317,   -58,   -47,   315,
    -308,   167,  -308,  -308,  -308,  -308,   255,   -11,  -308,   -20,
     -43,  -214,   -53,  -308,   -63,   325,   -75,  -308,   177,  -308,
    -308,    50,  -111,  -192,  -308,  -162,    85,  -232,  -308,  -308,
     250,  -110,  -308,  -308,  -308,  -308,   340,  -308,  -308,  -308,
     120,  -308,  -307,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,  -308,  -308,   380,  -308,  -308,  -308
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -257
static const yytype_int16 yytable[] =
{
      43,   136,    72,    90,   312,   162,   253,    51,   239,    27,
      78,   128,   173,   174,   175,   176,   177,   178,   239,   249,
     332,    47,   146,   222,   141,    58,   132,   214,   313,   153,
     154,   165,   143,   166,   233,    65,   143,    54,    54,    47,
     204,   205,    54,    54,   244,    27,    83,    47,    42,    93,
     234,   254,   247,    93,   313,   163,    91,    85,  -139,   162,
     376,   162,   150,    47,   390,   215,    65,    47,    83,    83,
     133,   220,    83,    83,     4,    76,    47,    77,    63,   206,
     207,   230,   398,    68,   244,   134,   260,   228,   239,   324,
      13,    83,   405,    69,   146,   140,    42,   410,   336,     4,
     246,   360,    22,    57,   415,   263,   264,   265,   128,   163,
       4,   163,    39,    40,   219,    13,    84,    79,   281,    42,
     232,    45,   259,   179,   180,   181,    13,    22,    47,    65,
      41,    91,   165,   245,   166,   218,   262,   174,    22,    79,
      79,    83,    46,    79,    79,    83,   335,    83,    85,    89,
     244,   182,   332,   183,   220,   184,   329,   314,   230,   315,
     250,    42,    79,    42,   245,    45,   218,   296,   319,   237,
     364,    56,   322,   256,    46,    59,    60,    78,   261,    42,
     197,   217,   246,   218,   327,   198,   199,   200,   201,   366,
      46,    46,   239,   367,   346,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    42,   241,   217,   242,   218,
     294,    47,    79,   150,    47,    94,    79,   243,    79,   174,
     130,   318,   400,   244,   401,   402,   134,    47,   244,   212,
     244,   244,   370,   195,   409,   134,   157,   159,   160,   358,
     244,   270,   271,   272,   273,   172,   172,   172,   172,   172,
     172,   155,   296,    71,   134,   230,   210,   165,   386,   166,
     165,   331,   166,   211,   395,   202,   203,   174,   213,   394,
     208,   209,   128,   226,   365,   396,   224,   391,   251,   252,
     392,   393,   225,   344,   383,   384,   266,   267,   274,   275,
     406,   407,   408,   268,   269,   294,   172,   235,     3,     4,
     403,   227,   416,     5,   417,     6,   172,     8,   419,  -134,
     248,   321,    10,    11,   325,    13,   326,    14,    15,   330,
     333,    17,   389,   134,    19,    20,    21,    22,   334,    23,
      24,   244,   350,   337,   338,   340,   294,   352,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   349,   353,   354,   328,
     368,   356,   294,   361,   362,   145,   371,   373,   374,   377,
     172,   378,   385,   294,   380,   382,   172,   388,   387,   294,
     397,   412,   414,    25,   418,   399,   404,   411,   413,   172,
     276,   278,    92,   277,   294,   294,   294,   279,   151,   280,
     323,   152,   142,   317,    61,     1,   294,     2,   294,   238,
       3,     4,   294,   363,   131,     5,    62,     6,     7,     8,
     255,   351,     0,     9,    10,    11,    12,    13,     0,    14,
      15,     0,    16,    17,     0,    18,    19,    20,    21,    22,
       0,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     1,   172,     2,     0,     0,     3,     4,     0,     0,
       0,     5,     0,     6,     7,     8,     0,     0,     0,     9,
      10,    11,    12,    13,     0,    14,    15,   172,    16,    17,
     172,    18,    19,    20,    21,    22,     0,    23,    24,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,   282,
     172,     2,   283,   284,     3,     4,   285,   286,   287,     5,
       0,     6,     7,     8,   288,   289,   290,     9,    10,    11,
      12,    13,   291,    14,    15,    95,    16,    17,   292,    18,
      19,    20,    21,    22,   293,    23,    24,     0,    96,    97,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,   101,    42,     0,   102,     0,     0,     0,     0,
     130,  -220,     0,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -227,    25,
     282,     0,     2,   283,   284,     3,     4,   285,   286,   287,
       5,     0,     6,     7,     8,   288,   289,   290,     9,    10,
      11,    12,    13,   291,    14,    15,    95,    16,    17,   292,
      18,    19,    20,    21,    22,   293,    23,    24,     0,    96,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,   101,    42,     0,   102,     0,     0,     0,
       0,   130,  -221,     0,   104,   105,   106,   107,   108,   109,
       0,    70,     0,     2,     0,     0,     3,     4,     0,  -227,
      25,     5,     0,     6,     7,     8,     0,     0,     0,     9,
      10,    11,    12,    13,     0,    14,    15,    95,    16,    17,
       0,    18,    19,    20,    21,    22,     0,    23,    24,     0,
      96,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,    99,   100,   101,    42,     0,   102,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,     0,    70,     0,     2,     0,     0,     3,     4,     0,
    -227,    25,     5,     0,     6,     7,     8,     0,     0,     0,
       9,    10,    11,    12,    13,     0,    14,    15,     0,    16,
      17,     0,    18,    19,    20,    21,    22,     0,    23,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -255,     0,   -96,     0,     0,     0,     0,
       0,     0,     0,    70,     0,     2,     0,     0,     3,     4,
      71,   -96,    25,     5,     0,     6,     7,     8,     0,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,     0,
      16,    17,     0,    18,    19,    20,    21,    22,   369,    23,
      24,   283,   284,     0,     0,   285,   286,   287,     0,     0,
       0,     0,     0,   288,   289,   290,     0,     0,     0,     0,
       0,   291,     0,     0,    95,     0,     0,   292,     0,     0,
       0,     0,     0,   293,  -256,     0,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,    98,    99,
     100,   101,    42,     0,   102,     0,     0,     0,     0,   130,
       0,     0,   104,   105,   106,   107,   108,   109,     2,     0,
       0,     3,     4,     0,     0,     0,     5,  -227,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,     0,    16,    17,     0,    18,    19,    20,    21,
      22,     0,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,   217,   308,   218,     2,     0,     0,     3,     4,
       0,    46,     0,     5,     0,     6,     7,     8,     0,     0,
       0,     9,    10,    11,    12,    13,    25,    14,    15,     0,
      16,    17,     0,    18,    19,    20,    21,    22,     0,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   245,
     308,   218,     2,     0,     0,     3,     4,     0,    46,     0,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,    25,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,     0,    23,    24,     0,     0,
       2,     0,     0,     3,     4,     0,     0,     0,     5,     0,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,    42,    16,    17,     0,    18,    19,
      20,    21,    22,     0,    23,    24,     0,     0,     0,     0,
       0,     2,     0,     0,     3,     4,     0,   316,     0,     5,
      25,     6,     7,     8,     0,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,     0,    16,    17,     0,    18,
      19,    20,    21,    22,     0,    23,    24,     0,     0,     2,
       0,     0,     3,     4,     0,     0,     0,     5,    25,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,     0,    16,    17,   357,    18,    19,    20,
      21,    22,     0,    23,    24,     0,     3,     4,     0,     0,
       0,     5,     0,     6,     0,     8,     0,     0,     0,    25,
      10,    11,     0,    13,     0,    14,    15,    95,     0,    17,
       0,     0,    19,    20,    21,    22,     0,    23,    24,     0,
      96,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,    98,    99,   100,   101,    42,     0,   102,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,     3,     4,     0,     0,     0,     5,     0,     6,     0,
       8,    25,     0,     0,     0,    10,    11,     0,    13,     0,
      14,    15,     0,     0,    17,     0,     0,    19,    20,    21,
      22,     0,    23,    24,     3,     4,     0,     0,     0,     5,
       0,     6,    95,     8,     0,     0,     0,     0,    10,    11,
       0,    13,     0,    14,    15,    96,    97,    17,     0,     0,
      19,    20,    21,    22,     0,    23,    24,     0,   236,     0,
       0,     0,     0,     0,     0,    95,    98,    99,   100,   101,
      42,     0,   102,     0,     0,     0,    25,   103,    96,    97,
     104,   105,   106,   107,   108,   109,     0,     0,     0,     0,
       0,     0,     0,    95,     0,     0,     0,     0,     0,    98,
      99,   100,   101,    42,     0,   102,    96,    97,   320,    25,
       0,     0,     0,   104,   105,   106,   107,   108,   109,     0,
       0,    95,     0,     0,     0,     0,     0,    98,    99,   100,
     101,    42,     0,   102,    96,    97,     0,     0,   328,     0,
       0,   104,   105,   106,   107,   108,   109,     0,     0,    95,
       0,     0,     0,     0,     0,    98,    99,   100,   101,    42,
       0,   102,    96,    97,   355,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,     0,     0,    95,     0,     0,
       0,     0,     0,    98,    99,   100,   101,    42,     0,   102,
      96,    97,   381,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,     0,     0,    95,     0,     0,     0,     0,
       0,    98,    99,   100,   101,    42,     0,   156,    96,    97,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,     0,     0,    95,     0,     0,     0,     0,     0,    98,
      99,   100,   101,    42,     0,   158,    96,    97,     0,     0,
       0,     0,     0,   104,   105,   106,   107,   108,   109,     0,
       0,    95,     0,     0,     0,     0,     0,    98,    99,   100,
     101,    42,     0,   102,    96,    97,     0,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,     0,     0,    95,
       0,     0,     0,     0,     0,    98,    99,   100,   101,    42,
       0,   102,    96,    97,     0,     0,     0,     0,     0,   104,
     229,   106,   107,   108,   109,     0,     0,    95,     0,     0,
       0,     0,     0,    98,    99,   100,   101,    42,     0,   102,
      96,    97,     0,     0,     0,     0,     0,   104,   311,   106,
     107,   108,   109,     0,     0,     0,     0,     0,     0,     0,
       0,    98,    99,   100,   101,    42,     0,   102,     0,     0,
       0,     0,     0,     0,     0,   104,   359,   106,   107,   108,
     109
};

static const yytype_int16 yycheck[] =
{
       6,    76,    51,    66,   218,   102,   168,    27,   155,     0,
      53,    71,   104,   105,   106,   107,   108,   109,   165,   165,
     252,    27,    80,   134,    77,    31,    75,    49,   220,    73,
      74,    69,    79,    71,    74,    46,    83,    28,    29,    45,
      44,    45,    33,    34,    74,    36,    57,    53,    65,    69,
      90,    89,   163,    73,   246,   102,    67,    63,    72,   156,
      90,   158,    82,    69,   371,    87,    77,    73,    79,    80,
      76,   134,    83,    84,     7,    67,    82,    69,    72,    83,
      84,   141,   389,    90,    74,    76,   183,   140,   235,   235,
      23,   102,   399,    74,   152,    28,    65,   404,    88,     7,
     163,   315,    35,    72,   411,   197,   198,   199,   168,   156,
       7,   158,    72,    73,   134,    23,    72,    57,   215,    65,
      28,    67,   182,    39,    40,    41,    23,    35,   134,   140,
      90,   142,    69,    67,    71,    69,   196,   229,    35,    79,
      80,   152,    76,    83,    84,   156,    70,   158,   154,    68,
      74,    67,   384,    69,   217,    71,   248,    67,   218,    69,
     166,    65,   102,    65,    67,    67,    69,   216,   228,    73,
     332,    29,   232,   179,    76,    33,    34,   220,   184,    65,
      76,    67,   245,    69,   244,    81,    82,    77,    78,   336,
      76,    76,   339,   339,   291,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    65,   156,    67,   158,    69,
     216,   217,   152,   233,   220,    90,   156,    68,   158,   311,
      72,   227,    68,    74,    68,    68,   217,   233,    74,    86,
      74,    74,   342,    89,    68,   226,    95,    96,    97,   314,
      74,   204,   205,   206,   207,   104,   105,   106,   107,   108,
     109,    89,   301,    89,   245,   315,    75,    69,   368,    71,
      69,    73,    71,    85,    73,    42,    43,   359,    48,   379,
      46,    47,   332,    74,   334,   385,    68,   374,    73,    74,
     377,   378,    68,   289,    73,    74,   200,   201,   208,   209,
     400,   401,   402,   202,   203,   301,   155,    88,     6,     7,
     397,    74,   412,    11,   414,    13,   165,    15,   418,    88,
      68,    70,    20,    21,    68,    23,    68,    25,    26,    70,
      68,    29,   371,   314,    32,    33,    34,    35,    74,    37,
      38,    74,    73,    90,    90,    90,   342,    90,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,    88,    68,    68,    72,
      88,    70,   368,    70,    70,    73,    67,    90,    67,    67,
     229,    67,    88,   379,    68,    70,   235,    36,    90,   385,
      67,    12,    68,    91,    68,    90,    90,    90,    90,   248,
     210,   212,    69,   211,   400,   401,   402,   213,    83,   214,
     233,    84,    77,   226,     0,     1,   412,     3,   414,   154,
       6,     7,   418,   328,    74,    11,    36,    13,    14,    15,
     170,   301,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,   311,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,   336,    28,    29,
     339,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,     1,
     359,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    40,    41,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,
      -1,    72,    73,    -1,    75,    76,    77,    78,    79,    80,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,    -1,    90,
      91,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    -1,     1,    -1,     3,    -1,    -1,     6,     7,    -1,
      90,    91,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,    -1,     6,     7,
      89,    90,    91,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,     1,    37,
      38,     4,     5,    -1,    -1,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    27,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    72,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    76,    77,    78,    79,    80,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    90,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    67,    68,    69,     3,    -1,    -1,     6,     7,
      -1,    76,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    91,    25,    26,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,     3,    -1,    -1,     6,     7,    -1,    76,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    91,    25,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    65,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    -1,    50,    -1,    11,
      91,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    -1,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    91,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    29,    68,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,    91,
      20,    21,    -1,    23,    -1,    25,    26,    27,    -1,    29,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,
      15,    91,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    -1,    -1,    29,    -1,    -1,    32,    33,    34,
      35,    -1,    37,    38,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    27,    15,    -1,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    40,    41,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    61,    62,    63,    64,
      65,    -1,    67,    -1,    -1,    -1,    91,    72,    40,    41,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    -1,    67,    40,    41,    70,    91,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    67,    40,    41,    -1,    -1,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    67,    40,    41,    70,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    -1,    67,
      40,    41,    70,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    -1,    67,    40,    41,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    -1,    67,    40,    41,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    67,    40,    41,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    67,    40,    41,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    -1,    67,
      40,    41,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     6,     7,    11,    13,    14,    15,    19,
      20,    21,    22,    23,    25,    26,    28,    29,    31,    32,
      33,    34,    35,    37,    38,    91,   118,   119,   124,   125,
     126,   127,   135,   139,   140,   156,   185,   186,   187,    72,
      73,    90,    65,    93,   136,    67,    76,    93,   121,   122,
     123,   141,   142,   146,   119,   120,   120,    72,    93,   120,
     120,     0,   186,    72,   141,   139,   144,   147,    90,    74,
       1,    89,   118,   119,   188,   189,    67,    69,   142,   125,
     128,   129,   130,   139,    72,    93,    96,   137,   138,    68,
     146,   139,   123,   141,    90,    27,    40,    41,    61,    62,
      63,    64,    67,    72,    75,    76,    77,    78,    79,    80,
      93,    94,    95,    97,    98,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   157,
      72,   168,   118,    93,   119,   145,   148,   149,   150,   152,
      28,   144,   147,   130,   131,    73,   129,   132,   133,   134,
     141,   131,   128,    73,    74,    89,    67,   101,    67,   101,
     101,   114,   116,   130,   153,    69,    71,   158,   159,   160,
     161,   162,   101,   102,   102,   102,   102,   102,   102,    39,
      40,    41,    67,    69,    71,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    89,   115,    76,    81,    82,
      77,    78,    42,    43,    44,    45,    83,    84,    46,    47,
      75,    85,    86,    48,    49,    87,   169,    67,    69,   141,
     146,   151,   154,   155,    68,    68,    74,    74,   144,    76,
     114,   143,    28,    74,    90,    88,    73,    73,   138,   113,
     117,   153,   153,    68,    74,    67,   146,   154,    68,   117,
      93,    73,    74,   157,    89,   162,    93,    99,   100,   114,
     116,    93,   114,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   106,   106,   107,   108,   109,   110,
     111,   116,     1,     4,     5,     8,     9,    10,    16,    17,
      18,    24,    30,    36,    93,   116,   118,   163,   164,   168,
     170,   171,   172,   173,   174,   175,   179,   184,    68,   148,
     154,    76,   143,   155,    67,    69,    50,   150,    93,   114,
      70,    70,   114,   133,   117,    68,    68,   114,    72,   102,
      70,    73,   159,    68,    74,    70,    88,    90,    90,   166,
      90,   167,   181,   182,    93,   176,   116,   177,   180,    88,
      73,   172,    90,    68,    68,    70,    70,    68,   148,    76,
     143,    70,    70,   158,   157,   114,   113,   117,    88,     1,
     163,    67,   183,    90,    67,   178,    90,    67,    67,   165,
      68,    70,    70,    73,    74,    88,   163,    90,    36,   118,
     174,   116,   116,   116,   163,    73,   163,    67,   174,    90,
      68,    68,    68,   116,    90,   174,   163,   163,   163,    68,
     174,    90,    12,    90,    68,   174,   163,   163,    68,   163
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
#line 114 "bison/parser.y"
    { (yyval.strval) = (yyvsp[(1) - (1)].strval); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 116 "bison/parser.y"
    { (yyval.type) = typeChar;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 117 "bison/parser.y"
    { (yyval.type) = typeInt; ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 118 "bison/parser.y"
    { (yyval.type) = typeDouble; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 121 "bison/parser.y"
    {(yyval.type) = typeString;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 126 "bison/parser.y"
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
#line 135 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 136 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 137 "bison/parser.y"
    { (yyval.type) = (yyvsp[(2) - (3)].type); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 140 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 141 "bison/parser.y"
    {(yyval.type) = reduceArray((yyvsp[(1) - (4)].type), (yyvsp[(3) - (4)].type));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 142 "bison/parser.y"
    {(yyval.type) = reduceFunction((yyvsp[(1) - (4)].type), (yyvsp[(3) - (4)].list));;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 145 "bison/parser.y"
    {(yyval.type) = reduceIncrement((yyvsp[(1) - (2)].type));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 146 "bison/parser.y"
    {(yyval.type) = reduceIncrement((yyvsp[(1) - (2)].type));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 147 "bison/parser.y"
    { /* No consideramos los literales compuestos */ ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 148 "bison/parser.y"
    { /* No consideramos los literales compuestos */ ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 151 "bison/parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 152 "bison/parser.y"
    { (yyval.list) = list_create(); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 155 "bison/parser.y"
    { (yyval.list) = list_create(); list_add((yyval.list), (yyvsp[(1) - (1)].type)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 156 "bison/parser.y"
    { (yyval.list) = (yyvsp[(1) - (3)].list); list_add((yyval.list), (yyvsp[(3) - (3)].type)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 159 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 160 "bison/parser.y"
    {(yyval.type) = reduceIncrement((yyvsp[(2) - (2)].type));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 161 "bison/parser.y"
    {(yyval.type) = reduceIncrement((yyvsp[(2) - (2)].type));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 168 "bison/parser.y"
    {(yyval.type) = typeInt;;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 169 "bison/parser.y"
    {(yyval.type) = typeInt;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 172 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 176 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 182 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 187 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 192 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 200 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 205 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 209 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 213 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 217 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 221 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 225 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 229 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 237 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 238 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (3)].type);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 244 "bison/parser.y"
    {
                    void agregarEspecificador(void* elem){
                        typeInfo_append(&((symbol*)elem)->type, (yyvsp[(1) - (3)].type));
                    }
                    list_iterate((yyvsp[(2) - (3)].list), agregarEspecificador);
                    symtable_addSymbols(st, (yyvsp[(2) - (3)].list));
                ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 251 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 254 "bison/parser.y"
    {(yyval.type) = (yyvsp[(2) - (2)].type);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 255 "bison/parser.y"
    {(yyvsp[(2) - (2)].type)->type = (yyvsp[(1) - (2)].typeName); (yyval.type) = (yyvsp[(2) - (2)].type);;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 256 "bison/parser.y"
    {(yyval.type) = (yyvsp[(2) - (2)].type);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 257 "bison/parser.y"
    {(yyval.type) = (yyvsp[(2) - (2)].type);;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 260 "bison/parser.y"
    {(yyval.type) = typeInfo_create(t_ERROR);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 261 "bison/parser.y"
    {(yyval.type) = (yyvsp[(1) - (1)].type);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 264 "bison/parser.y"
    {(yyval.list) = list_create();;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 265 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (1)].list);;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 268 "bison/parser.y"
    {(yyval.list) = list_create(); list_add((yyval.list), (yyvsp[(1) - (1)].sym));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 269 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (3)].list); list_add((yyval.list), (yyvsp[(3) - (3)].sym));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 272 "bison/parser.y"
    {(yyval.sym) = (yyvsp[(1) - (1)].sym);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 273 "bison/parser.y"
    {(yyval.sym) = (yyvsp[(1) - (3)].sym);;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 283 "bison/parser.y"
    {(yyval.typeName) = t_VOID;;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 284 "bison/parser.y"
    {(yyval.typeName) = t_CHAR;;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 286 "bison/parser.y"
    {(yyval.typeName) = t_INT;;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 288 "bison/parser.y"
    {(yyval.typeName) = t_FLOAT;;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 289 "bison/parser.y"
    {(yyval.typeName) = t_DOUBLE;;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 337 "bison/parser.y"
    {(yyval.strval) = NULL;;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 338 "bison/parser.y"
    {(yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 356 "bison/parser.y"
    {typeInfo_append(&(yyvsp[(2) - (2)].sym)->type, (yyvsp[(1) - (2)].type)); (yyval.sym) = (yyvsp[(2) - (2)].sym);;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 357 "bison/parser.y"
    {(yyval.sym) = (yyvsp[(1) - (1)].sym);;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 360 "bison/parser.y"
    {(yyval.sym) = symbol_create((yyvsp[(1) - (1)].strval)); (yyval.sym)->identifier = string_duplicate((yyvsp[(1) - (1)].strval));;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 361 "bison/parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 362 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (5)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (5)].sym);;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 363 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (6)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (6)].sym);;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 364 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (6)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (6)].sym);;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 365 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (5)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (5)].sym);;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 366 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_FUNC); t->params = (yyvsp[(3) - (4)].list); typeInfo_append(&(yyvsp[(1) - (4)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (4)].sym);;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 367 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_FUNC); t->params = (yyvsp[(3) - (4)].list); typeInfo_append(&(yyvsp[(1) - (4)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (4)].sym);;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 380 "bison/parser.y"
    {(yyval.list) = list_create();;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 384 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_PTR); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 385 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_PTR); typeInfo_append(&(yyvsp[(3) - (3)].type), t); (yyval.type) = (yyvsp[(3) - (3)].type);;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 392 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (1)].list);;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 393 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (3)].list); /* TODO: Por ahora ignoramos variargs */ ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 396 "bison/parser.y"
    {(yyval.list) = list_create(); list_add((yyval.list), (yyvsp[(1) - (1)].sym));;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 397 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (3)].list); list_add((yyval.list), (yyvsp[(3) - (3)].sym));;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 400 "bison/parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); typeInfo_append(&(yyval.sym)->type, (yyvsp[(1) - (2)].type)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 401 "bison/parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); typeInfo_append(&(yyval.sym)->type, (yyvsp[(1) - (2)].type)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 404 "bison/parser.y"
    { (yyval.sym) = symbol_create(); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 405 "bison/parser.y"
    { (yyval.sym) = symbol_create(); (yyval.sym)->type = (yyvsp[(1) - (1)].type); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 416 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 417 "bison/parser.y"
    { (yyval.type) = (yyvsp[(2) - (2)].type); typeInfo_append(&(yyval.type), (yyvsp[(1) - (2)].type)); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 418 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 421 "bison/parser.y"
    { (yyval.type) = (yyvsp[(2) - (3)].type); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 422 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_ARRAY); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 423 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_ARRAY); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 424 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_FUNC); (yyval.type)->params = (yyvsp[(2) - (3)].list); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 425 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_FUNC); (yyval.type)->params = list_create(); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 426 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (4)].type); typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 427 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (4)].type); typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 428 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (4)].type); typeInfo* t = typeInfo_create(t_FUNC); t->params = (yyvsp[(3) - (4)].list); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 429 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); typeInfo* t = typeInfo_create(t_FUNC); t->params = list_create(); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 459 "bison/parser.y"
    { printf("Linea %i: Sentencia de expresion\n", yylineno); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 462 "bison/parser.y"
    { printf("Linea %i: Sentencia de salto\n", yylineno); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 463 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 466 "bison/parser.y"
    { printf("Linea %i: Sentencia etiquetada\n", yylineno); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 467 "bison/parser.y"
    { printf("Linea %i: Sentencia etiquetada\n", yylineno); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 468 "bison/parser.y"
    { printf("Linea %i: Sentencia etiquetada\n", yylineno); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 471 "bison/parser.y"
    { printf("Linea %i: Sentencia Compuesta\n", yylineno); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 491 "bison/parser.y"
    { printf("Linea %i: Sentencia de seleccion\n", yylineno); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 492 "bison/parser.y"
    { printf("Linea %i: Sentencia de seleccion\n", yylineno); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 499 "bison/parser.y"
    { printf("Linea %i: Sentencia de iteracion\n", yylineno); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 500 "bison/parser.y"
    { printf("Linea %i: Sentencia de iteracion\n", yylineno); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 501 "bison/parser.y"
    { printf("Linea %i: Sentencia de iteracion\n", yylineno); ;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 523 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 524 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 525 "bison/parser.y"
    { yyerrok; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2897 "src/parser.c"
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
#line 536 "bison/parser.y"


int main(int argc, char *argv[]) {
    yydebug = 0;
	yyin=fopen(argv[1],"r");

    initBaseTypes();
    st = symtable_create();

   	yyparse();
	
    symtable_print(st);

    fclose(yyin);
    return 0; 
}

int yyerror(const char *msg) {
	printf("Linea %d: %s\n",yylineno,msg);
	return 0; 
}
