
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
     SWITCH = 272,
     CASE = 273,
     BREAK = 274,
     DEFAULT = 275,
     INT = 276,
     FLOAT = 277,
     STRING = 278,
     CHAR = 279,
     BOOL = 280,
     SEMICOLON = 281,
     ENDLINE = 282,
     CONST = 283,
     IDENTIFIER = 284,
     INT_NUMBER = 285,
     FLOAT_NUMBER = 286,
     IF = 287,
     THEN = 288,
     ELSE = 289,
     OPENBRACKET = 290,
     CLOSEDBRACKET = 291,
     OPENCURL = 292,
     CLOSEDCURL = 293,
     EQUAL = 294,
     VOID = 295,
     RETURN = 296,
     COMMA = 297,
     COLON = 298,
     WHILEEQ_EQ = 299,
     WHILE = 300,
     DO = 301,
     FOR = 302,
     TRUE = 303,
     FALSE = 304,
     IFX = 305,
     LT = 306,
     GT = 307,
     NE = 308,
     LE = 309,
     GE = 310
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
#line 194 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 206 "parser.tab.c"

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
#define YYLAST   753

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  208

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    31,    36,    40,    42,
      50,    62,    78,    98,    99,   100,   110,   112,   122,   130,
     138,   145,   152,   158,   165,   171,   182,   184,   186,   188,
     190,   192,   194,   196,   199,   203,   207,   211,   215,   217,
     221,   225,   229,   233,   237,   241,   245,   249,   253,   257,
     260,   263,   267,   271,   274,   278,   280,   282,   284,   286,
     288,   294,   299,   306,   309,   311,   312,   318,   323,   329,
     334,   338,   340,   343,   348,   350,   352,   354,   356,   362,
     364,   365,   369
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    58,    -1,    58,    59,    -1,    59,    -1,
      70,    -1,    74,    -1,    72,    -1,    75,    -1,    61,    -1,
      62,    -1,    65,    -1,    68,    -1,    76,    -1,    82,    -1,
      -1,    37,    60,    58,    38,    -1,    41,    77,    26,    -1,
      66,    -1,    32,    35,    71,    36,    37,    59,    38,    -1,
      32,    35,    71,    36,    37,    59,    38,    34,    37,    59,
      38,    -1,    32,    35,    71,    36,    37,    59,    38,    34,
      32,    35,    71,    36,    37,    59,    38,    -1,    32,    35,
      71,    36,    37,    59,    38,    34,    32,    35,    71,    36,
      37,    59,    38,    34,    37,    59,    38,    -1,    -1,    -1,
      45,    35,    71,    36,    37,    63,    59,    38,    64,    -1,
      45,    -1,    46,    37,    58,    38,    45,    35,    71,    36,
      26,    -1,    17,    35,    29,    36,    37,    67,    38,    -1,
      67,    18,    69,    43,    58,    19,    26,    -1,    67,    18,
      69,    43,    19,    26,    -1,    18,    69,    43,    58,    19,
      26,    -1,    18,    69,    43,    19,    26,    -1,    67,    20,
      43,    58,    19,    26,    -1,    67,    20,    43,    19,    26,
      -1,    47,    35,    74,    71,    26,    71,    36,    37,    59,
      38,    -1,    29,    -1,    30,    -1,    31,    -1,    24,    -1,
      23,    -1,    48,    -1,    49,    -1,    71,    26,    -1,    71,
       3,    71,    -1,    71,     4,    71,    -1,    71,     5,    71,
      -1,    71,     6,    71,    -1,    69,    -1,    71,     9,    71,
      -1,    71,    10,    71,    -1,    71,    11,    71,    -1,    71,
      12,    71,    -1,    71,    13,    71,    -1,    71,    55,    71,
      -1,    71,    54,    71,    -1,    71,    53,    71,    -1,    71,
      52,    71,    -1,    71,    51,    71,    -1,    71,     7,    -1,
      71,     8,    -1,    71,    14,    71,    -1,    71,    15,    71,
      -1,    16,    71,    -1,    73,    29,    26,    -1,    21,    -1,
      22,    -1,    24,    -1,    23,    -1,    25,    -1,    73,    29,
      39,    71,    26,    -1,    29,    39,    71,    26,    -1,    28,
      73,    29,    39,    69,    26,    -1,    78,    59,    -1,    69,
      -1,    -1,    73,    29,    35,    79,    36,    -1,    73,    29,
      35,    36,    -1,    40,    29,    35,    79,    36,    -1,    40,
      29,    35,    36,    -1,    79,    42,    80,    -1,    80,    -1,
      73,    29,    -1,    73,    29,    39,    81,    -1,    30,    -1,
      31,    -1,    23,    -1,    24,    -1,    29,    35,    83,    36,
      26,    -1,    84,    -1,    -1,    84,    42,    69,    -1,    69,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   112,   113,   118,   119,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   130,   131,   132,   151,
     153,   155,   158,   164,   164,   164,   165,   170,   173,   176,
     177,   178,   179,   180,   181,   186,   191,   226,   230,   234,
     238,   242,   246,   253,   256,   281,   308,   341,   370,   375,
     395,   396,   397,   398,   409,   422,   436,   449,   462,   477,
     479,   482,   483,   484,   488,   507,   511,   515,   519,   523,
     527,   541,   553,   568,   570,   570,   571,   572,   573,   574,
     575,   575,   576,   576,   577,   577,   577,   577,   578,   579,
     579,   580,   580
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS", "MINUS", "MULT", "DIV", "INC",
  "DEC", "PLUS_EQ", "MINUS_EQ", "MULT_EQ", "DIV_EQ", "EQ_EQ", "AND", "OR",
  "NOT", "SWITCH", "CASE", "BREAK", "DEFAULT", "INT", "FLOAT", "STRING",
  "CHAR", "BOOL", "SEMICOLON", "ENDLINE", "CONST", "IDENTIFIER",
  "INT_NUMBER", "FLOAT_NUMBER", "IF", "THEN", "ELSE", "OPENBRACKET",
  "CLOSEDBRACKET", "OPENCURL", "CLOSEDCURL", "EQUAL", "VOID", "RETURN",
  "COMMA", "COLON", "WHILEEQ_EQ", "WHILE", "DO", "FOR", "TRUE", "FALSE",
  "IFX", "LT", "GT", "NE", "LE", "GE", "$accept", "program", "statements",
  "statement", "$@1", "if_statement", "while_statement", "$@2", "$@3",
  "do_while_statement", "switch_case", "switch_body", "for_statement",
  "value", "expression_statement", "expression", "var_declaration", "type",
  "assignment_statement", "constant_declaration", "function",
  "return_value", "function_prototype", "parameters", "single_parameter",
  "constant", "function_call", "call_parameters", "call_parameter", 0
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
     305,   306,   307,   308,   309,   310
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    60,    59,    59,    59,    61,
      61,    61,    61,    63,    64,    62,    62,    65,    66,    67,
      67,    67,    67,    67,    67,    68,    69,    69,    69,    69,
      69,    69,    69,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    72,    73,    73,    73,    73,    73,
      74,    74,    75,    76,    77,    77,    78,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    81,    82,    83,
      83,    84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     3,     1,     7,
      11,    15,    19,     0,     0,     9,     1,     9,     7,     7,
       6,     6,     5,     6,     5,    10,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     2,     3,     1,     1,     1,     1,     1,
       5,     4,     6,     2,     1,     0,     5,     4,     5,     4,
       3,     1,     2,     4,     1,     1,     1,     1,     5,     1,
       0,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    65,    66,    40,    39,    69,     0,    36,
      37,    38,     0,    15,     0,    75,    26,     0,     0,    41,
      42,     0,     2,     4,     9,    10,    11,    18,    12,    48,
       5,     0,     7,     0,     6,     8,    13,     0,    14,    40,
      39,    36,    63,     0,    68,    67,     0,    90,     0,     0,
       0,     0,    74,     0,     0,     0,     0,     1,     3,     0,
       0,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,    73,
       0,     0,    92,     0,    89,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,    44,    45,    46,    47,    49,
      50,    51,    52,    53,    61,    62,    58,    57,    56,    55,
      54,    64,     0,     0,     0,     0,     0,     0,    71,     0,
      16,    79,     0,     0,    81,     0,     0,     0,     0,    77,
       0,     0,     0,     0,    88,    91,     0,    82,    78,     0,
      23,     0,     0,    76,    70,     0,     0,    72,     0,     0,
      80,     0,     0,     0,     0,     0,     0,    28,    19,    86,
      87,    84,    85,    83,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    27,     0,    32,     0,     0,     0,    34,     0,
       0,     0,    35,    31,    30,     0,    33,     0,    20,    29,
       0,     0,     0,    21,     0,     0,     0,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    23,    50,    24,    25,   151,   181,    26,
      27,   146,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    53,    37,   123,   124,   163,    38,    83,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -49
