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

%start program

%%

program: hi program | bye program | OTHER;
hi: HI {printf("Parsed Hi\n");};
bye: BYE;
%%

int main (void){
	yyparse(); 
	return 0;
}