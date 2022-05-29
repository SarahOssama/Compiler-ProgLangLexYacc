
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
#line 1 "parser.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>
	#include "symbolTable.cpp"

	extern FILE *yyin;
	extern int yylineno;
	extern int yylex();
	extern void yyerror(char *s);
	int yydebug = 1;


/* Line 189 of yacc.c  */
#line 88 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     PLUS = 258,
     MINUS = 259,
     MULT = 260,
     DIV = 261,
     INC = 262,
     DEC = 263,
     PLUS_EQ = 264,
     MINUS_EQ = 265,
     MULT_EQ = 266,
     DIV_EQ = 267,
     EQ_EQ = 268,
     AND = 269,
     OR = 270,
     NOT = 271,
     INT = 272,
     FLOAT = 273,
     STRING = 274,
     CHAR = 275,
     BOOL = 276,
     SEMICOLON = 277,
     ENDLINE = 278,
     CONST = 279,
     IDENTIFIER = 280,
     INT_NUMBER = 281,
     FLOAT_NUMBER = 282,
     IF = 283,
     THEN = 284,
     ELSE = 285,
     OPENBRACKET = 286,
     CLOSEDBRACKET = 287,
     OPENCURL = 288,
     CLOSEDCURL = 289,
     EQUAL = 290,
     VOID = 291,
     RETURN = 292,
     COMMA = 293,
     COLON = 294,
     WHILEEQ_EQ = 295,
     WHILE = 296,
     DO = 297,
     FOR = 298,
     TRUE = 299,
     FALSE = 300,
     IFX = 301,
     LT = 302,
     GT = 303,
     NE = 304,
     LE = 305,
     GE = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 16 "parser.y"

    int intValue;
	char* stringValue;
	struct lexeme{
		int type;
		char* stringValue;
		int intValue;
		char charValue;
		bool boolValue;
		float floatValue;
	} lexemeValue;



