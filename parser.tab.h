
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
     NUMBER = 281,
     IF = 282,
     THEN = 283,
     ELSE = 284,
     OPENBRACKET = 285,
     CLOSEDBRACKET = 286,
     OPENCURL = 287,
     CLOSEDCURL = 288,
     EQUAL = 289,
     VOID = 290,
     RETURN = 291,
     COMMA = 292,
     COLON = 293,
     WHILEEQ_EQ = 294,
     WHILE = 295,
     DO = 296,
     FOR = 297,
     IFX = 298,
     LT = 299,
     GT = 300,
     NE = 301,
     LE = 302,
     GE = 303
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 21 "parser.y"

    int intValue;        	/* integer value */
    float floatValue;       /* float value */
    char charValue;       	/* character value */
    char* stringValue; 		/* string value */



/* Line 1676 of yacc.c  */
#line 109 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


