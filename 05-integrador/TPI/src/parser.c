
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
#define YYLAST   1677

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  259
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
     745,   747,   748,   754,   757,   760,   763,   764,   766,   768
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
     185,   186,    -1,   187,    -1,   118,    -1,    -1,   119,   141,
     189,   188,   168,    -1,     1,    72,    -1,     1,    90,    -1,
       1,    73,    -1,    -1,   190,    -1,   118,    -1,   190,   118,
      -1
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
     260,   261,   264,   265,   268,   269,   272,   286,   289,   290,
     291,   292,   293,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   312,   313,   314,
     317,   317,   319,   320,   323,   325,   326,   329,   330,   333,
     334,   337,   338,   341,   342,   345,   346,   347,   350,   351,
     354,   355,   358,   359,   362,   363,   364,   367,   369,   370,
     373,   374,   375,   376,   377,   378,   379,   380,   385,   386,
     389,   390,   393,   394,   397,   398,   401,   402,   405,   406,
     409,   410,   413,   414,   417,   418,   421,   422,   425,   426,
     429,   430,   431,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   445,   447,   448,   449,   452,   453,   456,   457,
     460,   462,   463,   466,   467,   470,   471,   472,   473,   474,
     475,   476,   479,   479,   480,   480,   481,   481,   484,   484,
     486,   487,   490,   491,   494,   495,   498,   500,   501,   504,
     504,   505,   505,   508,   509,   512,   512,   513,   513,   514,
     514,   517,   518,   521,   522,   523,   524,   527,   528,   531,
     532,   536,   535,   540,   541,   542,   545,   546,   549,   550
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
  "function_definition", "$@10", "declaration_list.opt",
  "declaration_list", 0
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
     186,   188,   187,   187,   187,   187,   189,   189,   190,   190
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
       1,     0,     5,     2,     2,     2,     0,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   101,   104,   144,   109,   138,    99,   108,   147,
     106,   107,   102,   145,   105,   110,   100,   120,    98,   121,
     111,   103,   146,   112,   113,   192,   250,    92,    90,    90,
     114,     0,   115,    90,    90,   116,     0,   247,   249,   253,
     255,    85,     2,   137,     0,     0,   160,   150,     0,    93,
      94,     0,   149,     0,    91,    86,    87,     0,   119,    88,
      89,     1,   248,     0,     0,   166,   164,   161,    84,     0,
       0,     0,   258,    92,   251,     0,   162,   160,   148,   127,
       0,   122,   133,   127,     0,     7,   142,     0,   140,   151,
     165,   167,    95,    96,    85,     0,     0,     0,     4,     3,
       5,     6,     0,   198,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    12,    25,    36,    38,    42,    45,    48,
      53,    56,    58,    60,    62,    64,    66,    68,   193,    97,
       0,   259,   176,   174,     0,     0,   168,   170,   163,   160,
     158,   161,   128,   125,   118,   123,     0,   129,     0,   131,
     126,     0,   135,     0,     0,     0,    34,     0,    26,    27,
      81,     0,   178,     0,     0,     0,     0,     0,   199,     0,
     201,    36,    28,    29,    30,    31,    32,    33,     0,    17,
      18,    22,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   252,     0,   158,   172,
     180,   173,   175,   182,   157,   156,     0,     0,     0,     0,
     159,     0,     0,   133,   124,     0,   117,   136,   141,    83,
     143,     0,     0,    11,     0,     0,   180,   179,     0,     0,
     204,   194,   198,   196,   200,   202,    16,     0,    21,    23,
       0,    15,    69,    39,    40,    41,    43,    44,    46,    47,
      51,    52,    49,    50,    54,    55,    57,    59,    61,    63,
      65,     0,     0,   187,     0,     0,     0,     0,   181,     0,
     158,   169,   171,   177,     0,   155,   152,     0,   130,   132,
      35,     0,    82,   198,    37,   203,   195,     0,    14,     0,
      13,     0,     0,     0,   214,     0,   216,   237,   239,     0,
     229,     0,   231,   235,     8,   228,   224,   225,   205,   206,
       0,     0,   222,   207,     0,   208,   209,   210,   186,   183,
     185,   184,   191,     0,     0,     0,   153,   154,     0,   197,
      24,    67,    85,   245,     0,   244,     0,     0,     0,     0,
       0,     0,     0,     0,   212,   219,   223,   226,   190,   189,
     188,    19,   198,     0,     0,     0,     0,     0,   240,   243,
       0,   230,   246,     0,     0,     0,    20,     0,   217,   211,
       0,   227,     0,     0,     0,     0,   213,   215,     0,     0,
     227,     0,     0,     0,     0,   227,     0,   233,   232,   236,
       0,     0,   227,     0,   238,     0,     0,   234,   242,     0,
     241
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   110,   111,   112,    86,   113,   114,   257,   258,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   160,   195,   325,   240,    26,    73,    55,    48,
      49,    50,    28,    29,    30,    31,    80,    81,    82,   143,
     146,   147,   148,    32,    44,    87,    88,    33,    34,    64,
      52,   231,    66,   134,    53,    67,   284,   136,   137,   221,
     138,   163,   285,   223,    35,   129,   166,   167,   168,   169,
     170,   327,   328,   385,   354,   356,   329,   282,   330,   331,
     332,   333,   334,   335,   360,   362,   381,   336,   363,   357,
     358,   378,   337,    36,    37,    38,   130,    74,    75
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -333
static const yytype_int16 yypact[] =
{
     819,   -39,  -333,  -333,  -333,  -333,   -42,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,    -1,  1183,  1183,
    -333,    67,  -333,  1183,  1183,  -333,   405,  -333,  -333,  -333,
    -333,  -333,  -333,    56,    61,    -1,    42,  -333,   -19,    19,
    -333,   696,   113,   140,  -333,  -333,  -333,  1325,    81,  -333,
    -333,  -333,  -333,   -42,    75,  -333,    82,    42,  -333,    -1,
      93,  1312,  -333,    -1,  -333,   777,  1066,   106,   113,  1325,
     283,  -333,    -1,  1325,  1325,  -333,  -333,    32,    72,  -333,
    -333,  -333,  -333,    76,  -333,  1457,  1485,  1485,  -333,  -333,
    -333,  -333,  1217,   -31,  1513,  1513,  1513,  1513,  1513,  1513,
    -333,  -333,  -333,  -333,    77,   435,  -333,   137,   138,   236,
     -29,   245,   131,   143,   151,   195,   -27,  -333,  -333,  -333,
     175,  -333,  -333,    97,   193,   198,   189,  -333,   196,    42,
    1541,   107,  -333,  -333,  -333,  -333,   -55,  -333,   192,   200,
    -333,  1292,  -333,    29,  1513,  1217,  -333,  1217,  -333,  -333,
    -333,    83,   109,   207,  1513,   -42,   227,  1312,  -333,    21,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,   -42,  -333,
    -333,  1513,  1513,   -42,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,  -333,  1513,  1513,  1513,  1513,  1513,
    1513,  1513,  1513,  1513,  1513,  1513,  1513,  1513,  1513,  1513,
    1513,  1513,  1513,  1513,  1513,  -333,  -333,   932,  1569,  -333,
      71,  -333,  -333,   169,  -333,  -333,  1104,   -42,  1513,  1345,
    -333,   213,  1513,    -1,  -333,  1513,  -333,  -333,    72,  -333,
    -333,   218,   225,  -333,  1513,   999,   187,  -333,  1373,   235,
    -333,  -333,   177,  -333,  -333,  -333,  -333,   239,   221,  -333,
      80,  -333,  -333,  -333,  -333,  -333,   137,   137,   138,   138,
     236,   236,   236,   236,   -29,   -29,   245,   131,   143,   151,
     195,    37,   443,  -333,   246,   251,  1401,   263,   169,  1145,
    1597,  -333,  -333,  -333,   264,  -333,  -333,   267,  -333,  -333,
     266,   266,  -333,   -31,  -333,  -333,  -333,  1312,  -333,  1513,
    -333,  1513,   249,   253,  -333,   256,  -333,  -333,  -333,   -42,
    -333,  1513,  -333,  -333,   259,   274,  -333,  -333,  -333,  -333,
     268,   534,  -333,  -333,   260,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,  -333,   281,  1429,   282,  -333,  -333,   237,  -333,
    -333,  -333,  -333,  -333,  1513,  -333,   265,   854,   287,   269,
     291,   -12,   293,   294,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,   186,   275,   854,   272,   328,   615,  -333,  -333,
    1513,  -333,  -333,  1513,  1513,   854,  -333,   854,  -333,  -333,
     298,  1513,   276,    95,   155,   156,  -333,  -333,  1513,   277,
    1513,   854,   854,   854,   167,  1513,   279,   358,  -333,  -333,
     285,   308,  1513,   854,  -333,   854,   309,  -333,  -333,   854,
    -333
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -333,    -6,  -333,  -333,  -333,  -333,  -333,  -333,  -333,    -9,
     -77,   123,   128,    68,   124,   171,   168,   173,   170,   174,
    -333,  -144,   -58,  -333,   -99,  -146,   -49,     8,   211,  -333,
    -333,   317,  -333,    24,  -333,  -333,   304,   -66,   -33,   307,
    -333,   158,  -333,  -333,  -333,  -333,   240,   185,  -333,   -21,
     -52,  -211,   -65,  -333,   -61,   315,   -72,  -333,   172,  -333,
    -333,   103,  -109,  -203,  -333,  -158,    91,  -241,  -333,  -333,
     230,   -30,  -333,  -333,  -333,  -333,   270,  -333,  -333,  -333,
      70,  -333,  -332,  -333,  -333,  -333,  -333,  -333,  -333,  -333,
    -333,  -333,  -333,  -333,   366,  -333,  -333,  -333,  -333
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -258
static const yytype_int16 yytable[] =
{
      43,    78,    72,   161,   135,    90,    51,   287,    27,   253,
     239,   307,   140,   128,   145,   203,   204,   288,   249,   233,
     239,    47,   213,    42,   222,    58,   131,   172,   173,   174,
     175,   176,   177,    39,    40,   234,    54,    54,   164,    47,
     165,    54,    54,   288,    27,   392,   142,    47,    93,     4,
     142,    41,    93,   247,   205,   206,   161,    85,   161,   399,
     214,   149,   244,    47,    42,    13,    45,    47,   406,   162,
     132,    68,   220,   411,   228,    46,    47,    22,   382,   345,
     416,    79,   230,   260,   133,   145,   156,   158,   159,   299,
     164,   239,   165,    69,    42,   171,   171,   171,   171,   171,
     171,   246,   237,    79,    79,   152,   153,    79,    79,   128,
     254,   244,   219,     4,     4,   281,   178,   179,   180,   263,
     264,   265,   162,   259,   162,   311,    79,    47,  -139,    13,
      13,   307,    42,    63,   139,   232,    42,   262,   217,    57,
     218,    22,    22,    89,   181,   171,   182,    85,   183,   349,
     310,   243,   173,    84,   244,   171,   220,   244,    46,   250,
     230,   154,    42,   401,   217,    71,   218,   351,    78,   244,
     294,   304,   256,    46,   297,    79,   245,   261,   218,    79,
      76,    79,    77,    94,   246,    46,   302,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,    42,   209,    45,   373,   173,
     239,    47,   149,   196,    47,   199,   200,   343,   197,   198,
     171,   293,   361,   402,   403,   133,   171,    47,   210,   244,
     244,    65,   230,   326,   133,   410,   289,   211,   290,   171,
      56,   244,    83,   212,    59,    60,   164,   215,   165,   128,
     306,   350,    91,   133,   245,   164,   218,   165,   241,   386,
     242,   224,    65,   226,    83,    83,   225,   173,    83,    83,
     227,   270,   271,   272,   273,   248,   324,   171,   201,   202,
     235,   393,   326,   296,   394,   395,   300,    83,  -134,     3,
       4,   207,   208,   301,     5,   309,     6,   133,     8,   404,
     251,   252,   171,    10,    11,   305,    13,   308,    14,    15,
     371,   372,    17,   359,   338,    19,    20,    21,    22,   339,
      23,    24,   266,   267,    65,   324,    91,   376,   391,   268,
     269,   274,   275,   341,   346,   171,    83,   347,   303,   352,
      83,   365,    83,   353,   388,   171,   355,   364,   244,   368,
     367,   324,   370,   374,   377,   396,   144,   397,   380,   379,
     383,   384,   389,   387,   390,   398,   400,   405,   324,   412,
     413,   407,   408,   409,    25,   414,   415,   419,   277,   324,
     276,   324,   279,   417,   278,   418,    92,   280,   151,   420,
     150,   298,   141,   238,   348,   324,   324,   324,   292,   255,
     216,   366,    62,     0,     0,    61,     1,   324,     2,   324,
       0,     3,     4,   324,     0,     0,     5,     0,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,     0,    16,    17,     0,    18,    19,    20,    21,
      22,     0,    23,    24,   312,     0,     2,   313,   314,     3,
       4,   315,   316,   317,     5,     0,     6,     7,     8,   318,
     319,   320,     9,    10,    11,    12,    13,   321,    14,    15,
      95,    16,    17,   322,    18,    19,    20,    21,    22,   323,
      23,    24,     0,    96,    97,     0,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,    25,     0,     0,     0,
       0,     0,     0,     0,    98,    99,   100,   101,    42,     0,
     102,     0,     0,     0,     0,   215,  -220,     0,   104,   105,
     106,   107,   108,   109,   194,     0,     0,     0,     0,     0,
       0,     0,     0,  -227,    25,   312,     0,     2,   313,   314,
       3,     4,   315,   316,   317,     5,     0,     6,     7,     8,
     318,   319,   320,     9,    10,    11,    12,    13,   321,    14,
      15,    95,    16,    17,   322,    18,    19,    20,    21,    22,
     323,    23,    24,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,   101,    42,
       0,   102,     0,     0,     0,     0,   215,  -221,     0,   104,
     105,   106,   107,   108,   109,     0,    70,     0,     2,     0,
       0,     3,     4,     0,  -227,    25,     5,     0,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,    95,    16,    17,     0,    18,    19,    20,    21,
      22,     0,    23,    24,     0,    96,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,    99,   100,   101,
      42,     0,   102,     0,     0,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,     0,    70,     0,     2,
       0,     0,     3,     4,     0,  -227,    25,     5,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    12,    13,
       0,    14,    15,     0,    16,    17,     0,    18,    19,    20,
      21,    22,     0,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -256,     0,
     -96,     0,     0,     0,     0,     0,     0,     0,    70,     0,
       2,     0,     0,     3,     4,    71,   -96,    25,     5,     0,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,     0,    16,    17,     0,    18,    19,
      20,    21,    22,     0,    23,    24,     0,     0,     0,     0,
       1,     0,     2,     0,     0,     3,     4,     0,     0,     0,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,     0,    16,    17,  -257,
      18,    19,    20,    21,    22,   375,    23,    24,   313,   314,
       0,     0,   315,   316,   317,     0,     0,     0,    25,     0,
     318,   319,   320,     0,     0,     0,     0,     0,   321,     0,
       0,    95,     0,     0,   322,     0,     0,     0,     0,     0,
     323,     0,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,    98,    99,   100,   101,    42,
       0,   102,     0,     0,     0,     0,   215,     0,     0,   104,
     105,   106,   107,   108,   109,     2,     0,     0,     3,     4,
       0,     0,     0,     5,  -227,     6,     7,     8,     0,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,     0,
      16,    17,     0,    18,    19,    20,    21,    22,     0,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,   217,
     283,   218,     2,     0,     0,     3,     4,     0,    46,     0,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,    25,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,     0,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   245,   283,   218,     2,
       0,     0,     3,     4,     0,    46,     0,     5,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    12,    13,
      25,    14,    15,     0,    16,    17,     0,    18,    19,    20,
      21,    22,     0,    23,    24,     0,     0,     2,     0,     0,
       3,     4,     0,     0,     0,     5,     0,     6,     7,     8,
       0,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,    42,    16,    17,     0,    18,    19,    20,    21,    22,
       0,    23,    24,     0,     0,     0,     0,     0,     2,     0,
       0,     3,     4,     0,   291,     0,     5,    25,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,     0,    16,    17,     0,    18,    19,    20,    21,
      22,     0,    23,    24,     0,     0,     2,     0,     0,     3,
       4,     0,     0,     0,     5,    25,     6,     7,     8,     0,
       0,     0,     9,    10,    11,    12,    13,     0,    14,    15,
       0,    16,    17,   342,    18,    19,    20,    21,    22,     0,
      23,    24,     0,     3,     4,     0,     0,     0,     5,     0,
       6,     0,     8,     0,     0,     0,    25,    10,    11,     0,
      13,     0,    14,    15,    95,     0,    17,     0,     0,    19,
      20,    21,    22,     0,    23,    24,     0,    96,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,    98,    99,
     100,   101,    42,     0,   102,     0,     0,     0,     0,     0,
       0,     0,   104,   105,   106,   107,   108,   109,     3,     4,
       0,     0,     0,     5,     0,     6,     0,     8,    25,     0,
       0,     0,    10,    11,     0,    13,     0,    14,    15,     0,
       0,    17,     0,     0,    19,    20,    21,    22,     0,    23,
      24,     3,     4,     0,     0,     0,     5,     0,     6,    95,
       8,     0,     0,     0,     0,    10,    11,     0,    13,     0,
      14,    15,    96,    97,    17,     0,     0,    19,    20,    21,
      22,     0,    23,    24,     0,   236,     0,     0,     0,     0,
       0,     0,    95,    98,    99,   100,   101,    42,     0,   102,
       0,     0,     0,    25,   103,    96,    97,   104,   105,   106,
     107,   108,   109,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,     0,     0,    98,    99,   100,   101,
      42,     0,   102,    96,    97,   295,    25,     0,     0,     0,
     104,   105,   106,   107,   108,   109,     0,     0,    95,     0,
       0,     0,     0,     0,    98,    99,   100,   101,    42,     0,
     102,    96,    97,     0,     0,   303,     0,     0,   104,   105,
     106,   107,   108,   109,     0,     0,    95,     0,     0,     0,
       0,     0,    98,    99,   100,   101,    42,     0,   102,    96,
      97,   340,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,     0,     0,    95,     0,     0,     0,     0,     0,
      98,    99,   100,   101,    42,     0,   102,    96,    97,   369,
       0,     0,     0,     0,   104,   105,   106,   107,   108,   109,
       0,     0,    95,     0,     0,     0,     0,     0,    98,    99,
     100,   101,    42,     0,   155,    96,    97,     0,     0,     0,
       0,     0,   104,   105,   106,   107,   108,   109,     0,     0,
      95,     0,     0,     0,     0,     0,    98,    99,   100,   101,
      42,     0,   157,    96,    97,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,     0,     0,    95,     0,
       0,     0,     0,     0,    98,    99,   100,   101,    42,     0,
     102,    96,    97,     0,     0,     0,     0,     0,   104,   105,
     106,   107,   108,   109,     0,     0,    95,     0,     0,     0,
       0,     0,    98,    99,   100,   101,    42,     0,   102,    96,
      97,     0,     0,     0,     0,     0,   104,   229,   106,   107,
     108,   109,     0,     0,    95,     0,     0,     0,     0,     0,
      98,    99,   100,   101,    42,     0,   102,    96,    97,     0,
       0,     0,     0,     0,   104,   286,   106,   107,   108,   109,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
     100,   101,    42,     0,   102,     0,     0,     0,     0,     0,
       0,     0,   104,   344,   106,   107,   108,   109
};

static const yytype_int16 yycheck[] =
{
       6,    53,    51,   102,    76,    66,    27,   218,     0,   167,
     154,   252,    77,    71,    80,    44,    45,   220,   164,    74,
     164,    27,    49,    65,   133,    31,    75,   104,   105,   106,
     107,   108,   109,    72,    73,    90,    28,    29,    69,    45,
      71,    33,    34,   246,    36,   377,    79,    53,    69,     7,
      83,    90,    73,   162,    83,    84,   155,    63,   157,   391,
      87,    82,    74,    69,    65,    23,    67,    73,   400,   102,
      76,    90,   133,   405,   139,    76,    82,    35,    90,   290,
     412,    57,   140,   182,    76,   151,    95,    96,    97,   235,
      69,   235,    71,    74,    65,   104,   105,   106,   107,   108,
     109,   162,    73,    79,    80,    73,    74,    83,    84,   167,
      89,    74,   133,     7,     7,   214,    39,    40,    41,   196,
     197,   198,   155,   181,   157,    88,   102,   133,    72,    23,
      23,   372,    65,    72,    28,    28,    65,   195,    67,    72,
      69,    35,    35,    68,    67,   154,    69,   153,    71,   307,
      70,    68,   229,    72,    74,   164,   217,    74,    76,   165,
     218,    89,    65,    68,    67,    89,    69,   311,   220,    74,
     228,   248,   178,    76,   232,   151,    67,   183,    69,   155,
      67,   157,    69,    90,   245,    76,   244,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,    65,    75,    67,   354,   286,
     354,   217,   233,    76,   220,    77,    78,   289,    81,    82,
     229,   227,   321,    68,    68,   217,   235,   233,    85,    74,
      74,    46,   290,   282,   226,    68,    67,    86,    69,   248,
      29,    74,    57,    48,    33,    34,    69,    72,    71,   307,
      73,   309,    67,   245,    67,    69,    69,    71,   155,    73,
     157,    68,    77,    74,    79,    80,    68,   344,    83,    84,
      74,   203,   204,   205,   206,    68,   282,   286,    42,    43,
      88,   380,   331,    70,   383,   384,    68,   102,    88,     6,
       7,    46,    47,    68,    11,    74,    13,   289,    15,   398,
      73,    74,   311,    20,    21,    70,    23,    68,    25,    26,
      73,    74,    29,   319,    68,    32,    33,    34,    35,    68,
      37,    38,   199,   200,   139,   331,   141,   357,   377,   201,
     202,   207,   208,    70,    70,   344,   151,    70,    72,    90,
     155,    73,   157,    90,   374,   354,    90,    88,    74,    68,
      90,   357,    70,    88,    67,   385,    73,   387,    67,    90,
      67,    67,    90,    88,    36,    67,    90,    90,   374,    90,
      12,   401,   402,   403,    91,    90,    68,    68,   210,   385,
     209,   387,   212,   413,   211,   415,    69,   213,    84,   419,
      83,   233,    77,   153,   303,   401,   402,   403,   226,   169,
     130,   331,    36,    -1,    -1,     0,     1,   413,     3,   415,
      -1,     6,     7,   419,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,    40,    41,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    -1,
      67,    -1,    -1,    -1,    -1,    72,    73,    -1,    75,    76,
      77,    78,    79,    80,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    90,    91,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    72,    73,    -1,    75,
      76,    77,    78,    79,    80,    -1,     1,    -1,     3,    -1,
      -1,     6,     7,    -1,    90,    91,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    -1,     1,    -1,     3,
      -1,    -1,     6,     7,    -1,    90,    91,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    25,    26,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,    -1,     6,     7,    89,    90,    91,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    29,    72,
      31,    32,    33,    34,    35,     1,    37,    38,     4,     5,
      -1,    -1,     8,     9,    10,    -1,    -1,    -1,    91,    -1,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      76,    77,    78,    79,    80,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    90,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      68,    69,     3,    -1,    -1,     6,     7,    -1,    76,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    91,    25,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,     3,
      -1,    -1,     6,     7,    -1,    76,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      91,    25,    26,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    65,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    50,    -1,    11,    91,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    91,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    28,    29,    68,    31,    32,    33,    34,    35,    -1,
      37,    38,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    -1,    15,    -1,    -1,    -1,    91,    20,    21,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    38,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    -1,    15,    91,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    -1,
      -1,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      38,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    27,
      15,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,
      25,    26,    40,    41,    29,    -1,    -1,    32,    33,    34,
      35,    -1,    37,    38,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    91,    72,    40,    41,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    -1,    67,    40,    41,    70,    91,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    -1,
      67,    40,    41,    -1,    -1,    72,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    -1,    67,    40,
      41,    70,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    67,    40,    41,    70,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    67,    40,    41,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80
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
       1,    89,   118,   119,   189,   190,    67,    69,   142,   125,
     128,   129,   130,   139,    72,    93,    96,   137,   138,    68,
     146,   139,   123,   141,    90,    27,    40,    41,    61,    62,
      63,    64,    67,    72,    75,    76,    77,    78,    79,    80,
      93,    94,    95,    97,    98,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   157,
     188,   118,    93,   119,   145,   148,   149,   150,   152,    28,
     144,   147,   130,   131,    73,   129,   132,   133,   134,   141,
     131,   128,    73,    74,    89,    67,   101,    67,   101,   101,
     114,   116,   130,   153,    69,    71,   158,   159,   160,   161,
     162,   101,   102,   102,   102,   102,   102,   102,    39,    40,
      41,    67,    69,    71,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    89,   115,    76,    81,    82,    77,
      78,    42,    43,    44,    45,    83,    84,    46,    47,    75,
      85,    86,    48,    49,    87,    72,   168,    67,    69,   141,
     146,   151,   154,   155,    68,    68,    74,    74,   144,    76,
     114,   143,    28,    74,    90,    88,    73,    73,   138,   113,
     117,   153,   153,    68,    74,    67,   146,   154,    68,   117,
      93,    73,    74,   157,    89,   162,    93,    99,   100,   114,
     116,    93,   114,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   106,   106,   107,   108,   109,   110,
     111,   116,   169,    68,   148,   154,    76,   143,   155,    67,
      69,    50,   150,    93,   114,    70,    70,   114,   133,   117,
      68,    68,   114,    72,   102,    70,    73,   159,    68,    74,
      70,    88,     1,     4,     5,     8,     9,    10,    16,    17,
      18,    24,    30,    36,    93,   116,   118,   163,   164,   168,
     170,   171,   172,   173,   174,   175,   179,   184,    68,    68,
      70,    70,    68,   148,    76,   143,    70,    70,   158,   157,
     114,   113,    90,    90,   166,    90,   167,   181,   182,    93,
     176,   116,   177,   180,    88,    73,   172,    90,    68,    70,
      70,    73,    74,   117,    88,     1,   163,    67,   183,    90,
      67,   178,    90,    67,    67,   165,    73,    88,   163,    90,
      36,   118,   174,   116,   116,   116,   163,   163,    67,   174,
      90,    68,    68,    68,   116,    90,   174,   163,   163,   163,
      68,   174,    90,    12,    90,    68,   174,   163,   163,    68,
     163
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
#line 273 "bison/parser.y"
    {
                        (yyval.sym) = (yyvsp[(1) - (1)].sym);
                        if((yyval.sym)->type != NULL){
                            if((yyval.sym)->type->type == t_FUNC){
                                printf("CACA");
                                bool isNamedParam(void* elem){
                                    return ((symbol*)elem)->identifier != NULL;
                                }
                                t_list* namedParams = list_filter((yyval.sym)->type->params, isNamedParam);
                                symtable_addSymbols(st, namedParams);
                            }
                        }
                    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 286 "bison/parser.y"
    {(yyval.sym) = (yyvsp[(1) - (3)].sym);;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 296 "bison/parser.y"
    {(yyval.typeName) = t_VOID;;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 297 "bison/parser.y"
    {(yyval.typeName) = t_CHAR;;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 299 "bison/parser.y"
    {(yyval.typeName) = t_INT;;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 301 "bison/parser.y"
    {(yyval.typeName) = t_FLOAT;;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 302 "bison/parser.y"
    {(yyval.typeName) = t_DOUBLE;;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 350 "bison/parser.y"
    {(yyval.strval) = NULL;;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 351 "bison/parser.y"
    {(yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 369 "bison/parser.y"
    {typeInfo_append(&(yyvsp[(2) - (2)].sym)->type, (yyvsp[(1) - (2)].type)); (yyval.sym) = (yyvsp[(2) - (2)].sym);;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 370 "bison/parser.y"
    {(yyval.sym) = (yyvsp[(1) - (1)].sym);;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 373 "bison/parser.y"
    {(yyval.sym) = symbol_create((yyvsp[(1) - (1)].strval)); (yyval.sym)->identifier = string_duplicate((yyvsp[(1) - (1)].strval));;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 374 "bison/parser.y"
    { (yyval.sym) = (yyvsp[(2) - (3)].sym); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 375 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (5)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (5)].sym);;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 376 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (6)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (6)].sym);;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 377 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (6)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (6)].sym);;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 378 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyvsp[(1) - (5)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (5)].sym);;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 379 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_FUNC); t->params = (yyvsp[(3) - (4)].list); typeInfo_append(&(yyvsp[(1) - (4)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (4)].sym);;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 380 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_FUNC); t->params = (yyvsp[(3) - (4)].list); typeInfo_append(&(yyvsp[(1) - (4)].sym)->type, t); (yyval.sym) = (yyvsp[(1) - (4)].sym);;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 393 "bison/parser.y"
    {(yyval.list) = list_create();;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 397 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_PTR); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 398 "bison/parser.y"
    {typeInfo* t = typeInfo_create(t_PTR); typeInfo_append(&(yyvsp[(3) - (3)].type), t); (yyval.type) = (yyvsp[(3) - (3)].type);;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 405 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (1)].list);;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 406 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (3)].list); /* TODO: Por ahora ignoramos variargs */ ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 409 "bison/parser.y"
    {(yyval.list) = list_create(); list_add((yyval.list), (yyvsp[(1) - (1)].sym));;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 410 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (3)].list); list_add((yyval.list), (yyvsp[(3) - (3)].sym));;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 413 "bison/parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); typeInfo_append(&(yyval.sym)->type, (yyvsp[(1) - (2)].type)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 414 "bison/parser.y"
    { (yyval.sym) = (yyvsp[(2) - (2)].sym); typeInfo_append(&(yyval.sym)->type, (yyvsp[(1) - (2)].type)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 417 "bison/parser.y"
    { (yyval.sym) = symbol_create(); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 418 "bison/parser.y"
    { (yyval.sym) = symbol_create(); (yyval.sym)->type = (yyvsp[(1) - (1)].type); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 429 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 430 "bison/parser.y"
    { (yyval.type) = (yyvsp[(2) - (2)].type); typeInfo_append(&(yyval.type), (yyvsp[(1) - (2)].type)); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 431 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 434 "bison/parser.y"
    { (yyval.type) = (yyvsp[(2) - (3)].type); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 435 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_ARRAY); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 436 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_ARRAY); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 437 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_FUNC); (yyval.type)->params = (yyvsp[(2) - (3)].list); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 438 "bison/parser.y"
    { (yyval.type) = typeInfo_create(t_FUNC); (yyval.type)->params = list_create(); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 439 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (4)].type); typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 440 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (4)].type); typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 441 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (4)].type); typeInfo* t = typeInfo_create(t_FUNC); t->params = (yyvsp[(3) - (4)].list); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 442 "bison/parser.y"
    { (yyval.type) = (yyvsp[(1) - (3)].type); typeInfo* t = typeInfo_create(t_FUNC); t->params = list_create(); typeInfo_append(&(yyval.type), t); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 472 "bison/parser.y"
    { printf("Linea %i: Sentencia de expresion\n", yylineno); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 475 "bison/parser.y"
    { printf("Linea %i: Sentencia de salto\n", yylineno); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 476 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 479 "bison/parser.y"
    { printf("Linea %i: Sentencia etiquetada\n", yylineno); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 480 "bison/parser.y"
    { printf("Linea %i: Sentencia etiquetada\n", yylineno); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 481 "bison/parser.y"
    { printf("Linea %i: Sentencia etiquetada\n", yylineno); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 484 "bison/parser.y"
    { printf("Linea %i: Sentencia Compuesta\n", yylineno); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 504 "bison/parser.y"
    { printf("Linea %i: Sentencia de seleccion\n", yylineno); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 505 "bison/parser.y"
    { printf("Linea %i: Sentencia de seleccion\n", yylineno); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 512 "bison/parser.y"
    { printf("Linea %i: Sentencia de iteracion\n", yylineno); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 513 "bison/parser.y"
    { printf("Linea %i: Sentencia de iteracion\n", yylineno); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 514 "bison/parser.y"
    { printf("Linea %i: Sentencia de iteracion\n", yylineno); ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 536 "bison/parser.y"
    {
                            typeInfo_append(&(yyvsp[(2) - (3)].sym)->type, (yyvsp[(1) - (3)].type));
                            symtable_functionDefinition(st, (yyvsp[(2) - (3)].sym));
                        ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 540 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 541 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 542 "bison/parser.y"
    { yyerrok; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2920 "src/parser.c"
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
#line 553 "bison/parser.y"


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
