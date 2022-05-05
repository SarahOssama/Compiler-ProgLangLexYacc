%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	// extern FILE *yyin;
	// extern FILE *yyout;
	extern int yylineno;
	extern int yylex();
	extern void yyerror(char *s);
	int yydebug=1;
%}

%token HI BYE OTHER
%token ASSIGN PLUS MINUS MULT DIV 
%token INC DEC
%token PLUS_EQ MINUS_EQ MULT_EQ DIV_EQ
%token IDENTIFIER
%token SEMICOLON


%left PLUS MINUS PLUS_EQ MINUS_EQ INC DEC
%left MULT DIV MULT_EQ DIV_EQ

%start program

%%

program: statements;

statements : statements statement | statement;

statement : 
	expression_statement
	;

 // Values
value: IDENTIFIER ;

//  Mathematical Expressions
expression_statement: expression SEMICOLON;

expression:
	expression PLUS expression |
	expression MINUS expression |
	expression MULT expression |
	expression DIV expression |
	value |

	expression PLUS_EQ expression |
	expression MINUS_EQ expression |
	expression MULT_EQ expression |
	expression DIV_EQ expression |

	expression INC |
	INC expression |
	expression DEC |
	DEC expression |

	;

%%

int main (void){
	yyparse(); 
	return 0;
}