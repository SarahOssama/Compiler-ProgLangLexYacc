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

%token INT FLOAT STRING CHAR BOOL
%token SEMICOLON ENDLINE
%token CONST
%token IDENTIFIER NUMBER


%start program

%%

program: statements;
statements: statements statement ENDLINE | statement ENDLINE;
statement: var_declaration;
var_declaration: type IDENTIFIER SEMICOLON {printf("Parsed a variable declaration\n");};
type: INT | FLOAT | CHAR | STRING | BOOL;

%%

int main (void){
	yyparse(); 
	return 0;
}