/* Line 214 of yacc.c  */
#line 190 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 202 "parser.tab.c"

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   494

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNRULES -- Number of states.  */
#define YYNSTATES  178

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    31,    36,    40,    48,
      60,    76,    96,    97,    98,   108,   110,   111,   112,   123,
     134,   136,   138,   140,   142,   144,   146,   148,   151,   155,
     159,   163,   167,   169,   173,   177,   181,   185,   189,   193,
     197,   201,   205,   209,   212,   215,   219,   223,   226,   230,
     232,   234,   236,   238,   240,   246,   251,   258,   261,   263,
     264,   270,   275,   281,   286,   290,   292,   295,   300,   302,
     304,   306,   308,   314,   316,   317,   321
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    -1,    54,    55,    -1,    55,    -1,
      66,    -1,    70,    -1,    68,    -1,    71,    -1,    57,    -1,
      58,    -1,    61,    -1,    64,    -1,    72,    -1,    78,    -1,
      -1,    33,    56,    54,    34,    -1,    37,    73,    22,    -1,
      28,    31,    67,    32,    33,    55,    34,    -1,    28,    31,
      67,    32,    33,    55,    34,    30,    33,    55,    34,    -1,
      28,    31,    67,    32,    33,    55,    34,    30,    28,    31,
      67,    32,    33,    55,    34,    -1,    28,    31,    67,    32,
      33,    55,    34,    30,    28,    31,    67,    32,    33,    55,
      34,    30,    33,    55,    34,    -1,    -1,    -1,    41,    31,
      67,    32,    33,    59,    55,    34,    60,    -1,    41,    -1,
      -1,    -1,    42,    33,    62,    55,    34,    63,    41,    31,
      67,    32,    -1,    43,    31,    70,    67,    22,    67,    32,
      33,    55,    34,    -1,    25,    -1,    26,    -1,    27,    -1,
      20,    -1,    19,    -1,    44,    -1,    45,    -1,    67,    22,
      -1,    67,     3,    67,    -1,    67,     4,    67,    -1,    67,
       5,    67,    -1,    67,     6,    67,    -1,    65,    -1,    67,
       9,    67,    -1,    67,    10,    67,    -1,    67,    11,    67,
      -1,    67,    12,    67,    -1,    67,    13,    67,    -1,    67,
      51,    67,    -1,    67,    50,    67,    -1,    67,    49,    67,
      -1,    67,    48,    67,    -1,    67,    47,    67,    -1,    67,
       7,    -1,    67,     8,    -1,    67,    14,    67,    -1,    67,
      15,    67,    -1,    16,    67,    -1,    69,    25,    22,    -1,
      17,    -1,    18,    -1,    20,    -1,    19,    -1,    21,    -1,
      69,    25,    35,    67,    22,    -1,    25,    35,    67,    22,
      -1,    24,    69,    25,    35,    65,    22,    -1,    74,    55,
      -1,    65,    -1,    -1,    69,    25,    31,    75,    32,    -1,
      69,    25,    31,    32,    -1,    36,    25,    31,    75,    32,
      -1,    36,    25,    31,    32,    -1,    75,    38,    76,    -1,
      76,    -1,    69,    25,    -1,    69,    25,    35,    77,    -1,
      26,    -1,    27,    -1,    19,    -1,    20,    -1,    25,    31,
      79,    32,    22,    -1,    80,    -1,    -1,    80,    38,    65,
      -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   111,   112,   117,   118,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   129,   130,   151,   153,
     155,   158,   164,   164,   164,   165,   170,   170,   170,   175,
     180,   215,   219,   223,   227,   231,   235,   242,   245,   270,
     297,   330,   359,   364,   384,   385,   386,   387,   398,   411,
     425,   438,   451,   466,   468,   471,   472,   473,   477,   496,
     500,   504,   508,   512,   516,   530,   542,   557,   559,   559,
     560,   561,   562,   563,   564,   564,   565,   565,   566,   566,
     566,   566,   567,   568,   568,   569,   569
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS", "MINUS", "MULT", "DIV", "INC",
  "DEC", "PLUS_EQ", "MINUS_EQ", "MULT_EQ", "DIV_EQ", "EQ_EQ", "AND", "OR",
  "NOT", "INT", "FLOAT", "STRING", "CHAR", "BOOL", "SEMICOLON", "ENDLINE",
  "CONST", "IDENTIFIER", "INT_NUMBER", "FLOAT_NUMBER", "IF", "THEN",
  "ELSE", "OPENBRACKET", "CLOSEDBRACKET", "OPENCURL", "CLOSEDCURL",
  "EQUAL", "VOID", "RETURN", "COMMA", "COLON", "WHILEEQ_EQ", "WHILE", "DO",
  "FOR", "TRUE", "FALSE", "IFX", "LT", "GT", "NE", "LE", "GE", "$accept",
  "program", "statements", "statement", "$@1", "if_statement",
  "while_statement", "$@2", "$@3", "do_while_statement", "$@4", "$@5",
  "for_statement", "value", "expression_statement", "expression",
  "var_declaration", "type", "assignment_statement",
  "constant_declaration", "function", "return_value", "function_prototype",
  "parameters", "single_parameter", "constant", "function_call",
  "call_parameters", "call_parameter", 0
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
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    56,    55,    55,    57,    57,
      57,    57,    59,    60,    58,    58,    62,    63,    61,    64,
      65,    65,    65,    65,    65,    65,    65,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    68,    69,
      69,    69,    69,    69,    70,    70,    71,    72,    73,    73,
      74,    74,    74,    74,    75,    75,    76,    76,    77,    77,
      77,    77,    78,    79,    79,    80,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     3,     7,    11,
      15,    19,     0,     0,     9,     1,     0,     0,    10,    10,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     2,     3,     1,
       1,     1,     1,     1,     5,     4,     6,     2,     1,     0,
       5,     4,     5,     4,     3,     1,     2,     4,     1,     1,
       1,     1,     5,     1,     0,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    59,    60,    34,    33,    63,     0,    30,    31,
      32,     0,    15,     0,    69,    25,     0,     0,    35,    36,
       0,     2,     4,     9,    10,    11,    12,    42,     5,     0,
       7,     0,     6,     8,    13,     0,    14,    34,    33,    30,
      57,    62,    61,     0,    84,     0,     0,     0,     0,    68,
       0,     0,    26,     0,     1,     3,     0,     0,     0,     0,
      53,    54,     0,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,    67,     0,    86,     0,
      83,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,    38,    39,    40,    41,    43,    44,    45,    46,    47,
      55,    56,    52,    51,    50,    49,    48,    58,     0,     0,
       0,     0,     0,    65,     0,    16,    73,     0,     0,    75,
       0,     0,     0,     0,    71,     0,     0,     0,    82,    85,
       0,    76,    72,     0,    22,    27,     0,    70,    64,    66,
       0,     0,    74,     0,     0,     0,    18,    80,    81,    78,
      79,    77,     0,     0,     0,     0,    23,     0,     0,     0,
       0,    24,     0,     0,     0,     0,    28,    29,     0,    19,
       0,     0,     0,    20,     0,     0,     0,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,    47,    23,    24,   143,   161,    25,
      87,   144,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    50,    35,   118,   119,   151,    36,    79,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -28