static const yytype_int16 yypact[] =
{
     704,   101,   -34,   -49,   -49,   -21,   -10,   -49,   115,    72,
     -49,   -49,   -15,   -49,    -3,   131,    -6,     0,     1,   -49,
     -49,    46,   704,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   194,   -49,    15,   -49,   -49,   -49,   704,   -49,   -49,
     -49,   -49,   426,    22,   -49,   -49,    33,   131,   101,   101,
     704,    19,   -49,    45,   101,   704,   161,   -49,   -49,   101,
     101,   101,   101,   -49,   -49,   101,   101,   101,   101,   101,
     101,   101,   -49,   101,   101,   101,   101,   101,    55,   -49,
      41,    40,   -49,    47,    38,   218,   247,    -7,    64,   -49,
     281,   466,    52,    63,   101,    44,    44,    93,    93,    44,
      44,    93,    93,   -49,   426,   426,   -49,   -49,   -49,   -49,
     -49,   -49,   151,   101,    65,   131,    75,   131,   -49,    67,
     -49,   -49,    80,   -31,   -49,    73,    68,    79,   300,   -49,
     -30,   334,    96,    94,   -49,   -49,   704,    87,   -49,   115,
     -49,    99,   101,   -49,   -49,   131,    25,   -49,    91,    92,
     -49,   704,   101,   358,   109,   131,   110,   -49,   122,   -49,
     -49,   -49,   -49,   -49,   119,   392,   121,   500,   116,   534,
      -5,   -49,   137,   704,   139,   568,   602,   141,   636,   133,
     704,   -49,   -49,   132,   -49,   155,   162,   670,   -49,   165,
     101,   156,   -49,   -49,   -49,   167,   -49,   412,   -49,   -49,
     140,   704,   157,   176,   174,   704,   175,   -49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -49,   -49,   -48,    -9,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -12,   -49,    -1,   -49,    -4,   158,   -49,
     -49,   -49,   -49,   100,    76,   -49,   -49,   -49,   -49
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -69
static const yytype_int16 yytable[] =
{
      42,    43,    87,    52,    46,   138,   143,    91,   -68,     1,
       2,   139,   139,    58,     3,     4,     5,     6,     7,   -67,
      49,     8,     9,    10,    11,    12,    51,   179,    79,    54,
      13,   120,   180,    14,    15,    82,    56,    55,    16,    17,
      18,    19,    20,   155,    78,   156,    57,    85,    86,    61,
      62,    80,    93,    90,    88,    67,    68,    69,    95,    96,
      97,    98,    81,   157,    99,   100,   101,   102,   103,   104,
     105,    89,   106,   107,   108,   109,   110,   114,    58,   115,
     117,   111,    58,   116,   122,     3,     4,    44,    45,     7,
     112,    48,   127,   128,   113,    73,    74,    75,    76,    77,
     121,   134,   132,   133,   136,   135,    69,    47,   122,   137,
     140,    48,   131,   141,   145,   159,   160,     1,   113,   175,
     147,   178,   161,   162,    39,    40,   149,   148,   187,   158,
      41,    10,    11,   154,   152,   122,     3,     4,    44,    45,
       7,   153,   164,   168,    73,    74,    75,    76,    77,    19,
      20,   165,   167,   169,    39,    40,   170,   171,   173,   176,
      41,    10,    11,   182,   183,   184,    58,   188,   190,    58,
     192,   191,     3,     4,    44,    45,     7,   201,    58,    19,
      20,   193,     3,     4,    44,    45,     7,   129,   194,   197,
      92,   196,   202,   199,   198,   203,   206,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
     204,   205,   130,   207,    94,   150,     0,     0,     0,     0,
      72,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,    73,    74,    75,    76,    77,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,     0,    73,    74,
      75,    76,    77,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,   125,     0,     0,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       0,    73,    74,    75,    76,    77,     0,     0,     0,     0,
     144,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
       0,     0,     0,     0,   166,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,    73,
      74,    75,    76,    77,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,   172,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
     -69,   -69,     0,    73,    74,    75,    76,    77,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,     1,     2,     0,     0,     0,     3,     4,     5,
       6,     7,     0,     0,     8,     9,    10,    11,    12,     0,
       0,     0,     0,    13,   126,     0,    14,    15,     0,     0,
       0,    16,    17,    18,    19,    20,     1,     2,     0,   174,
       0,     3,     4,     5,     6,     7,     0,     0,     8,     9,
      10,    11,    12,     0,     0,     0,     0,    13,     0,     0,
      14,    15,     0,     0,     0,    16,    17,    18,    19,    20,
       1,     2,     0,   177,     0,     3,     4,     5,     6,     7,
       0,     0,     8,     9,    10,    11,    12,     0,     0,     0,
       0,    13,     0,     0,    14,    15,     0,     0,     0,    16,
      17,    18,    19,    20,     1,     2,     0,   185,     0,     3,
       4,     5,     6,     7,     0,     0,     8,     9,    10,    11,
      12,     0,     0,     0,     0,    13,     0,     0,    14,    15,
       0,     0,     0,    16,    17,    18,    19,    20,     1,     2,
       0,   186,     0,     3,     4,     5,     6,     7,     0,     0,
       8,     9,    10,    11,    12,     0,     0,     0,     0,    13,
       0,     0,    14,    15,     0,     0,     0,    16,    17,    18,
      19,    20,     1,     2,     0,   189,     0,     3,     4,     5,
       6,     7,     0,     0,     8,     9,    10,    11,    12,     0,
       0,     0,     0,    13,     0,     0,    14,    15,     0,     0,
       0,    16,    17,    18,    19,    20,     1,     2,     0,   195,
       0,     3,     4,     5,     6,     7,     0,     0,     8,     9,
      10,    11,    12,     0,     0,     0,     0,    13,     0,     0,
      14,    15,     0,     0,     0,    16,    17,    18,    19,    20,
       1,     2,     0,     0,     0,     3,     4,     5,     6,     7,
       0,     0,     8,     9,    10,    11,    12,     0,     0,     0,
       0,    13,     0,     0,    14,    15,     0,     0,     0,    16,
      17,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       1,    35,    50,    15,     8,    36,    36,    55,    29,    16,
      17,    42,    42,    22,    21,    22,    23,    24,    25,    29,
      35,    28,    29,    30,    31,    32,    29,    32,    37,    35,
      37,    38,    37,    40,    41,    47,    35,    37,    45,    46,
      47,    48,    49,    18,    29,    20,     0,    48,    49,     5,
       6,    29,    56,    54,    35,    11,    12,    13,    59,    60,
      61,    62,    29,    38,    65,    66,    67,    68,    69,    70,
      71,    26,    73,    74,    75,    76,    77,    36,    87,    39,
      42,    26,    91,    36,    88,    21,    22,    23,    24,    25,
      35,    39,    29,    94,    39,    51,    52,    53,    54,    55,
      36,    26,    37,   115,    37,   117,    13,    35,   112,    29,
      37,    39,   113,    45,    18,    23,    24,    16,    39,   167,
      26,   169,    30,    31,    23,    24,    39,   136,   176,    38,
      29,    30,    31,   145,    35,   139,    21,    22,    23,    24,
      25,   142,   151,   155,    51,    52,    53,    54,    55,    48,
      49,   152,    43,    43,    23,    24,    34,    38,    37,    43,
      29,    30,    31,    26,   173,    26,   175,    26,    35,   178,
      38,   180,    21,    22,    23,    24,    25,    37,   187,    48,
      49,    26,    21,    22,    23,    24,    25,    36,    26,   190,
      29,    26,   201,    26,    38,    38,   205,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      34,    37,   112,    38,    56,   139,    -1,    -1,    -1,    -1,
      26,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    51,    52,    53,    54,    55,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    51,    52,
      53,    54,    55,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      26,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    36,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    51,
      52,    53,    54,    55,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    36,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    51,    52,    53,    54,    55,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    55,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    16,    17,    -1,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      16,    17,    -1,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    16,    17,    -1,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    37,    -1,    -1,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    16,    17,
      -1,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    40,    41,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    16,    17,    -1,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    40,    41,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    16,    17,    -1,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      40,    41,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,
      46,    47,    48,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    17,    21,    22,    23,    24,    25,    28,    29,
      30,    31,    32,    37,    40,    41,    45,    46,    47,    48,
      49,    57,    58,    59,    61,    62,    65,    66,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    78,    82,    23,
      24,    29,    71,    35,    23,    24,    73,    35,    39,    35,
      60,    29,    69,    77,    35,    37,    35,     0,    59,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    26,    51,    52,    53,    54,    55,    29,    59,
      29,    29,    69,    83,    84,    71,    71,    58,    35,    26,
      71,    58,    29,    73,    74,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    26,    35,    39,    36,    39,    36,    42,    26,    36,
      38,    36,    73,    79,    80,    36,    38,    29,    71,    36,
      79,    71,    37,    69,    26,    69,    37,    29,    36,    42,
      37,    45,    26,    36,    26,    18,    67,    26,    59,    39,
      80,    63,    35,    71,    69,    18,    20,    38,    38,    23,
      24,    30,    31,    81,    59,    71,    36,    43,    69,    43,
      34,    38,    36,    37,    19,    58,    43,    19,    58,    32,
      37,    64,    26,    59,    26,    19,    19,    58,    26,    19,
      35,    59,    38,    26,    26,    19,    26,    71,    38,    26,
      36,    37,    59,    38,    34,    37,    59,    38
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
#line 118 "parser.y"
    {printf("Expression Statement \n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {	
											printf("Assignment Statement \n");
										;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {printf("Variable Declaration \n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {printf("Constant Declaration \n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {printf("If Statement \n");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    {printf("Function \n");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {printf("Function Call \n");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {openBracket();;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {closeBracket();;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    {printf("If then statement\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {openBracket();;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {closeBracket();;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {printf("while statment\n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
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

  case 37:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    {
							(yyval.lexemeValue).intValue = (yyvsp[(1) - (1)].lexemeValue).intValue;
							(yyval.lexemeValue).type = INT_VAL;
						;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    {
							(yyval.lexemeValue).floatValue = (yyvsp[(1) - (1)].lexemeValue).floatValue;
							(yyval.lexemeValue).type = FLOAT_VAL;
						;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    {
							(yyval.lexemeValue).charValue = (yyvsp[(1) - (1)].lexemeValue).charValue;
							(yyval.lexemeValue).type = CHAR_VAL;
						;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    {
							(yyval.lexemeValue).stringValue = (yyvsp[(1) - (1)].lexemeValue).stringValue;
							(yyval.lexemeValue).type = STRING_VAL;
						;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    {
							(yyval.lexemeValue).boolValue = (yyvsp[(1) - (1)].lexemeValue).boolValue;
							(yyval.lexemeValue).type = BOOL_VAL;
						;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 246 "parser.y"
    {
							(yyval.lexemeValue).boolValue=(yyvsp[(1) - (1)].lexemeValue).boolValue;
							(yyval.lexemeValue).type = BOOL_VAL;
						;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
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

  case 45:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
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

  case 46:

/* Line 1455 of yacc.c  */
#line 309 "parser.y"
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

  case 47:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
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

  case 48:

/* Line 1455 of yacc.c  */
#line 370 "parser.y"
    { 
				//printf("AT VALUE: Type = %d intValue = %d\n",$1.type, $1.intValue);
				(yyval.lexemeValue).type= (yyvsp[(1) - (1)].lexemeValue).type;  (yyval.lexemeValue).intValue = (yyvsp[(1) - (1)].lexemeValue).intValue;		
			;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 376 "parser.y"
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

  case 53:

/* Line 1455 of yacc.c  */
#line 398 "parser.y"
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

  case 54:

/* Line 1455 of yacc.c  */
#line 410 "parser.y"
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

  case 55:

/* Line 1455 of yacc.c  */
#line 423 "parser.y"
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

  case 56:

/* Line 1455 of yacc.c  */
#line 437 "parser.y"
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

  case 57:

/* Line 1455 of yacc.c  */
#line 450 "parser.y"
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

  case 58:

/* Line 1455 of yacc.c  */
#line 463 "parser.y"
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

  case 64:

/* Line 1455 of yacc.c  */
#line 488 "parser.y"
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

  case 65:

/* Line 1455 of yacc.c  */
#line 508 "parser.y"
    {
						(yyval.intValue) = INT_VAL;
					;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 512 "parser.y"
    {
						(yyval.intValue) = FLOAT_VAL;
					;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 516 "parser.y"
    {
						(yyval.intValue)=CHAR_VAL;
					;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 520 "parser.y"
    {
						(yyval.intValue)= STRING_VAL;
					;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 524 "parser.y"
    { 
						(yyval.intValue)= BOOL_VAL;
					;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 527 "parser.y"
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

  case 71:

/* Line 1455 of yacc.c  */
#line 541 "parser.y"
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

  case 72:

/* Line 1455 of yacc.c  */
#line 554 "parser.y"
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
#line 2280 "parser.tab.c"
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
#line 582 "parser.y"


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
