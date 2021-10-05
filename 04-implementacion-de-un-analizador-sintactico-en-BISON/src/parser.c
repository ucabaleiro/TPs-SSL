
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

#include <stdio.h>
int yylex(void);
int yyerror(const char *s);
extern FILE* yyin;
extern int yylineno;
int analisisCorrecto = 1;



/* Line 189 of yacc.c  */
#line 84 "src/parser.c"

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
#line 15 "bison/parser.y"

    typedef enum types { t_char, t_uchar, t_sint, t_usint, t_int, t_uint, t_long, t_ulong, t_llong, t_ullong, t_float, t_double, t_ldouble, t_ptr } types;



/* Line 209 of yacc.c  */
#line 114 "src/parser.c"

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
     IDENTIFIER = 316,
     CHAR_CONST = 317,
     INT_CONST = 318,
     REAL_CONST = 319,
     STRING_LITERAL = 320,
     IFX = 321
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 20 "bison/parser.y"

    char* strval;
    types tval;



/* Line 214 of yacc.c  */
#line 204 "src/parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 216 "src/parser.c"

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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1369

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  241
/* YYNRULES -- Number of states.  */
#define YYNSTATES  394

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
      58,    66,    68,    72,    74,    77,    80,    83,    86,    91,
      93,    95,    97,    99,   101,   103,   105,   110,   112,   116,
     120,   124,   126,   130,   134,   136,   140,   144,   146,   150,
     154,   158,   162,   164,   168,   172,   174,   178,   180,   184,
     186,   190,   192,   196,   198,   202,   204,   210,   212,   216,
     218,   220,   222,   224,   226,   228,   230,   232,   234,   236,
     238,   240,   244,   246,   250,   251,   253,   256,   259,   262,
     265,   266,   268,   270,   274,   276,   280,   282,   284,   286,
     288,   290,   292,   294,   296,   298,   300,   302,   304,   306,
     308,   310,   312,   314,   316,   318,   324,   329,   332,   334,
     336,   338,   341,   345,   348,   351,   352,   354,   356,   360,
     362,   366,   367,   369,   375,   382,   385,   386,   388,   390,
     394,   396,   400,   402,   404,   406,   408,   411,   413,   415,
     419,   425,   432,   439,   445,   450,   455,   456,   458,   459,
     461,   462,   464,   467,   471,   473,   476,   478,   482,   484,
     488,   491,   494,   495,   497,   499,   503,   505,   508,   510,
     513,   515,   519,   523,   527,   531,   534,   539,   544,   549,
     553,   555,   557,   561,   566,   569,   574,   575,   577,   580,
     582,   585,   589,   592,   594,   596,   598,   600,   602,   604,
     608,   613,   617,   621,   622,   624,   626,   629,   631,   633,
     636,   637,   639,   645,   653,   659,   665,   673,   683,   692,
     696,   699,   702,   706,   708,   711,   713,   715,   720,   721,
     723,   725
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     174,     0,    -1,    61,    -1,    62,    -1,    63,    -1,    64,
      -1,    65,    -1,    93,    -1,    93,    -1,    94,    -1,    95,
      -1,    67,   116,    68,    -1,    97,    -1,    98,    69,   116,
      70,    -1,    98,    67,    99,    68,    -1,    98,    71,    93,
      -1,    98,    39,    93,    -1,    98,    40,    -1,    98,    41,
      -1,    67,   153,    68,    72,   158,    73,    -1,    67,   153,
      68,    72,   158,    74,    73,    -1,   114,    -1,    99,    74,
     114,    -1,    98,    -1,    40,   100,    -1,    41,   100,    -1,
     101,   102,    -1,    27,   100,    -1,    27,    67,   153,    68,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,
      -1,    80,    -1,   100,    -1,    67,   153,    68,   102,    -1,
     102,    -1,   103,    76,   102,    -1,   103,    81,   102,    -1,
     103,    82,   102,    -1,   103,    -1,   104,    77,   103,    -1,
     104,    78,   103,    -1,   104,    -1,   105,    42,   104,    -1,
     105,    43,   104,    -1,   105,    -1,   106,    83,   105,    -1,
     106,    84,   105,    -1,   106,    44,   105,    -1,   106,    45,
     105,    -1,   106,    -1,   107,    46,   106,    -1,   107,    47,
     106,    -1,   107,    -1,   108,    75,   107,    -1,   108,    -1,
     109,    85,   108,    -1,   109,    -1,   110,    86,   109,    -1,
     110,    -1,   111,    48,   110,    -1,   111,    -1,   112,    49,
     111,    -1,   112,    -1,   112,    87,   116,    88,   113,    -1,
     113,    -1,   100,   115,   114,    -1,    89,    -1,    51,    -1,
      52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,   114,    -1,
     116,    74,   114,    -1,   113,    -1,   120,   119,    90,    -1,
      -1,   122,    -1,   124,   121,    -1,   125,   121,    -1,   139,
     121,    -1,   140,   121,    -1,    -1,   120,    -1,   123,    -1,
     122,    74,   123,    -1,   141,    -1,   141,    89,   157,    -1,
      31,    -1,    14,    -1,    28,    -1,     3,    -1,    22,    -1,
      34,    -1,     6,    -1,    25,    -1,    20,    -1,    21,    -1,
      15,    -1,    11,    -1,    26,    -1,    33,    -1,    37,    -1,
      38,    -1,   126,    -1,   135,    -1,   156,    -1,   127,    93,
      72,   128,    73,    -1,   127,    72,   128,    73,    -1,   127,
      93,    -1,    29,    -1,    32,    -1,   129,    -1,   128,   129,
      -1,   130,   132,    90,    -1,   125,   131,    -1,   139,   131,
      -1,    -1,   130,    -1,   133,    -1,   132,    74,   133,    -1,
     141,    -1,   134,    88,   117,    -1,    -1,   141,    -1,    13,
     136,    72,   137,    73,    -1,    13,   136,    72,   137,    74,
      73,    -1,    13,    93,    -1,    -1,    93,    -1,   138,    -1,
     137,    74,   138,    -1,    96,    -1,   138,    89,   117,    -1,
       7,    -1,    23,    -1,    35,    -1,    19,    -1,   146,   142,
      -1,   142,    -1,    93,    -1,    67,   141,    68,    -1,   142,
      69,   144,   143,    70,    -1,   142,    69,    28,   144,   114,
      70,    -1,   142,    69,   147,    28,   114,    70,    -1,   142,
      69,   144,    76,    70,    -1,   142,    67,   148,    68,    -1,
     142,    67,   145,    68,    -1,    -1,   114,    -1,    -1,   147,
      -1,    -1,   152,    -1,    76,   144,    -1,    76,   144,   146,
      -1,   139,    -1,   147,   139,    -1,   149,    -1,   149,    74,
      50,    -1,   150,    -1,   149,    74,   150,    -1,   120,   141,
      -1,   120,   151,    -1,    -1,   154,    -1,    93,    -1,   152,
      74,    93,    -1,   130,    -1,   130,   154,    -1,   146,    -1,
     146,   155,    -1,   155,    -1,    67,   154,    68,    -1,    69,
     143,    70,    -1,    69,    76,    70,    -1,    67,   148,    68,
      -1,    67,    68,    -1,   155,    69,   143,    70,    -1,   155,
      69,    76,    70,    -1,   155,    67,   148,    68,    -1,   155,
      67,    68,    -1,    91,    -1,   114,    -1,    72,   158,    73,
      -1,    72,   158,    74,    73,    -1,   159,   157,    -1,   158,
      74,   159,   157,    -1,    -1,   160,    -1,   161,    89,    -1,
     162,    -1,   161,   162,    -1,    69,   117,    70,    -1,    71,
      93,    -1,   164,    -1,   165,    -1,   169,    -1,   171,    -1,
     172,    -1,   173,    -1,    93,    88,   163,    -1,     5,   117,
      88,   163,    -1,     9,    88,   163,    -1,    72,   166,    73,
      -1,    -1,   167,    -1,   168,    -1,   167,   168,    -1,   118,
      -1,   163,    -1,   170,    90,    -1,    -1,   116,    -1,    18,
      67,   116,    68,   163,    -1,    18,    67,   116,    68,   163,
      12,   163,    -1,    30,    67,   116,    68,   163,    -1,    36,
      67,   116,    68,   163,    -1,    10,   163,    36,    67,   116,
      68,    90,    -1,    16,    67,   170,    90,   170,    90,   170,
      68,   163,    -1,    16,    67,   118,   170,    90,   170,    68,
     163,    -1,    17,    93,    90,    -1,     8,    90,    -1,     4,
      90,    -1,    24,   116,    90,    -1,   175,    -1,   174,   175,
      -1,   176,    -1,   118,    -1,   120,   141,   177,   165,    -1,
      -1,   178,    -1,   118,    -1,   178,   118,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,    99,   100,   101,   104,   106,   108,   109,
     110,   111,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   125,   126,   129,   130,   131,   132,   133,   134,   137,
     137,   137,   137,   137,   137,   139,   140,   143,   144,   145,
     146,   149,   150,   151,   154,   155,   156,   159,   160,   161,
     162,   163,   167,   168,   169,   172,   173,   176,   177,   180,
     181,   184,   185,   188,   189,   192,   193,   196,   197,   200,
     200,   200,   200,   200,   200,   201,   201,   201,   201,   201,
     204,   205,   208,   210,   212,   213,   216,   217,   218,   219,
     222,   223,   226,   227,   230,   231,   234,   234,   234,   234,
     234,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   237,   238,   239,   242,   243,   244,   247,   247,
     249,   250,   253,   255,   256,   259,   260,   263,   264,   267,
     268,   271,   272,   275,   276,   277,   280,   281,   284,   285,
     288,   289,   292,   292,   292,   294,   296,   297,   300,   301,
     302,   303,   304,   305,   306,   307,   310,   311,   314,   315,
     318,   319,   322,   323,   326,   327,   330,   331,   334,   335,
     338,   339,   342,   343,   346,   347,   350,   351,   354,   355,
     356,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     370,   372,   373,   374,   377,   378,   381,   382,   385,   387,
     388,   391,   392,   395,   396,   397,   398,   399,   400,   403,
     404,   405,   408,   410,   411,   414,   415,   418,   419,   422,
     424,   425,   428,   429,   430,   433,   434,   435,   436,   439,
     440,   441,   442,   445,   446,   449,   450,   453,   455,   456,
     459,   460
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
  "\"^=\"", "\"|=\"", "IDENTIFIER", "CHAR_CONST", "INT_CONST",
  "REAL_CONST", "STRING_LITERAL", "IFX", "'('", "')'", "'['", "']'", "'.'",
  "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'t'",
  "$accept", "identifier", "constant", "string_literal",
  "enumeration_constant", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list.opt", "declaration_specifiers",
  "declaration_specifiers.opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "speficier_qualifier_list", "speficier_qualifier_list.opt",
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
  "expression.opt", "selection_statement", "iteration_statement",
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
      98,    99,    99,   100,   100,   100,   100,   100,   100,   101,
     101,   101,   101,   101,   101,   102,   102,   103,   103,   103,
     103,   104,   104,   104,   105,   105,   105,   106,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   118,   119,   119,   120,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   124,   124,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   127,   127,
     128,   128,   129,   130,   130,   131,   131,   132,   132,   133,
     133,   134,   134,   135,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   139,   140,   141,   141,   142,   142,
     142,   142,   142,   142,   142,   142,   143,   143,   144,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     154,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     156,   157,   157,   157,   158,   158,   159,   159,   160,   161,
     161,   162,   162,   163,   163,   163,   163,   163,   163,   164,
     164,   164,   165,   166,   166,   167,   167,   168,   168,   169,
     170,   170,   171,   171,   171,   172,   172,   172,   172,   173,
     173,   173,   173,   174,   174,   175,   175,   176,   177,   177,
     178,   178
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     4,     4,     3,     3,     2,     2,     6,
       7,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     0,     1,     2,     2,     2,     2,
       0,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     2,     0,     1,     1,     3,     1,
       3,     0,     1,     5,     6,     2,     0,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     3,
       5,     6,     6,     5,     4,     4,     0,     1,     0,     1,
       0,     1,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     0,     1,     1,     3,     1,     2,     1,     2,
       1,     3,     3,     3,     3,     2,     4,     4,     4,     3,
       1,     1,     3,     4,     2,     4,     0,     1,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     3,     0,     1,     1,     2,     1,     1,     2,
       0,     1,     5,     7,     5,     5,     7,     9,     8,     3,
       2,     2,     3,     1,     2,     1,     1,     4,     0,     1,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   102,   142,   107,   136,    97,   106,   145,   104,
     105,   100,   143,   103,   108,    98,   118,    96,   119,   109,
     101,   144,   110,   111,   190,   236,    84,    90,    90,   112,
       0,   113,    90,    90,   114,     0,   233,   235,     2,   135,
       0,     0,   158,   148,     0,    85,    92,    94,   147,     0,
      91,    86,    87,     0,   117,    88,    89,     1,   234,     0,
       0,   164,   162,   159,    83,     0,     0,   240,    84,     0,
     239,   160,   158,   146,   125,     0,   120,   131,   125,     0,
       7,   140,     0,   138,   149,   163,   165,    93,    94,     0,
       0,     0,     3,     4,     5,     6,     0,   196,    29,    30,
      31,    32,    33,    34,     8,     9,    10,    12,    23,    35,
       0,    37,    41,    44,    47,    52,    55,    57,    59,    61,
      63,    65,    67,   191,    95,   213,   237,   241,   174,   172,
       0,     0,   166,   168,   161,   158,   156,   159,   126,   123,
     116,   121,     0,   127,     0,   129,   124,     0,   133,     0,
       0,     0,    27,     0,    24,    25,    80,     0,   176,     0,
       0,     0,     0,     0,   197,     0,   199,     0,    17,    18,
       0,     0,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    69,     0,    35,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     220,     0,     0,     0,     0,     0,     0,     8,   221,   217,
     218,   203,   204,     0,   214,   215,   205,     0,   206,   207,
     208,     0,   156,   170,   178,   171,   173,   180,   155,   154,
       0,     0,     0,    30,   157,     0,     0,   131,   122,     0,
     115,   134,   139,    82,   141,     0,     0,    11,     0,     0,
     178,   177,     0,     0,   202,   192,   196,   194,   198,   200,
      16,     0,    21,     0,    15,    68,    38,    39,    40,    42,
      43,    45,    46,    50,    51,    48,    49,    53,    54,    56,
      58,    60,    62,    64,     0,   231,     0,   230,   220,     0,
     220,     0,     0,     0,     0,     0,   220,   212,   216,   219,
     185,     0,     0,    30,     0,   179,     0,   156,   167,   169,
     175,     0,   153,   150,     0,   128,   130,    28,     0,    81,
     196,    36,   201,   193,     0,    14,     0,    13,     0,   220,
     211,     0,   220,     0,   229,     0,   232,     0,     0,   209,
     184,   181,   183,   182,   189,     0,    30,     0,   151,   152,
       0,   195,    22,    66,   210,     0,     0,   220,   220,   220,
     220,   188,   187,   186,    19,   196,     0,   220,     0,   222,
     224,   225,    20,     0,     0,   220,   220,   226,   220,     0,
     223,   228,   220,   227
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   104,   105,   106,    81,   107,   108,   271,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   156,   184,   218,   254,    25,    44,    68,    51,
      45,    46,    27,    28,    29,    30,    75,    76,    77,   139,
     142,   143,   144,    31,    40,    82,    83,    32,    33,    60,
      48,   245,    62,   130,    49,    63,   311,   132,   133,   235,
     134,   159,   312,   237,    34,   124,   162,   163,   164,   165,
     166,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,    35,    36,    37,    69,    70
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -259
static const yytype_int16 yypact[] =
{
     875,  -259,  -259,  -259,  -259,   -37,  -259,  -259,  -259,  -259,
    -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,
    -259,  -259,  -259,  -259,  -259,  -259,    78,   875,   875,  -259,
      19,  -259,   875,   875,  -259,   371,  -259,  -259,  -259,    13,
      24,    78,    71,  -259,    33,    64,  -259,   707,   122,   104,
    -259,  -259,  -259,  1058,    69,  -259,  -259,  -259,  -259,   -37,
      85,  -259,    70,    71,  -259,    78,   241,  -259,    78,   151,
     875,   740,   152,   122,  1058,   983,  -259,    78,  1058,  1058,
    -259,  -259,   -18,    75,  -259,  -259,  -259,  -259,   129,  1149,
    1177,  1177,  -259,  -259,  -259,  -259,   908,   161,  -259,  -259,
    -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,    28,    77,
    1205,  -259,    36,   -30,   168,   -26,   209,   169,   165,   177,
     218,   -22,  -259,  -259,  -259,   413,  -259,  -259,  -259,    81,
     215,   221,   214,  -259,   216,    71,  1233,   189,  -259,  -259,
    -259,  -259,   -45,  -259,   203,   206,  -259,  1016,  -259,    20,
    1205,   908,  -259,   908,  -259,  -259,  -259,   100,   121,   224,
    1205,   -37,   201,   241,  -259,   -39,  -259,   -37,  -259,  -259,
    1205,  1205,   -37,  -259,  -259,  -259,  -259,  -259,  -259,  -259,
    -259,  -259,  -259,  -259,  1205,  -259,  -259,  1205,  1205,  1205,
    1205,  1205,  1205,  1205,  1205,  1205,  1205,  1205,  1205,  1205,
    1205,  1205,  1205,  1205,  1205,  1205,   205,  1205,   207,   208,
    1093,   231,   -37,   233,  1205,   240,   243,   223,   238,  -259,
    -259,  -259,  -259,   242,   413,  -259,  -259,   234,  -259,  -259,
    -259,   573,  1261,  -259,    91,  -259,  -259,   174,  -259,  -259,
     801,   -37,  1205,   244,  -259,   253,  1205,    78,  -259,  1205,
    -259,  -259,    75,  -259,  -259,   257,   258,  -259,  1205,   640,
     200,  -259,  1121,   259,  -259,  -259,    42,  -259,  -259,  -259,
    -259,   135,  -259,   187,  -259,  -259,  -259,  -259,  -259,    36,
      36,   -30,   -30,   168,   168,   168,   168,   -26,   -26,   209,
     169,   165,   177,   218,   -51,  -259,   239,  -259,  1093,   292,
     494,   245,  1205,    12,  1205,  1205,  1093,  -259,  -259,  -259,
    -259,   262,   263,   284,   285,   174,   834,  1289,  -259,  -259,
    -259,   287,  -259,  -259,   288,  -259,  -259,   260,   260,  -259,
     161,  -259,  -259,  -259,   241,  -259,  1205,  -259,  1205,  1093,
    -259,   266,  1205,   269,  -259,   146,  -259,   153,   157,  -259,
    -259,  -259,  -259,  -259,  -259,   293,   290,   296,  -259,  -259,
     204,  -259,  -259,  -259,  -259,  1205,   272,  1205,  1093,  1093,
    1093,  -259,  -259,  -259,  -259,   191,   160,  1205,   277,   356,
    -259,  -259,  -259,   279,   302,  1205,  1093,  -259,  1093,   304,
    -259,  -259,  1093,  -259
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -259,    -5,  -259,  -259,  -259,  -259,  -259,  -259,   149,  -259,
     -99,    89,    92,     4,    88,   173,   175,   178,   172,   184,
    -259,  -146,   -63,  -259,   -89,  -148,   -42,  -259,     6,   220,
    -259,   314,  -259,    -4,  -259,  -259,   310,   -60,   -43,   317,
    -259,   154,  -259,  -259,  -259,  -259,   261,    98,  -259,   -25,
     -41,  -219,   -56,  -259,   -53,   335,   -69,  -259,   185,  -259,
    -259,   119,  -107,  -214,  -259,  -153,    82,  -249,  -259,  -259,
     248,  -184,  -259,   345,  -259,  -259,   228,  -259,  -258,  -259,
    -259,  -259,  -259,   380,  -259,  -259,  -259
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -239
static const yytype_int16 yytable[] =
{
      39,    47,   131,   123,   253,    67,    26,   157,    73,    85,
     267,   186,   263,   314,   253,   141,   136,   334,   194,   195,
     315,    43,   236,   258,    38,    54,   299,   204,   127,   247,
     160,   138,   161,    50,    50,   138,    43,   338,    50,    50,
      88,    26,   343,    88,    43,   248,   315,   190,   191,    74,
     268,   261,   145,   158,    80,   148,   149,   196,   197,   296,
      43,   253,   157,    43,   157,   205,   128,   167,   168,   169,
      74,    74,    43,   244,    74,    74,   234,   129,     3,   242,
      38,    38,   273,   219,   366,  -137,   258,   141,   276,   277,
     278,    53,    74,   251,    12,   170,    59,   171,   357,   172,
     123,   326,   346,   253,   233,   260,    21,   272,   158,   378,
     158,   160,   187,   161,   340,   333,   294,   188,   189,   384,
     217,   275,   349,    64,    43,   303,   334,   389,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,    65,    38,
      61,    79,    38,    74,    80,    41,    42,    74,   231,    74,
     232,    78,    38,    84,    42,   364,   264,    42,   231,     3,
     232,    86,   270,   331,   150,    38,   183,   274,   257,   244,
      61,    41,    78,    78,   258,    12,    78,    78,   234,   321,
     135,   361,   219,   324,   379,   380,   381,    21,   259,    71,
     232,    72,   363,    73,    78,   329,     3,    42,   283,   284,
     285,   286,   390,   335,   391,   217,   260,   301,   393,   336,
     192,   193,    12,   345,   368,   347,   348,   246,    66,   217,
     258,   369,   145,   125,    21,   370,    43,   258,   383,    43,
     160,   258,   161,    61,   258,    86,   320,   129,   152,   154,
     155,   316,    43,   317,   200,    78,   129,   355,    52,    78,
     201,    78,    55,    56,   244,   198,   199,   337,   342,   185,
     160,   258,   161,   202,   382,   129,   203,   259,    89,   232,
     255,   123,   256,   362,   265,   266,   376,   374,   375,   279,
     280,    90,    91,   238,   281,   282,   287,   288,   240,   239,
     241,   249,   262,   217,  -132,   295,   298,   297,   300,   185,
     302,   217,    38,    92,    93,    94,    95,   304,    96,   185,
     305,   306,   258,    97,   322,   307,    98,    99,   100,   101,
     102,   103,   129,   323,   309,   327,   328,   339,   341,   332,
     350,   351,   330,   365,   217,   344,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   352,   353,   185,   358,   359,   367,
     372,   371,   377,   217,   217,   217,   373,   385,   386,   387,
     388,    57,   392,   289,     1,   292,   290,     2,     3,    87,
     291,   217,     4,   217,     5,     6,     7,   217,   293,   147,
       8,     9,    10,    11,    12,   146,    13,    14,   185,    15,
      16,   325,    17,    18,    19,    20,    21,   137,    22,    23,
     252,   185,   360,   269,   126,    58,     1,   206,   207,     2,
       3,   208,   209,   210,     4,   319,     5,     6,     7,   211,
     212,   213,     8,     9,    10,    11,    12,   214,    13,    14,
      89,    15,    16,   215,    17,    18,    19,    20,    21,   216,
      22,    23,   308,    90,    91,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,    92,    93,    94,    95,     0,
      96,     0,     0,     0,     0,   125,     0,   185,    98,    99,
     100,   101,   102,   103,     0,     0,     0,     1,     0,     0,
       2,     3,     0,  -220,    24,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,    89,    15,    16,     0,    17,    18,    19,    20,    21,
       0,    22,    23,     0,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    92,    93,    94,    95,
       0,    96,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,   101,   102,   103,     0,     1,     0,     0,     2,
       3,     0,     0,     0,     4,    24,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,    16,     0,    17,    18,    19,    20,    21,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
     231,   310,   232,     1,     0,     0,     2,     3,     0,    42,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,    24,    13,    14,     0,    15,    16,
       0,    17,    18,    19,    20,    21,     0,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,   310,   232,
       1,     0,     0,     2,     3,     0,    42,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,    24,    13,    14,     0,    15,    16,     0,    17,    18,
      19,    20,    21,     1,    22,    23,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,    16,
       0,    17,    18,    19,    20,    21,     0,    22,    23,  -238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,     0,    24,     0,
       0,    38,     0,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
      16,    24,    17,    18,    19,    20,    21,     1,    22,    23,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,   318,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,    16,     0,    17,    18,    19,    20,    21,
       0,    22,    23,     0,     0,     0,     0,     0,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,    24,     0,     8,     9,    10,    11,    12,     0,
      13,    14,   354,    15,    16,     0,    17,    18,    19,    20,
      21,     0,    22,    23,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     7,     0,    24,     0,     0,     9,    10,
       0,    12,     0,    13,    14,    89,     0,    16,     0,     0,
      18,    19,    20,    21,     0,    22,    23,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,     0,    38,
      92,    93,    94,    95,     0,    96,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   101,   102,   103,     2,
       3,     0,     0,     0,     4,     0,     5,     0,     7,    24,
       0,     0,     0,     9,    10,     0,    12,     0,    13,    14,
       0,     0,    16,     0,     0,    18,    19,    20,    21,     0,
      22,    23,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     0,     9,    10,     0,    12,
       0,    13,    14,     0,     0,    16,     0,     0,    18,    19,
      20,    21,     0,    22,    23,     0,   140,     0,     0,     0,
       0,     0,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     7,    24,     0,     0,     0,     9,    10,
       0,    12,     0,    13,    14,     0,     0,    16,     0,   250,
      18,    19,    20,    21,     0,    22,    23,   206,   207,     0,
       0,   208,   209,   210,     0,     0,     0,    24,     0,   211,
     212,   213,     0,     0,     0,     0,     0,   214,     0,     0,
      89,     0,     0,   215,     0,     0,     0,     0,     0,   216,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    24,
       0,     0,     0,     0,    38,    92,    93,    94,    95,     0,
      96,    90,    91,     0,     0,   125,     0,     0,    98,    99,
     100,   101,   102,   103,     0,     0,    89,     0,     0,     0,
       0,     0,    38,    92,    93,    94,    95,     0,    96,    90,
      91,     0,     0,   330,     0,     0,    98,    99,   100,   101,
     102,   103,     0,     0,    89,     0,     0,     0,     0,     0,
      38,    92,    93,    94,    95,     0,   151,    90,    91,     0,
       0,     0,     0,     0,    98,    99,   100,   101,   102,   103,
       0,     0,    89,     0,     0,     0,     0,     0,    38,    92,
      93,    94,    95,     0,   153,    90,    91,     0,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   103,     0,     0,
      89,     0,     0,     0,     0,     0,    38,    92,    93,    94,
      95,     0,    96,    90,    91,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,     0,     0,    89,     0,
       0,     0,     0,     0,    38,    92,    93,    94,    95,     0,
      96,    90,    91,     0,     0,     0,     0,     0,    98,   243,
     100,   101,   102,   103,     0,     0,    89,     0,     0,     0,
       0,     0,    38,    92,    93,    94,    95,     0,    96,    90,
      91,     0,     0,     0,     0,     0,    98,   313,   100,   101,
     102,   103,     0,     0,     0,     0,     0,     0,     0,     0,
      38,    92,    93,    94,    95,     0,    96,     0,     0,     0,
       0,     0,     0,     0,    98,   356,   100,   101,   102,   103
};

static const yytype_int16 yycheck[] =
{
       5,    26,    71,    66,   150,    47,     0,    96,    49,    62,
     163,   110,   160,   232,   160,    75,    72,   266,    44,    45,
     234,    26,   129,    74,    61,    30,   210,    49,    70,    74,
      69,    74,    71,    27,    28,    78,    41,    88,    32,    33,
      65,    35,   300,    68,    49,    90,   260,    77,    78,    53,
      89,   158,    77,    96,    59,    73,    74,    83,    84,   207,
      65,   207,   151,    68,   153,    87,    71,    39,    40,    41,
      74,    75,    77,   136,    78,    79,   129,    71,     7,   135,
      61,    61,   171,   125,   342,    72,    74,   147,   187,   188,
     189,    72,    96,    73,    23,    67,    72,    69,   317,    71,
     163,   249,    90,   249,   129,   158,    35,   170,   151,   367,
     153,    69,    76,    71,   298,    73,   205,    81,    82,   377,
     125,   184,   306,    90,   129,   214,   375,   385,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    74,    61,
      42,    72,    61,   147,   149,    67,    76,   151,    67,   153,
      69,    53,    61,    68,    76,   339,   161,    76,    67,     7,
      69,    63,   167,   262,    89,    61,    89,   172,    68,   232,
      72,    67,    74,    75,    74,    23,    78,    79,   231,   242,
      28,   334,   224,   246,   368,   369,   370,    35,    67,    67,
      69,    69,   338,   234,    96,   258,     7,    76,   194,   195,
     196,   197,   386,    68,   388,   210,   259,   212,   392,    74,
      42,    43,    23,   302,    68,   304,   305,    28,    89,   224,
      74,    68,   247,    72,    35,    68,   231,    74,    68,   234,
      69,    74,    71,   135,    74,   137,   241,   231,    89,    90,
      91,    67,   247,    69,    75,   147,   240,   316,    28,   151,
      85,   153,    32,    33,   317,    46,    47,    70,   300,   110,
      69,    74,    71,    86,    73,   259,    48,    67,    27,    69,
     151,   334,   153,   336,    73,    74,   365,    73,    74,   190,
     191,    40,    41,    68,   192,   193,   198,   199,    74,    68,
      74,    88,    68,   298,    88,    90,    88,    90,    67,   150,
      67,   306,    61,    62,    63,    64,    65,    67,    67,   160,
      67,    88,    74,    72,    70,    73,    75,    76,    77,    78,
      79,    80,   316,    70,    90,    68,    68,    88,    36,    70,
      68,    68,    72,    67,   339,    90,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,    70,    70,   207,    70,    70,    90,
      70,    68,    90,   368,   369,   370,    70,    90,    12,    90,
      68,     0,    68,   200,     3,   203,   201,     6,     7,    65,
     202,   386,    11,   388,    13,    14,    15,   392,   204,    79,
      19,    20,    21,    22,    23,    78,    25,    26,   249,    28,
      29,   247,    31,    32,    33,    34,    35,    72,    37,    38,
     149,   262,   330,   165,    69,    35,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   240,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   224,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,   338,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,     3,    -1,    -1,
       6,     7,    -1,    90,    91,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    -1,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    91,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,     3,    -1,    -1,     6,     7,    -1,    76,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    91,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
       3,    -1,    -1,     6,     7,    -1,    76,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    91,    25,    26,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,     3,    37,    38,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    91,    -1,
      -1,    61,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      29,    91,    31,    32,    33,    34,    35,     3,    37,    38,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    50,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    91,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    68,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    -1,    15,    -1,    91,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    27,    -1,    29,    -1,    -1,
      32,    33,    34,    35,    -1,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    61,
      62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    -1,    15,    91,
      -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    29,    -1,    -1,    32,    33,    34,    35,    -1,
      37,    38,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    -1,    -1,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    -1,    15,    91,    -1,    -1,    -1,    20,    21,
      -1,    23,    -1,    25,    26,    -1,    -1,    29,    -1,    73,
      32,    33,    34,    35,    -1,    37,    38,     4,     5,    -1,
      -1,     8,     9,    10,    -1,    -1,    -1,    91,    -1,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    91,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,    -1,
      67,    40,    41,    -1,    -1,    72,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    -1,    67,    40,
      41,    -1,    -1,    72,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    67,    40,    41,    -1,
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
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    29,    31,    32,    33,
      34,    35,    37,    38,    91,   118,   120,   124,   125,   126,
     127,   135,   139,   140,   156,   174,   175,   176,    61,    93,
     136,    67,    76,    93,   119,   122,   123,   141,   142,   146,
     120,   121,   121,    72,    93,   121,   121,     0,   175,    72,
     141,   139,   144,   147,    90,    74,    89,   118,   120,   177,
     178,    67,    69,   142,   125,   128,   129,   130,   139,    72,
      93,    96,   137,   138,    68,   146,   139,   123,   141,    27,
      40,    41,    62,    63,    64,    65,    67,    72,    75,    76,
      77,    78,    79,    80,    93,    94,    95,    97,    98,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   157,    72,   165,   118,    93,   120,
     145,   148,   149,   150,   152,    28,   144,   147,   130,   131,
      73,   129,   132,   133,   134,   141,   131,   128,    73,    74,
      89,    67,   100,    67,   100,   100,   114,   116,   130,   153,
      69,    71,   158,   159,   160,   161,   162,    39,    40,    41,
      67,    69,    71,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    89,   115,   100,   102,    76,    81,    82,
      77,    78,    42,    43,    44,    45,    83,    84,    46,    47,
      75,    85,    86,    48,    49,    87,     4,     5,     8,     9,
      10,    16,    17,    18,    24,    30,    36,    93,   116,   118,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,    67,    69,   141,   146,   151,   154,   155,    68,    68,
      74,    74,   144,    76,   114,   143,    28,    74,    90,    88,
      73,    73,   138,   113,   117,   153,   153,    68,    74,    67,
     146,   154,    68,   117,    93,    73,    74,   157,    89,   162,
      93,    99,   114,   116,    93,   114,   102,   102,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   106,   106,   107,
     108,   109,   110,   111,   116,    90,   117,    90,    88,   163,
      67,    93,    67,   116,    67,    67,    88,    73,   168,    90,
      68,   148,   154,    76,   143,   155,    67,    69,    50,   150,
      93,   114,    70,    70,   114,   133,   117,    68,    68,   114,
      72,   102,    70,    73,   159,    68,    74,    70,    88,    88,
     163,    36,   118,   170,    90,   116,    90,   116,   116,   163,
      68,    68,    70,    70,    68,   148,    76,   143,    70,    70,
     158,   157,   114,   113,   163,    67,   170,    90,    68,    68,
      68,    68,    70,    70,    73,    74,   116,    90,   170,   163,
     163,   163,    73,    68,   170,    90,    12,    90,    68,   170,
     163,   163,    68,   163
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
      

/* Line 1455 of yacc.c  */
#line 2021 "src/parser.c"
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
#line 463 "bison/parser.y"


int main(int argc, char *argv[]) {
    yydebug = 0;
	yyin=fopen(argv[1],"r");
   	yyparse();
	fclose(yyin);

	if(analisisCorrecto)
        printf("\nAnalisis finalizado correctamente\n\n\n");


    return 0; 
}

int yyerror(const char *msg) {
	printf("\nFallo el analisis en la linea: %d %s\n\n\n",yylineno,msg);
	analisisCorrecto = 0;
	return 0; 
}