static const yytype_int16 yypact[] =
{
     449,   -12,   -28,   -28,   -19,   -16,   -28,   112,    16,   -28,
     -28,     3,   -28,    -6,    -2,     5,   -11,    15,   -28,   -28,
      29,   449,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   133,
     -28,    24,   -28,   -28,   -28,   449,   -28,   -28,   -28,   -28,
     383,   -28,   -28,    27,    -2,   -12,   -12,   449,    22,   -28,
      32,   -12,   -28,   140,   -28,   -28,   -12,   -12,   -12,   -12,
     -28,   -28,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -28,
     -12,   -12,   -12,   -12,   -12,    76,   -28,    25,   -28,    36,
      21,   164,   184,   419,    73,   -28,   214,   449,    40,    51,
     -12,    75,    75,   -10,   -10,    75,    75,   -10,   -10,   -28,
     383,   383,   -28,   -28,   -28,   -28,   -28,   -28,    95,   -12,
      -2,    55,    -2,   -28,    49,   -28,   -28,    58,   -27,   -28,
      52,    50,    60,   244,   -28,   -22,   264,    74,   -28,   -28,
     449,    65,   -28,   112,   -28,   -28,   -12,   -28,   -28,   -28,
      67,     1,   -28,   449,    61,   293,    79,   -28,   -28,   -28,
     -28,   -28,    70,    86,    77,     2,   -28,   -12,   449,    87,
     449,   -28,   323,    72,   -12,    85,   -28,   -28,   353,   -28,
     117,   449,   118,    90,   120,   449,   130,   -28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -28,   -28,   107,    -9,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -13,   -28,    -1,   -28,    -5,   132,   -28,
     -28,   -28,   -28,    92,    68,   -28,   -28,   -28,   -28
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -63
static const yytype_int16 yytable[] =
{
      40,    49,    43,    66,     1,   132,   -62,    37,    38,   -61,
     137,   133,    55,    39,     9,    10,   133,    37,    38,    48,
     147,   148,    52,    39,     9,    10,    76,   149,   150,    54,
     159,    78,    18,    19,    46,   160,    51,    70,    71,    72,
      73,    74,    18,    19,    81,    82,    53,    44,    89,    75,
      86,    45,    77,    84,    85,    91,    92,    93,    94,   112,
     110,    95,    96,    97,    98,    99,   100,   101,   111,   102,
     103,   104,   105,   106,    55,    45,   122,   128,   121,   117,
      58,    59,   130,   131,   135,   134,    64,    65,    66,   123,
       2,     3,    41,    42,     6,   109,   139,   127,   107,   129,
     141,   146,   153,   117,   156,   116,   167,   108,   126,   155,
     158,   109,     2,     3,    41,    42,     6,   157,   164,   169,
     174,   140,    70,    71,    72,    73,    74,   124,   117,     2,
       3,    41,    42,     6,   152,   145,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   163,
     171,   165,   173,   175,    83,    69,   162,     2,     3,    41,
      42,     6,   172,   168,   177,    88,   176,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      70,    71,    72,    73,    74,    90,   113,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     125,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    71,    72,    73,    74,   114,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,    70,    71,    72,    73,    74,   136,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,     0,     0,     0,     0,     0,   138,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     0,
       0,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   154,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     0,
      70,    71,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,     0,
      70,    71,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,   -63,   -63,     0,
      70,    71,    72,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    71,    72,    73,    74,     1,     2,     3,     4,     5,
       6,     0,     0,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,   115,     0,    13,    14,     0,     0,     0,
      15,    16,    17,    18,    19,     1,     2,     3,     4,     5,
       6,     0,     0,     7,     8,     9,    10,    11,     0,     0,
       0,     0,    12,     0,     0,    13,    14,     0,     0,     0,
      15,    16,    17,    18,    19
};

static const yytype_int16 yycheck[] =
{
       1,    14,     7,    13,    16,    32,    25,    19,    20,    25,
      32,    38,    21,    25,    26,    27,    38,    19,    20,    25,
      19,    20,    33,    25,    26,    27,    35,    26,    27,     0,
      28,    44,    44,    45,    31,    33,    31,    47,    48,    49,
      50,    51,    44,    45,    45,    46,    31,    31,    53,    25,
      51,    35,    25,    31,    22,    56,    57,    58,    59,    38,
      35,    62,    63,    64,    65,    66,    67,    68,    32,    70,
      71,    72,    73,    74,    83,    35,    25,    22,    87,    84,
       5,     6,    33,    25,    34,    33,    11,    12,    13,    90,
      17,    18,    19,    20,    21,    35,    22,   110,    22,   112,
      35,    34,    41,   108,    34,    32,    34,    31,   109,    30,
      33,    35,    17,    18,    19,    20,    21,    31,    31,    34,
      30,   130,    47,    48,    49,    50,    51,    32,   133,    17,
      18,    19,    20,    21,   143,   136,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,   158,
      33,   160,    34,    33,    47,    22,   157,    17,    18,    19,
      20,    21,   171,   164,    34,    25,   175,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      47,    48,    49,    50,    51,    53,    22,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
     108,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    32,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    47,    48,    49,    50,    51,    22,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    51,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    -1,    36,    37,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    36,    37,    -1,    -1,    -1,
      41,    42,    43,    44,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    17,    18,    19,    20,    21,    24,    25,    26,
      27,    28,    33,    36,    37,    41,    42,    43,    44,    45,
      53,    54,    55,    57,    58,    61,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    74,    78,    19,    20,    25,
      67,    19,    20,    69,    31,    35,    31,    56,    25,    65,
      73,    31,    33,    31,     0,    55,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    22,
      47,    48,    49,    50,    51,    25,    55,    25,    65,    79,
      80,    67,    67,    54,    31,    22,    67,    62,    25,    69,
      70,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    22,    31,    35,
      35,    32,    38,    22,    32,    34,    32,    69,    75,    76,
      32,    55,    25,    67,    32,    75,    67,    65,    22,    65,
      33,    25,    32,    38,    33,    34,    22,    32,    22,    22,
      55,    35,    76,    59,    63,    67,    34,    19,    20,    26,
      27,    77,    55,    41,    32,    30,    34,    31,    33,    28,
      33,    60,    67,    55,    31,    55,    32,    34,    67,    34,
      32,    33,    55,    34,    30,    33,    55,    34
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
        case 5:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    {printf("Expression Statement \n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {	
											printf("Assignment Statement \n");
										;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {printf("Variable Declaration \n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {printf("Constant Declaration \n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {printf("If Statement \n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {printf("Function \n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    {printf("Function Call \n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {openBracket();;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {closeBracket();;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    {printf("If then statement\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {openBracket();;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {closeBracket();;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {printf("while statment\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {openBracket();;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {closeBracket();;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {printf("do-while statment\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    { 	
							symbolTableEntry* entry = returnVal((yyvsp[(1) - (1)].stringValue));
							if(entry != nullptr)
							{
								
								struct value tempValue = entry->Value;
								if(tempValue.type == INT_VAL)
								{
									(yyval.lexemeValue).intValue = tempValue.intValue;
									(yyval.lexemeValue).type = INT_VAL;
								}
								else if(tempValue.type == FLOAT_VAL)
								{
									(yyval.lexemeValue).floatValue = tempValue.floatValue;
									(yyval.lexemeValue).type = FLOAT_VAL;
								}
								else if(tempValue.type == STRING_VAL)
								{
									(yyval.lexemeValue).stringValue = tempValue.stringValue;
									(yyval.lexemeValue).type = STRING_VAL;
								}
								else if(tempValue.type == CHAR_VAL)
								{
									(yyval.lexemeValue).charValue = tempValue.charValue;
									(yyval.lexemeValue).type = CHAR_VAL;
								}
								else if(tempValue.type == BOOL_VAL)
								{
									(yyval.lexemeValue).boolValue = tempValue.boolValue;
									(yyval.lexemeValue).type = BOOL_VAL;
								}
								
							}
							
						;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    {
							(yyval.lexemeValue).intValue = (yyvsp[(1) - (1)].lexemeValue).intValue;
							(yyval.lexemeValue).type = INT_VAL;
						;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    {
							(yyval.lexemeValue).floatValue = (yyvsp[(1) - (1)].lexemeValue).floatValue;
							(yyval.lexemeValue).type = FLOAT_VAL;
						;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    {
							(yyval.lexemeValue).charValue = (yyvsp[(1) - (1)].lexemeValue).charValue;
							(yyval.lexemeValue).type = CHAR_VAL;
						;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    {
							(yyval.lexemeValue).stringValue = (yyvsp[(1) - (1)].lexemeValue).stringValue;
							(yyval.lexemeValue).type = STRING_VAL;
						;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    {
							(yyval.lexemeValue).boolValue = (yyvsp[(1) - (1)].lexemeValue).boolValue;
							(yyval.lexemeValue).type = BOOL_VAL;
						;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {
							(yyval.lexemeValue).boolValue=(yyvsp[(1) - (1)].lexemeValue).boolValue;
							(yyval.lexemeValue).type = BOOL_VAL;
						;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 245 "parser.y"
    {
										printf("PLUS EXPRESSION\n");
										printf("TYPES: %d %d\n", (yyvsp[(1) - (3)].lexemeValue).type, (yyvsp[(3) - (3)].lexemeValue).type);
										if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
										{
											(yyval.lexemeValue).intValue = (yyvsp[(1) - (3)].lexemeValue).intValue + (yyvsp[(3) - (3)].lexemeValue).intValue;
											(yyval.lexemeValue).type = INT_VAL;
										}
										if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
										{
											(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).floatValue + (yyvsp[(3) - (3)].lexemeValue).floatValue;
											(yyval.lexemeValue).type = FLOAT_VAL;
										}
										if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
										{
											(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).intValue + (yyvsp[(3) - (3)].lexemeValue).floatValue;
											(yyval.lexemeValue).type = FLOAT_VAL;
										}
										if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
										{
											(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).floatValue + (yyvsp[(3) - (3)].lexemeValue).intValue;
											(yyval.lexemeValue).type = FLOAT_VAL;
										}
										
									;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    {
										printf("MINUS EXPRESSION\n");
										printf("TYPES: %d %d\n", (yyvsp[(1) - (3)].lexemeValue).type, (yyvsp[(3) - (3)].lexemeValue).type);
										if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
										{

											(yyval.lexemeValue).intValue = (yyvsp[(1) - (3)].lexemeValue).intValue - (yyvsp[(3) - (3)].lexemeValue).intValue;
											(yyval.lexemeValue).type = INT_VAL;
										}
										if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
										{
											(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).floatValue - (yyvsp[(3) - (3)].lexemeValue).floatValue;
											(yyval.lexemeValue).type = FLOAT_VAL;
										}
										if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
										{
											(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).intValue - (yyvsp[(3) - (3)].lexemeValue).floatValue;
											(yyval.lexemeValue).type = FLOAT_VAL;
										}
										if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
										{
											(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).floatValue - (yyvsp[(3) - (3)].lexemeValue).intValue;
											(yyval.lexemeValue).type = FLOAT_VAL;
										}
									;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    {
									
									printf("MULTIPLY EXPRESSION\n");
									printf("TYPES: %d %d\n", (yyvsp[(1) - (3)].lexemeValue).type, (yyvsp[(3) - (3)].lexemeValue).type);
									if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
									{
										printf("1: $d, 3: %d, $$ = %d\n", (yyvsp[(1) - (3)].lexemeValue).intValue, (yyvsp[(3) - (3)].lexemeValue).intValue,
										(yyvsp[(1) - (3)].lexemeValue).intValue * (yyvsp[(3) - (3)].lexemeValue).intValue);
										(yyval.lexemeValue).intValue = (yyvsp[(1) - (3)].lexemeValue).intValue * (yyvsp[(3) - (3)].lexemeValue).intValue;
										(yyval.lexemeValue).type = INT_VAL;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
									{
										(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).floatValue * (yyvsp[(3) - (3)].lexemeValue).floatValue;
										(yyval.lexemeValue).type = FLOAT_VAL;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
									{
										// printf("1: %d, 3: %f, $$ = %f\n", $1.intValue, $3.floatValue,
										// $1.intValue + $3.floatValue);
										(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).intValue * (yyvsp[(3) - (3)].lexemeValue).floatValue;
										(yyval.lexemeValue).type = FLOAT_VAL;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
									{
										(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).floatValue * (yyvsp[(3) - (3)].lexemeValue).intValue;
										(yyval.lexemeValue).type = FLOAT_VAL;
									}
									
								;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    {
									if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
									{
										printf("1: $d, 3: %d, $$ = %d\n", (yyvsp[(1) - (3)].lexemeValue).intValue, (yyvsp[(3) - (3)].lexemeValue).intValue,
										(yyvsp[(1) - (3)].lexemeValue).intValue / (yyvsp[(3) - (3)].lexemeValue).intValue);
										(yyval.lexemeValue).intValue = (yyvsp[(1) - (3)].lexemeValue).intValue / (yyvsp[(3) - (3)].lexemeValue).intValue;
										(yyval.lexemeValue).type = INT_VAL;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
									{
										(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).floatValue / (yyvsp[(3) - (3)].lexemeValue).floatValue;
										(yyval.lexemeValue).type = FLOAT_VAL;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
									{
										// printf("1: %d, 3: %f, $$ = %f\n", $1.intValue, $3.floatValue,
										// $1.intValue + $3.floatValue);
										(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).intValue / (yyvsp[(3) - (3)].lexemeValue).floatValue;
										(yyval.lexemeValue).type = FLOAT_VAL;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
									{
										(yyval.lexemeValue).floatValue = (yyvsp[(1) - (3)].lexemeValue).floatValue / (yyvsp[(3) - (3)].lexemeValue).intValue;
										(yyval.lexemeValue).type = FLOAT_VAL;
									}
								;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    { 
				//printf("AT VALUE: Type = %d intValue = %d\n",$1.type, $1.intValue);
				(yyval.lexemeValue).type= (yyvsp[(1) - (1)].lexemeValue).type;  (yyval.lexemeValue).intValue = (yyvsp[(1) - (1)].lexemeValue).intValue;		
			;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    {
									// struct value TValue;
									// if ($1.type == INT_VAL && $3.type == INT_VAL)
									// {
									// 	printf("1: $d, 3: %d, $$ = %d\n", $1.intValue, $3.intValue,	$1.intValue + $3.intValue);
									// 	TValue.intValue = $1.intValue + $3.intValue;
									// 	TValue.type = INT_VAL;
									// 	TValue.varName = $1.varName;
									// }
									// if ($1.type == FLOAT_VAL && $3.type == FLOAT_VAL)
									// {
									// 	TValue.floatValue = $1.floatValue + $3.floatValue;
									// 	TValue.type = FLOAT_VAL;
									// 	TValue.varName = $1.varName;

									// }
									// updateEntry(TValue, yylineno);
								;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 387 "parser.y"
    {
									(yyval.lexemeValue).type = BOOL_VAL;
									if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).intValue == (yyvsp[(3) - (3)].lexemeValue).intValue;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).floatValue == (yyvsp[(3) - (3)].lexemeValue).floatValue;
									}
								;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 399 "parser.y"
    {
									(yyval.lexemeValue).type = BOOL_VAL;
									if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).intValue >= (yyvsp[(3) - (3)].lexemeValue).intValue;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).floatValue >= (yyvsp[(3) - (3)].lexemeValue).floatValue;
									}
								;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 412 "parser.y"
    {
									(yyval.lexemeValue).type = BOOL_VAL;
									if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).intValue <= (yyvsp[(3) - (3)].lexemeValue).intValue;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).floatValue <= (yyvsp[(3) - (3)].lexemeValue).floatValue;
									}
								;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
    {
									(yyval.lexemeValue).type = BOOL_VAL;
									if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).intValue != (yyvsp[(3) - (3)].lexemeValue).intValue;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).floatValue != (yyvsp[(3) - (3)].lexemeValue).floatValue;
									}
								;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 439 "parser.y"
    {
									(yyval.lexemeValue).type = BOOL_VAL;
									if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).intValue > (yyvsp[(3) - (3)].lexemeValue).intValue;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).floatValue > (yyvsp[(3) - (3)].lexemeValue).floatValue;
									}
								;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 452 "parser.y"
    {
									(yyval.lexemeValue).type = BOOL_VAL;
									if ((yyvsp[(1) - (3)].lexemeValue).type == INT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == INT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).intValue < (yyvsp[(3) - (3)].lexemeValue).intValue;
									}
									if ((yyvsp[(1) - (3)].lexemeValue).type == FLOAT_VAL && (yyvsp[(3) - (3)].lexemeValue).type == FLOAT_VAL)
									{
										(yyval.lexemeValue).boolValue = (yyvsp[(1) - (3)].lexemeValue).floatValue < (yyvsp[(3) - (3)].lexemeValue).floatValue;
									}
								;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 477 "parser.y"
    {		
													struct value Value;
													Value.type = (yyvsp[(1) - (3)].intValue);
													Value.varName = (yyvsp[(2) - (3)].stringValue);
													if(Value.type == INT_VAL)
														Value.intValue = -1;
													else if(Value.type == STRING_VAL)
													{	
														Value.stringValue = " ";
													}
													else if(Value.type == CHAR_VAL)
														Value.charValue = ' ';
													else if(Value.type == BOOL_VAL)
														Value.boolValue = false;
													else if(Value.type == FLOAT_VAL)
														Value.floatValue = -1.0;
													
													createEntry(Value, false, (yyvsp[(1) - (3)].intValue), false, false, yylineno);
												;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 497 "parser.y"
    {
						(yyval.intValue) = INT_VAL;
					;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 501 "parser.y"
    {
						(yyval.intValue) = FLOAT_VAL;
					;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 505 "parser.y"
    {
						(yyval.intValue)=CHAR_VAL;
					;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 509 "parser.y"
    {
						(yyval.intValue)= STRING_VAL;
					;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 513 "parser.y"
    { 
						(yyval.intValue)= BOOL_VAL;
					;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 516 "parser.y"
    {
																struct value Value;
																Value.type = (yyvsp[(4) - (5)].lexemeValue).type;
																Value.varName = (yyvsp[(2) - (5)].stringValue);
																Value.intValue = (yyvsp[(4) - (5)].lexemeValue).intValue;
																Value.stringValue = (yyvsp[(4) - (5)].lexemeValue).stringValue;
																Value.charValue = (yyvsp[(4) - (5)].lexemeValue).charValue;
																Value.boolValue = (yyvsp[(4) - (5)].lexemeValue).boolValue;														
																Value.floatValue = (yyvsp[(4) - (5)].lexemeValue).floatValue;
																
																
																createEntry(Value, false, (yyvsp[(1) - (5)].intValue), true,
																false, yylineno);
															;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 530 "parser.y"
    {
																	struct value Value;
																	Value.type = (yyvsp[(3) - (4)].lexemeValue).type;
																	Value.varName = (yyvsp[(1) - (4)].stringValue);
																	Value.intValue = (yyvsp[(3) - (4)].lexemeValue).intValue;
																	Value.stringValue = (yyvsp[(3) - (4)].lexemeValue).stringValue;
																	Value.charValue = (yyvsp[(3) - (4)].lexemeValue).charValue;
																	Value.boolValue = (yyvsp[(3) - (4)].lexemeValue).boolValue;														
																	Value.floatValue = (yyvsp[(3) - (4)].lexemeValue).floatValue;

																	updateEntry(Value, yylineno);
																;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 543 "parser.y"
    {
																struct value Value;
																Value.type = (yyvsp[(5) - (6)].lexemeValue).type;
																Value.varName = (yyvsp[(3) - (6)].stringValue);
																Value.intValue = (yyvsp[(5) - (6)].lexemeValue).intValue;
																Value.stringValue = (yyvsp[(5) - (6)].lexemeValue).stringValue;
																Value.charValue = (yyvsp[(5) - (6)].lexemeValue).charValue;
																Value.boolValue = (yyvsp[(5) - (6)].lexemeValue).boolValue;														
																Value.floatValue = (yyvsp[(5) - (6)].lexemeValue).floatValue;

																createEntry(Value, true, (yyvsp[(2) - (6)].intValue), true,
																false, yylineno);
															;}
    break;



/* Line 1455 of yacc.c  */
#line 2226 "parser.tab.c"
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
#line 571 "parser.y"


void test(int x)
{
	printf("TEST\n");
}


//For reading from console
// int main (void){
// 	yyparse(); 
// 	return 0;
// }


//For reading from file
int main (void)
{
	initialize();
	printf(">>> OPENING FILE <<<\n");
	
   	FILE *myfile = fopen("testfile.txt", "r");
	if (!myfile) {
		printf("Could not open");
		return -1;
	}
	yyin = myfile;
	printf(">>> PARSING <<<\n");
	while (!feof(yyin)){
		yyparse();    
	} 
	printf(">>> FINISHED PARSING <<<\n");
	writeSymbolTable(symbols);
    return 0;
}
