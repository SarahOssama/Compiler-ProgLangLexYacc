%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	extern FILE *yyin;
	extern FILE *yyout;
	extern int yylineno;
	extern int yylex();
	extern void yyerror(char *s);
	int yydebug=1;
%}

%token INT FLOAT STRING CHAR BOOL
%token SEMICOLON ENDLINE
%token CONST
%token IDENTIFIER NUMBER
%token EQUAL

%start program

%%

program: 				statements;
statements: 			statements statement ENDLINE | statement ENDLINE;
statement: 				var_declaration | expression;
var_declaration: 		type IDENTIFIER SEMICOLON {printf("Parsed a variable declaration\n");};
type: 					INT | FLOAT | CHAR | STRING | BOOL;
expression: 			assignment_expression;
assignment_expression: 	type IDENTIFIER EQUAL value SEMICOLON {printf("Parsed an assignment expression\n");};;
value:					IDENTIFIER | NUMBER;

%%


//For reading from console
// int main (void){
// 	yyparse(); 
// 	return 0;
// }


//For reading from file
int main (void)
{
    yyin = fopen("testfile.txt", "r+");
    if (yyin == NULL)
    {
        printf("File Not Found\n");
    }
    else
    {
        printf(">>>> Test File <<<<\n\n");
        FILE* testFile; char ch;
        testFile = fopen("testfile.txt","r");
        while((ch=fgetc(testFile))!=EOF)
        {
            printf("%c",ch);
        }
        printf("\n\n\n>>> Parsing <<<<\n\n");
        yyparse();
    }
    fclose(yyin);
    return 0;
}