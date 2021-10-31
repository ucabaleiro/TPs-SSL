
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
int yylex(void);
int yyerror(const char *s);
extern FILE* yyin;
extern int yylineno;
int analisisCorrecto = 1;



/* Line 189 of yacc.c  */
#line 89 "src/parser.c"

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
#line 20 "bison/parser.y"

    #include <list.h>
    typedef enum types { t_char, t_uchar, t_sint, t_usint, t_int, t_uint, t_long, t_ulong, t_llong, t_ullong, t_float, t_double, t_ldouble, t_ptr } types;



/* Line 209 of yacc.c  */
#line 120 "src/parser.c"

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
#line 26 "bison/parser.y"

    char* strval;
    types tval;
    int intval;
    t_list* list;



/* Line 214 of yacc.c  */
#line 212 "src/parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "src/parser.c"

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
#define YYFINAL  60
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1596

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  98
/* YYNRULES -- Number of rules.  */
#define YYNRULES  255
/* YYNRULES -- Number of states.  */
#define YYNSTATES  413

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
     238,   240,   244,   246,   250,   253,   256,   259,   262,   265,
     266,   268,   269,   271,   273,   277,   279,   283,   285,   287,
     289,   291,   293,   295,   297,   299,   301,   303,   305,   307,
     309,   311,   313,   315,   317,   319,   321,   327,   332,   335,
     337,   339,   341,   344,   348,   351,   354,   355,   357,   359,
     363,   365,   369,   370,   372,   378,   385,   388,   389,   391,
     393,   397,   399,   403,   405,   407,   409,   411,   414,   416,
     418,   422,   428,   435,   442,   448,   453,   458,   459,   461,
     462,   464,   465,   467,   470,   474,   476,   479,   481,   485,
     487,   491,   494,   497,   498,   500,   502,   506,   508,   511,
     513,   516,   518,   522,   526,   530,   534,   537,   542,   547,
     552,   556,   558,   560,   564,   569,   572,   577,   578,   580,
     583,   585,   588,   592,   595,   597,   599,   601,   603,   605,
     607,   610,   611,   616,   617,   623,   624,   629,   630,   635,
     636,   638,   640,   643,   645,   647,   650,   651,   653,   654,
     658,   659,   666,   671,   678,   679,   686,   687,   696,   697,
     701,   710,   718,   722,   725,   728,   732,   734,   737,   739,
     741,   746,   749,   750,   752,   754
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     185,     0,    -1,    61,    -1,    62,    -1,    63,    -1,    64,
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
     116,    74,   114,    -1,   113,    -1,   119,   121,    90,    -1,
       1,    90,    -1,   124,   120,    -1,   125,   120,    -1,   139,
     120,    -1,   140,   120,    -1,    -1,   119,    -1,    -1,   122,
      -1,   123,    -1,   122,    74,   123,    -1,   141,    -1,   141,
      89,   157,    -1,    31,    -1,    14,    -1,    28,    -1,     3,
      -1,    22,    -1,    34,    -1,     6,    -1,    25,    -1,    20,
      -1,    21,    -1,    15,    -1,    11,    -1,    26,    -1,    33,
      -1,    37,    -1,    38,    -1,   126,    -1,   135,    -1,   156,
      -1,   127,    93,    72,   128,    73,    -1,   127,    72,   128,
      73,    -1,   127,    93,    -1,    29,    -1,    32,    -1,   129,
      -1,   128,   129,    -1,   130,   132,    90,    -1,   125,   131,
      -1,   139,   131,    -1,    -1,   130,    -1,   133,    -1,   132,
      74,   133,    -1,   141,    -1,   134,    88,   117,    -1,    -1,
     141,    -1,    13,   136,    72,   137,    73,    -1,    13,   136,
      72,   137,    74,    73,    -1,    13,    93,    -1,    -1,    93,
      -1,   138,    -1,   137,    74,   138,    -1,    96,    -1,   138,
      89,   117,    -1,     7,    -1,    23,    -1,    35,    -1,    19,
      -1,   146,   142,    -1,   142,    -1,    93,    -1,    67,   141,
      68,    -1,   142,    69,   144,   143,    70,    -1,   142,    69,
      28,   144,   114,    70,    -1,   142,    69,   147,    28,   114,
      70,    -1,   142,    69,   144,    76,    70,    -1,   142,    67,
     148,    68,    -1,   142,    67,   145,    68,    -1,    -1,   114,
      -1,    -1,   147,    -1,    -1,   152,    -1,    76,   144,    -1,
      76,   144,   146,    -1,   139,    -1,   147,   139,    -1,   149,
      -1,   149,    74,    50,    -1,   150,    -1,   149,    74,   150,
      -1,   119,   141,    -1,   119,   151,    -1,    -1,   154,    -1,
      93,    -1,   152,    74,    93,    -1,   130,    -1,   130,   154,
      -1,   146,    -1,   146,   155,    -1,   155,    -1,    67,   154,
      68,    -1,    69,   143,    70,    -1,    69,    76,    70,    -1,
      67,   148,    68,    -1,    67,    68,    -1,   155,    69,   143,
      70,    -1,   155,    69,    76,    70,    -1,   155,    67,   148,
      68,    -1,   155,    67,    68,    -1,    91,    -1,   114,    -1,
      72,   158,    73,    -1,    72,   158,    74,    73,    -1,   159,
     157,    -1,   158,    74,   159,   157,    -1,    -1,   160,    -1,
     161,    89,    -1,   162,    -1,   161,   162,    -1,    69,   117,
      70,    -1,    71,    93,    -1,   164,    -1,   168,    -1,   173,
      -1,   175,    -1,   179,    -1,   184,    -1,     1,    90,    -1,
      -1,    93,    88,   165,   163,    -1,    -1,     5,   166,   117,
      88,   163,    -1,    -1,     9,   167,    88,   163,    -1,    -1,
      72,   169,   170,    73,    -1,    -1,   171,    -1,   172,    -1,
     171,   172,    -1,   118,    -1,   163,    -1,   174,    90,    -1,
      -1,   116,    -1,    -1,    18,   176,   178,    -1,    -1,    30,
     177,    67,   116,    68,   163,    -1,    67,   116,    68,   163,
      -1,    67,   116,    68,   163,    12,   163,    -1,    -1,    36,
     180,    67,   116,    68,   163,    -1,    -1,    10,   181,   163,
      36,    67,   116,    68,    90,    -1,    -1,    16,   182,   183,
      -1,    67,   174,    90,   174,    90,   174,    68,   163,    -1,
      67,   118,   174,    90,   174,    68,   163,    -1,    17,    93,
      90,    -1,     8,    90,    -1,     4,    90,    -1,    24,   116,
      90,    -1,   186,    -1,   185,   186,    -1,   187,    -1,   118,
      -1,   119,   141,   188,   168,    -1,     1,    73,    -1,    -1,
     189,    -1,   118,    -1,   189,   118,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   111,   112,   113,   116,   118,   120,   121,
     122,   123,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   137,   138,   141,   142,   143,   144,   145,   146,   149,
     149,   149,   149,   149,   149,   151,   152,   155,   156,   157,
     158,   161,   162,   163,   166,   167,   168,   171,   172,   173,
     174,   175,   179,   180,   181,   184,   185,   188,   189,   192,
     193,   196,   197,   200,   201,   204,   205,   208,   209,   212,
     212,   212,   212,   212,   212,   213,   213,   213,   213,   213,
     216,   217,   220,   222,   231,   234,   235,   236,   237,   240,
     241,   244,   245,   248,   249,   252,   253,   256,   257,   258,
     259,   260,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   279,   280,   281,   284,
     284,   286,   287,   290,   292,   293,   296,   297,   300,   301,
     304,   305,   308,   309,   312,   313,   314,   317,   318,   321,
     322,   325,   326,   329,   330,   331,   334,   336,   337,   340,
     341,   342,   343,   344,   345,   346,   347,   350,   351,   354,
     355,   358,   359,   362,   363,   366,   367,   370,   371,   374,
     375,   378,   379,   382,   383,   386,   387,   390,   391,   394,
     395,   396,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   410,   412,   413,   414,   417,   418,   421,   422,   425,
     427,   428,   431,   432,   435,   436,   437,   438,   439,   440,
     441,   444,   444,   445,   445,   446,   446,   449,   449,   451,
     452,   455,   456,   459,   460,   463,   465,   466,   469,   469,
     470,   470,   473,   474,   477,   477,   478,   478,   479,   479,
     482,   483,   486,   487,   488,   489,   492,   493,   496,   497,
     500,   501,   504,   505,   508,   509
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
  "declaration_specifiers", "declaration_specifiers.opt",
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
      98,    99,    99,   100,   100,   100,   100,   100,   100,   101,
     101,   101,   101,   101,   101,   102,   102,   103,   103,   103,
     103,   104,   104,   104,   105,   105,   105,   106,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   118,   118,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   124,
     124,   124,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   126,   126,   126,   127,
     127,   128,   128,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   134,   134,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   140,   141,   141,   142,
     142,   142,   142,   142,   142,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   154,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   156,   157,   157,   157,   158,   158,   159,   159,   160,
     161,   161,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   165,   164,   166,   164,   167,   164,   169,   168,   170,
     170,   171,   171,   172,   172,   173,   174,   174,   176,   175,
     177,   175,   178,   178,   180,   179,   181,   179,   182,   179,
     183,   183,   184,   184,   184,   184,   185,   185,   186,   186,
     187,   187,   188,   188,   189,   189
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
       2,     0,     4,     0,     5,     0,     4,     0,     4,     0,
       1,     1,     2,     1,     1,     2,     0,     1,     0,     3,
       0,     6,     4,     6,     0,     6,     0,     8,     0,     3,
       8,     7,     3,     2,     2,     3,     1,     2,     1,     1,
       4,     2,     0,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   100,   103,   143,   108,   137,    98,   107,   146,
     105,   106,   101,   144,   104,   109,    99,   119,    97,   120,
     110,   102,   145,   111,   112,   191,   249,    91,    89,    89,
     113,     0,   114,    89,    89,   115,     0,   246,   248,   251,
      84,     2,   136,     0,     0,   159,   149,     0,    92,    93,
       0,   148,     0,    90,    85,    86,     0,   118,    87,    88,
       1,   247,     0,     0,   165,   163,   160,    83,     0,     0,
       0,   254,    91,     0,     0,   161,   159,   147,   126,     0,
     121,   132,   126,     0,     7,   141,     0,   139,   150,   164,
     166,    94,    95,     0,     0,     0,     3,     4,     5,     6,
       0,   197,    29,    30,    31,    32,    33,    34,     8,     9,
      10,    12,    23,    35,     0,    37,    41,    44,    47,    52,
      55,    57,    59,    61,    63,    65,    67,   192,    96,   217,
     250,   255,   175,   173,     0,     0,   167,   169,   162,   159,
     157,   160,   127,   124,   117,   122,     0,   128,     0,   130,
     125,     0,   134,     0,     0,     0,    27,     0,    24,    25,
      80,     0,   177,     0,     0,     0,     0,     0,   198,     0,
     200,     0,    17,    18,     0,     0,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    69,     0,    35,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,   171,   179,   172,   174,   181,   156,   155,
       0,     0,     0,    30,   158,     0,     0,   132,   123,     0,
     116,   135,   140,    82,   142,     0,     0,    11,     0,     0,
     179,   178,     0,     0,   203,   193,   197,   195,   199,   201,
      16,     0,    21,     0,    15,    68,    38,    39,    40,    42,
      43,    45,    46,    50,    51,    48,    49,    53,    54,    56,
      58,    60,    62,    64,     0,     0,     0,   213,     0,   215,
     236,   238,     0,   228,     0,   230,   234,     8,   227,   223,
     224,   204,   205,     0,     0,   221,   206,     0,   207,   208,
     209,   186,     0,     0,    30,     0,   180,     0,   157,   168,
     170,   176,     0,   154,   151,     0,   129,   131,    28,     0,
      81,   197,    36,   202,   194,     0,    14,     0,    13,     0,
      84,   244,     0,   243,     0,     0,     0,     0,     0,     0,
       0,     0,   211,   218,   222,   225,   185,   182,   184,   183,
     190,     0,    30,     0,   152,   153,     0,   196,    22,    66,
       0,     0,     0,     0,     0,   239,   242,     0,   229,   245,
       0,     0,     0,   189,   188,   187,    19,   197,     0,   216,
     210,     0,   226,     0,     0,     0,     0,   212,    20,   214,
       0,     0,   226,     0,     0,     0,     0,   226,     0,   232,
     231,   235,     0,     0,   226,     0,   237,     0,     0,   233,
     241,     0,   240
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   108,   109,   110,    85,   111,   112,   251,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   160,   188,   288,   234,    26,    72,    54,    47,
      48,    49,    28,    29,    30,    31,    79,    80,    81,   143,
     146,   147,   148,    32,    43,    86,    87,    33,    34,    63,
      51,   225,    65,   134,    52,    66,   302,   136,   137,   215,
     138,   163,   303,   217,    35,   128,   166,   167,   168,   169,
     170,   290,   291,   372,   332,   334,   292,   210,   293,   294,
     295,   296,   297,   298,   338,   340,   368,   299,   341,   335,
     336,   365,   300,    36,    37,    38,    73,    74
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -341
static const yytype_int16 yypact[] =
{
     852,   -32,  -341,  -341,  -341,  -341,   -41,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,    74,  1215,  1215,
    -341,     2,  -341,  1215,  1215,  -341,   397,  -341,  -341,  -341,
    -341,  -341,   -27,     4,    74,    20,  -341,    -9,   -44,  -341,
     729,   140,    40,  -341,  -341,  -341,   432,    12,  -341,  -341,
    -341,  -341,   -41,    28,  -341,    39,    20,  -341,    74,    33,
     220,  -341,    74,    76,   810,  1099,    65,   140,   432,  1323,
    -341,    74,   432,   432,  -341,  -341,    90,    67,  -341,  -341,
    -341,  -341,   111,  1376,  1404,  1404,  -341,  -341,  -341,  -341,
    1248,   157,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,   151,   267,  1432,  -341,    55,    96,   144,   -16,
     198,    69,   127,   149,   177,   -33,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,    42,   200,   209,   204,  -341,   205,    20,
    1460,   126,  -341,  -341,  -341,  -341,   -40,  -341,   171,   192,
    -341,  1356,  -341,    19,  1432,  1248,  -341,  1248,  -341,  -341,
    -341,   107,    63,   218,  1432,   -41,   189,   220,  -341,   -36,
    -341,   -41,  -341,  -341,  1432,  1432,   -41,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  1432,  -341,
    -341,  1432,  1432,  1432,  1432,  1432,  1432,  1432,  1432,  1432,
    1432,  1432,  1432,  1432,  1432,  1432,  1432,  1432,  1432,  1432,
     476,   965,  1488,  -341,    91,  -341,  -341,   174,  -341,  -341,
    1136,   -41,  1432,   219,  -341,   221,  1432,    74,  -341,  1432,
    -341,  -341,    67,  -341,  -341,   222,   233,  -341,  1432,  1032,
     185,  -341,  1343,   232,  -341,  -341,   158,  -341,  -341,  -341,
    -341,   128,  -341,    52,  -341,  -341,  -341,  -341,  -341,    55,
      55,    96,    96,   144,   144,   144,   144,   -16,   -16,   198,
      69,   127,   149,   177,    11,   214,   215,  -341,   216,  -341,
    -341,  -341,   -41,  -341,  1432,  -341,  -341,   223,   234,  -341,
    -341,  -341,  -341,   236,   567,  -341,  -341,   217,  -341,  -341,
    -341,  -341,   244,   245,   247,   258,   174,  1174,  1516,  -341,
    -341,  -341,   278,  -341,  -341,   279,  -341,  -341,   242,   242,
    -341,   157,  -341,  -341,  -341,   220,  -341,  1432,  -341,  1432,
    -341,  -341,  1432,  -341,   227,   887,   283,   261,   285,   -25,
     286,   287,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,   289,   288,   290,  -341,  -341,   191,  -341,  -341,  -341,
     271,   887,   272,   325,   648,  -341,  -341,  1432,  -341,  -341,
    1432,  1432,   887,  -341,  -341,  -341,  -341,   167,   887,  -341,
    -341,   296,  1432,   274,   142,   143,   145,  -341,  -341,  -341,
    1432,   275,  1432,   887,   887,   887,   156,  1432,   277,   357,
    -341,  -341,   280,   303,  1432,   887,  -341,   887,   305,  -341,
    -341,   887,  -341
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -341,    -6,  -341,  -341,  -341,  -341,  -341,  -341,   139,  -341,
    -102,    72,    73,    50,    70,   170,   172,   169,   173,   168,
    -341,  -147,   -69,  -341,   -96,  -156,   -48,     3,   165,  -341,
    -341,   310,  -341,    46,  -341,  -341,   299,   -64,   -60,   297,
    -341,   159,  -341,  -341,  -341,  -341,   230,    38,  -341,   -21,
     -42,  -198,   -53,  -341,   -56,   308,   -70,  -341,   175,  -341,
    -341,   100,  -114,  -170,  -341,  -154,    64,  -235,  -341,  -341,
     224,  -227,  -341,  -341,  -341,  -341,   317,  -341,  -341,  -341,
      97,  -341,  -340,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,   356,  -341,  -341,  -341
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -254
static const yytype_int16 yytable[] =
{
      42,   127,    71,    27,   161,   135,    50,   233,   243,    89,
      77,   325,   190,   247,   305,   145,   208,   233,   142,   216,
      41,    46,   142,   140,   383,    57,   131,     4,   198,   199,
      68,    53,    53,   164,   227,   165,    53,    53,    46,    27,
     162,    39,   391,    13,   306,  -138,    46,    92,   241,   238,
     228,    92,   398,   248,   209,    22,    84,   403,    40,   161,
     149,   161,    46,    41,   408,   369,    46,   200,   201,   132,
     306,   224,     4,   317,    56,    46,    62,   214,   133,   253,
      41,    67,   233,    64,    83,   238,   222,   145,    13,   256,
     257,   258,   231,   139,    82,   162,    88,   162,   127,   329,
      22,    41,    78,    41,    90,   252,   240,    44,   363,   211,
     353,   212,   213,   274,    64,    45,    82,    82,    45,   255,
      82,    82,   328,    40,    78,    78,   238,    46,    78,    78,
     239,   191,   212,     4,   379,    41,   192,   193,    82,    45,
     322,    44,   325,   224,   204,   387,    78,    84,   129,    13,
      45,   389,    41,   312,   226,   214,   154,   315,   211,   244,
     212,    22,   289,   152,   153,   250,   399,   400,   401,   320,
     254,   357,    77,   194,   195,   237,   360,    64,   409,    90,
     410,   238,   359,   240,   412,   233,   196,   197,   339,    82,
     171,   172,   173,    82,    55,    82,   326,    78,    58,    59,
      70,    78,   327,    78,   287,    46,   149,    75,    46,    76,
     393,   394,   205,   395,   133,   311,   238,   238,   174,   238,
     175,    46,   176,   133,   402,   207,   164,   164,   165,   165,
     238,   324,   156,   158,   159,   206,   164,   351,   165,   224,
     388,   307,   133,   308,   202,   203,   289,    93,   263,   264,
     265,   266,   239,   189,   212,   235,   127,   236,   358,   229,
      94,    95,   245,   246,   376,   377,   259,   260,   218,   261,
     262,   384,   267,   268,   385,   386,   337,   219,   220,   221,
    -133,    41,    96,    97,    98,    99,   242,   100,   287,   313,
     318,   314,   101,   189,   396,   102,   103,   104,   105,   106,
     107,   319,   323,   189,   330,   331,   333,   345,   238,   343,
     133,   342,   346,   347,   321,   361,   382,   348,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   349,   287,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   354,   355,
     364,   366,   367,   370,   371,   287,   187,   373,   374,   378,
     375,   381,   380,   390,   392,   397,   287,   404,   189,   405,
     406,   407,   287,   411,   269,   271,   273,   270,    91,   150,
     272,   189,   151,   232,   141,   356,   316,   287,   287,   287,
     130,   344,    61,   249,     0,   310,     0,    60,     1,   287,
       2,   287,     0,     3,     4,   287,     0,     0,     5,     0,
       6,     7,     8,     0,     0,     0,     9,    10,    11,    12,
      13,     0,    14,    15,     0,    16,    17,     0,    18,    19,
      20,    21,    22,     0,    23,    24,     0,     0,     3,     4,
       0,     0,     0,     5,     0,     6,     0,     8,     0,     0,
       0,     0,    10,    11,     0,    13,     0,    14,    15,     0,
       0,    17,     0,     0,    19,    20,    21,    22,   189,    23,
      24,   189,     0,     0,     0,     0,     0,   275,     0,     2,
     276,   277,     3,     4,   278,   279,   280,     5,    25,     6,
       7,     8,   281,   282,   283,     9,    10,    11,    12,    13,
     284,    14,    15,    93,    16,    17,   285,    18,    19,    20,
      21,    22,   286,    23,    24,     0,    94,    95,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    96,    97,
      98,    99,     0,   100,     0,     0,     0,     0,   129,  -219,
       0,   102,   103,   104,   105,   106,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -226,    25,   275,     0,
       2,   276,   277,     3,     4,   278,   279,   280,     5,     0,
       6,     7,     8,   281,   282,   283,     9,    10,    11,    12,
      13,   284,    14,    15,    93,    16,    17,   285,    18,    19,
      20,    21,    22,   286,    23,    24,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    96,
      97,    98,    99,     0,   100,     0,     0,     0,     0,   129,
    -220,     0,   102,   103,   104,   105,   106,   107,     0,    69,
       0,     2,     0,     0,     3,     4,     0,  -226,    25,     5,
       0,     6,     7,     8,     0,     0,     0,     9,    10,    11,
      12,    13,     0,    14,    15,    93,    16,    17,     0,    18,
      19,    20,    21,    22,     0,    23,    24,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
      96,    97,    98,    99,     0,   100,     0,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,     0,
      69,     0,     2,     0,     0,     3,     4,     0,  -226,    25,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,     0,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,     0,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -252,     0,   -95,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     2,     0,     0,     3,     4,    70,   -95,
      25,     5,     0,     6,     7,     8,     0,     0,     0,     9,
      10,    11,    12,    13,     0,    14,    15,     0,    16,    17,
       0,    18,    19,    20,    21,    22,     0,    23,    24,     0,
       0,     0,     0,     1,     0,     2,     0,     0,     3,     4,
       0,     0,     0,     5,     0,     6,     7,     8,     0,     0,
       0,     9,    10,    11,    12,    13,     0,    14,    15,     0,
      16,    17,  -253,    18,    19,    20,    21,    22,   362,    23,
      24,   276,   277,     0,     0,   278,   279,   280,     0,     0,
       0,    25,     0,   281,   282,   283,     0,     0,     0,     0,
       0,   284,     0,     0,    93,     0,     0,   285,     0,     0,
       0,     0,     0,   286,     0,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,    41,    96,
      97,    98,    99,     0,   100,     0,     0,     0,     0,   129,
       0,     0,   102,   103,   104,   105,   106,   107,     2,     0,
       0,     3,     4,     0,     0,     0,     5,  -226,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,     0,    16,    17,     0,    18,    19,    20,    21,
      22,     0,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,   211,   301,   212,     2,     0,     0,     3,     4,
       0,    45,     0,     5,     0,     6,     7,     8,     0,     0,
       0,     9,    10,    11,    12,    13,    25,    14,    15,     0,
      16,    17,     0,    18,    19,    20,    21,    22,     0,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   239,
     301,   212,     2,     0,     0,     3,     4,     0,    45,     0,
       5,     0,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,    13,    25,    14,    15,     0,    16,    17,     0,
      18,    19,    20,    21,    22,     0,    23,    24,     0,     2,
       0,     0,     3,     4,     0,     0,     0,     5,     0,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    12,    13,
      41,    14,    15,     0,    16,    17,     0,    18,    19,    20,
      21,    22,     0,    23,    24,     0,     0,     2,     0,     0,
       3,     4,     0,     0,     0,     5,   309,     6,     7,     8,
      25,     0,     0,     9,    10,    11,    12,    13,     0,    14,
      15,     0,    16,    17,     0,    18,    19,    20,    21,    22,
       0,    23,    24,     0,     0,     0,     0,     0,     2,     0,
       0,     3,     4,     0,     0,     0,     5,    25,     6,     7,
       8,     0,     0,     0,     9,    10,    11,    12,    13,     0,
      14,    15,   350,    16,    17,     0,    18,    19,    20,    21,
      22,     0,    23,    24,     3,     4,     0,     0,     0,     5,
       0,     6,     0,     8,     0,    25,     0,     0,    10,    11,
       0,    13,     0,    14,    15,    93,     0,    17,     0,     0,
      19,    20,    21,    22,     0,    23,    24,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,    41,
      96,    97,    98,    99,     0,   100,     0,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,     3,
       4,     0,     0,     0,     5,     0,     6,     0,     8,    25,
       0,     0,     0,    10,    11,     0,    13,     0,    14,    15,
       0,     0,    17,     0,     0,    19,    20,    21,    22,     0,
      23,    24,     3,     4,     0,     0,     0,     5,     0,     6,
      93,     8,     0,     0,     0,     0,    10,    11,     0,    13,
       0,    14,    15,    94,    95,    17,     0,     0,    19,    20,
      21,    22,     0,    23,    24,     0,   144,     0,     0,     0,
       0,     0,     0,    93,    41,    96,    97,    98,    99,     0,
     100,     0,     0,     0,    25,   321,    94,    95,   102,   103,
     104,   105,   106,   107,     0,     0,     0,     0,     0,   230,
       0,    93,     0,     0,     0,     0,     0,    41,    96,    97,
      98,    99,     0,   155,    94,    95,     0,    25,     0,     0,
       0,   102,   103,   104,   105,   106,   107,     0,     0,    93,
       0,     0,     0,     0,     0,    41,    96,    97,    98,    99,
       0,   157,    94,    95,     0,     0,     0,     0,     0,   102,
     103,   104,   105,   106,   107,     0,     0,    93,     0,     0,
       0,     0,     0,    41,    96,    97,    98,    99,     0,   100,
      94,    95,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,     0,     0,    93,     0,     0,     0,     0,
       0,    41,    96,    97,    98,    99,     0,   100,    94,    95,
       0,     0,     0,     0,     0,   102,   223,   104,   105,   106,
     107,     0,     0,    93,     0,     0,     0,     0,     0,    41,
      96,    97,    98,    99,     0,   100,    94,    95,     0,     0,
       0,     0,     0,   102,   304,   104,   105,   106,   107,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    96,    97,
      98,    99,     0,   100,     0,     0,     0,     0,     0,     0,
       0,   102,   352,   104,   105,   106,   107
};

static const yytype_int16 yycheck[] =
{
       6,    70,    50,     0,   100,    75,    27,   154,   164,    65,
      52,   246,   114,   167,   212,    79,    49,   164,    78,   133,
      61,    27,    82,    76,   364,    31,    74,     7,    44,    45,
      74,    28,    29,    69,    74,    71,    33,    34,    44,    36,
     100,    73,   382,    23,   214,    72,    52,    68,   162,    74,
      90,    72,   392,    89,    87,    35,    62,   397,    90,   155,
      81,   157,    68,    61,   404,    90,    72,    83,    84,    75,
     240,   140,     7,   229,    72,    81,    72,   133,    75,   175,
      61,    90,   229,    45,    72,    74,   139,   151,    23,   191,
     192,   193,    73,    28,    56,   155,    68,   157,   167,    88,
      35,    61,    56,    61,    66,   174,   162,    67,   335,    67,
     308,    69,   133,   209,    76,    76,    78,    79,    76,   188,
      82,    83,    70,    90,    78,    79,    74,   133,    82,    83,
      67,    76,    69,     7,   361,    61,    81,    82,   100,    76,
     242,    67,   377,   212,    75,   372,   100,   153,    72,    23,
      76,   378,    61,   222,    28,   211,    89,   226,    67,   165,
      69,    35,   210,    73,    74,   171,   393,   394,   395,   238,
     176,   325,   214,    77,    78,    68,   332,   139,   405,   141,
     407,    74,   329,   239,   411,   332,    42,    43,   284,   151,
      39,    40,    41,   155,    29,   157,    68,   151,    33,    34,
      89,   155,    74,   157,   210,   211,   227,    67,   214,    69,
      68,    68,    85,    68,   211,   221,    74,    74,    67,    74,
      69,   227,    71,   220,    68,    48,    69,    69,    71,    71,
      74,    73,    93,    94,    95,    86,    69,   307,    71,   308,
      73,    67,   239,    69,    46,    47,   294,    27,   198,   199,
     200,   201,    67,   114,    69,   155,   325,   157,   327,    88,
      40,    41,    73,    74,    73,    74,   194,   195,    68,   196,
     197,   367,   202,   203,   370,   371,   282,    68,    74,    74,
      88,    61,    62,    63,    64,    65,    68,    67,   294,    70,
      68,    70,    72,   154,   390,    75,    76,    77,    78,    79,
      80,    68,    70,   164,    90,    90,    90,    90,    74,    73,
     307,    88,    68,    68,    72,    88,   364,    70,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    70,   335,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,    70,    70,
      67,    90,    67,    67,    67,   361,    89,    68,    70,    88,
      70,    36,    90,    67,    90,    90,   372,    90,   229,    12,
      90,    68,   378,    68,   204,   206,   208,   205,    68,    82,
     207,   242,    83,   153,    76,   321,   227,   393,   394,   395,
      73,   294,    36,   169,    -1,   220,    -1,     0,     1,   405,
       3,   407,    -1,     6,     7,   411,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    -1,
      -1,    29,    -1,    -1,    32,    33,    34,    35,   329,    37,
      38,   332,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    91,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    72,    73,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    91,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,    72,
      73,    -1,    75,    76,    77,    78,    79,    80,    -1,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,    90,    91,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    -1,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,    90,    91,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,    89,    90,
      91,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,     1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    72,    31,    32,    33,    34,    35,     1,    37,
      38,     4,     5,    -1,    -1,     8,     9,    10,    -1,    -1,
      -1,    91,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    27,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    75,    76,    77,    78,    79,    80,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    90,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,     3,    -1,    -1,     6,     7,
      -1,    76,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    91,    25,    26,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,     3,    -1,    -1,     6,     7,    -1,    76,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    91,    25,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    -1,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      61,    25,    26,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    50,    13,    14,    15,
      91,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    91,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
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
      27,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    40,    41,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    61,    62,    63,    64,    65,    -1,
      67,    -1,    -1,    -1,    91,    72,    40,    41,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    67,    40,    41,    -1,    91,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    65,
      -1,    67,    40,    41,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    -1,    67,
      40,    41,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    -1,    67,    40,    41,
      -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    -1,    67,    40,    41,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     6,     7,    11,    13,    14,    15,    19,
      20,    21,    22,    23,    25,    26,    28,    29,    31,    32,
      33,    34,    35,    37,    38,    91,   118,   119,   124,   125,
     126,   127,   135,   139,   140,   156,   185,   186,   187,    73,
      90,    61,    93,   136,    67,    76,    93,   121,   122,   123,
     141,   142,   146,   119,   120,   120,    72,    93,   120,   120,
       0,   186,    72,   141,   139,   144,   147,    90,    74,     1,
      89,   118,   119,   188,   189,    67,    69,   142,   125,   128,
     129,   130,   139,    72,    93,    96,   137,   138,    68,   146,
     139,   123,   141,    27,    40,    41,    62,    63,    64,    65,
      67,    72,    75,    76,    77,    78,    79,    80,    93,    94,
      95,    97,    98,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   157,    72,
     168,   118,    93,   119,   145,   148,   149,   150,   152,    28,
     144,   147,   130,   131,    73,   129,   132,   133,   134,   141,
     131,   128,    73,    74,    89,    67,   100,    67,   100,   100,
     114,   116,   130,   153,    69,    71,   158,   159,   160,   161,
     162,    39,    40,    41,    67,    69,    71,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    89,   115,   100,
     102,    76,    81,    82,    77,    78,    42,    43,    44,    45,
      83,    84,    46,    47,    75,    85,    86,    48,    49,    87,
     169,    67,    69,   141,   146,   151,   154,   155,    68,    68,
      74,    74,   144,    76,   114,   143,    28,    74,    90,    88,
      73,    73,   138,   113,   117,   153,   153,    68,    74,    67,
     146,   154,    68,   117,    93,    73,    74,   157,    89,   162,
      93,    99,   114,   116,    93,   114,   102,   102,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   106,   106,   107,
     108,   109,   110,   111,   116,     1,     4,     5,     8,     9,
      10,    16,    17,    18,    24,    30,    36,    93,   116,   118,
     163,   164,   168,   170,   171,   172,   173,   174,   175,   179,
     184,    68,   148,   154,    76,   143,   155,    67,    69,    50,
     150,    93,   114,    70,    70,   114,   133,   117,    68,    68,
     114,    72,   102,    70,    73,   159,    68,    74,    70,    88,
      90,    90,   166,    90,   167,   181,   182,    93,   176,   116,
     177,   180,    88,    73,   172,    90,    68,    68,    70,    70,
      68,   148,    76,   143,    70,    70,   158,   157,   114,   113,
     117,    88,     1,   163,    67,   183,    90,    67,   178,    90,
      67,    67,   165,    68,    70,    70,    73,    74,    88,   163,
      90,    36,   118,   174,   116,   116,   116,   163,    73,   163,
      67,   174,    90,    68,    68,    68,   116,    90,   174,   163,
     163,   163,    68,   174,    90,    12,    90,    68,   174,   163,
     163,    68,   163
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
#line 109 "bison/parser.y"
    {(yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 223 "bison/parser.y"
    {
                    void printearDeclaracion(void* elem){
                        printf("Linea %i: Declaracion - %s%s\n", yylineno, (yyvsp[(1) - (3)].strval), (char*)elem);
                    }
                    list_iterate((yyvsp[(2) - (3)].list), printearDeclaracion);
                    list_destroy_and_destroy_elements((yyvsp[(2) - (3)].list), free);
                    free((yyvsp[(1) - (3)].strval));
                ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 231 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 234 "bison/parser.y"
    {(yyval.strval) = string_from_format("%s%s", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].strval));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 235 "bison/parser.y"
    {(yyval.strval) = string_from_format("%s%s", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].strval));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 236 "bison/parser.y"
    {(yyval.strval) = string_from_format("%s%s", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].strval));;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 237 "bison/parser.y"
    {(yyval.strval) = string_from_format("%s%s", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].strval));;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 240 "bison/parser.y"
    {(yyval.strval) = "";;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 241 "bison/parser.y"
    {(yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 244 "bison/parser.y"
    {(yyval.list) = list_create();;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 245 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (1)].list);;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 248 "bison/parser.y"
    {(yyval.list) = list_create(); list_add((yyval.list), (yyvsp[(1) - (1)].strval));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 249 "bison/parser.y"
    {(yyval.list) = (yyvsp[(1) - (3)].list); list_add((yyval.list), (yyvsp[(3) - (3)].strval));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 252 "bison/parser.y"
    {(yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 253 "bison/parser.y"
    {(yyval.strval) = (yyvsp[(1) - (3)].strval);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 256 "bison/parser.y"
    {(yyval.strval) = "typedef ";;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 257 "bison/parser.y"
    {(yyval.strval) = "extern ";;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 258 "bison/parser.y"
    {(yyval.strval) = "static ";;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 259 "bison/parser.y"
    {(yyval.strval) = "auto ";;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 260 "bison/parser.y"
    {(yyval.strval) = "register ";;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 263 "bison/parser.y"
    {(yyval.strval) = "void ";;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 264 "bison/parser.y"
    {(yyval.strval) = "char ";;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 265 "bison/parser.y"
    {(yyval.strval) = "short ";;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 266 "bison/parser.y"
    {(yyval.strval) = "int ";;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 267 "bison/parser.y"
    {(yyval.strval) = "long ";;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 268 "bison/parser.y"
    {(yyval.strval) = "float ";;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 269 "bison/parser.y"
    {(yyval.strval) = "double ";;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 270 "bison/parser.y"
    {(yyval.strval) = "signed ";;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 271 "bison/parser.y"
    {(yyval.strval) = "unsigned ";;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 272 "bison/parser.y"
    {(yyval.strval) = "bool ";;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 273 "bison/parser.y"
    {(yyval.strval) = "complex ";;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 274 "bison/parser.y"
    {(yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 275 "bison/parser.y"
    {(yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 276 "bison/parser.y"
    {(yyval.strval) = "t ";;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 279 "bison/parser.y"
    { (yyval.strval) = string_from_format("%s%s ", (yyvsp[(1) - (5)].strval), (yyvsp[(2) - (5)].strval));;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 280 "bison/parser.y"
    { (yyval.strval) = string_from_format("%s anonimo ", (yyvsp[(1) - (4)].strval));;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 281 "bison/parser.y"
    { (yyval.strval) = string_from_format("%s%s ", (yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].strval));;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 284 "bison/parser.y"
    {(yyval.strval) = "struct ";;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 284 "bison/parser.y"
    {(yyval.strval) = "union ";;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 312 "bison/parser.y"
    { (yyval.strval) = string_from_format("enum %s ", (yyvsp[(2) - (5)].strval));;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 313 "bison/parser.y"
    { (yyval.strval) = string_from_format("enum %s ", (yyvsp[(2) - (6)].strval));;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 314 "bison/parser.y"
    { (yyval.strval) = string_from_format("enum %s ", (yyvsp[(2) - (2)].strval));;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 317 "bison/parser.y"
    {(yyval.strval) = "anonimo";;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 318 "bison/parser.y"
    {(yyval.strval) = (yyvsp[(1) - (1)].strval);;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 329 "bison/parser.y"
    {(yyval.strval) = "const ";;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 330 "bison/parser.y"
    {(yyval.strval) = "restrict ";;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 331 "bison/parser.y"
    {(yyval.strval) = "volatile ";;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 334 "bison/parser.y"
    {(yyval.strval) = "inline ";;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 336 "bison/parser.y"
    {string_append(&(yyvsp[(1) - (2)].strval), (yyvsp[(2) - (2)].strval)); (yyval.strval) = (yyvsp[(1) - (2)].strval);;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 337 "bison/parser.y"
    {(yyval.strval) = string_duplicate((yyvsp[(1) - (1)].strval));;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 340 "bison/parser.y"
    {(yyval.strval) = string_duplicate((yyvsp[(1) - (1)].strval));;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 341 "bison/parser.y"
    {(yyval.strval) = string_from_format("(%s)", (yyvsp[(2) - (3)].strval));;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 342 "bison/parser.y"
    {string_append(&(yyvsp[(1) - (5)].strval), "[]"); (yyval.strval) = (yyvsp[(1) - (5)].strval);;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 343 "bison/parser.y"
    {string_append(&(yyvsp[(1) - (6)].strval), "[]"); (yyval.strval) = (yyvsp[(1) - (6)].strval);;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 344 "bison/parser.y"
    {string_append(&(yyvsp[(1) - (6)].strval), "[]"); (yyval.strval) = (yyvsp[(1) - (6)].strval);;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 345 "bison/parser.y"
    {string_append(&(yyvsp[(1) - (5)].strval), "[]"); (yyval.strval) = (yyvsp[(1) - (5)].strval);;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 346 "bison/parser.y"
    {string_append(&(yyvsp[(1) - (4)].strval), "()"); (yyval.strval) = (yyvsp[(1) - (4)].strval);;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 347 "bison/parser.y"
    {string_append(&(yyvsp[(1) - (4)].strval), "()"); (yyval.strval) = (yyvsp[(1) - (4)].strval);;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 362 "bison/parser.y"
    {(yyval.strval) = string_duplicate("*");;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 363 "bison/parser.y"
    {(yyval.strval) = string_from_format("*%s", (yyvsp[(2) - (3)].strval));;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 437 "bison/parser.y"
    { printf("Linea %i: Sentencia de expresion\n", yylineno); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 440 "bison/parser.y"
    { printf("Linea %i: Sentencia de salto\n", yylineno); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 441 "bison/parser.y"
    { yyerrok; ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 444 "bison/parser.y"
    { printf("Linea %i: Sentencia etiquetada\n", yylineno); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 445 "bison/parser.y"
    { printf("Linea %i: Sentencia etiquetada\n", yylineno); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 446 "bison/parser.y"
    { printf("Linea %i: Sentencia etiquetada\n", yylineno); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 449 "bison/parser.y"
    { printf("Linea %i: Sentencia Compuesta\n", yylineno); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 469 "bison/parser.y"
    { printf("Linea %i: Sentencia de seleccion\n", yylineno); ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 470 "bison/parser.y"
    { printf("Linea %i: Sentencia de seleccion\n", yylineno); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 477 "bison/parser.y"
    { printf("Linea %i: Sentencia de iteracion\n", yylineno); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 478 "bison/parser.y"
    { printf("Linea %i: Sentencia de iteracion\n", yylineno); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 479 "bison/parser.y"
    { printf("Linea %i: Sentencia de iteracion\n", yylineno); ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 501 "bison/parser.y"
    { yyerrok; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2609 "src/parser.c"
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
#line 512 "bison/parser.y"


int main(int argc, char *argv[]) {
    yydebug = 0;
	yyin=fopen(argv[1],"r");

    printf("Reporte sintactico:\n");

   	yyparse();
	fclose(yyin);

	if(analisisCorrecto)
        printf("\nAnalisis finalizado correctamente\n\n\n");


    return 0; 
}

int yyerror(const char *msg) {
	printf("Linea %d: %s\n",yylineno,msg);
	analisisCorrecto = 0;
	return 0; 
}
