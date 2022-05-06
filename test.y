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

%token HI BYE OTHER
%token PLUS MINUS MULT DIV 
%token INC DEC
%token PLUS_EQ MINUS_EQ MULT_EQ DIV_EQ


%left PLUS MINUS PLUS_EQ MINUS_EQ INC DEC
%left MULT DIV MULT_EQ DIV_EQ
%token INT FLOAT STRING CHAR BOOL
%token SEMICOLON ENDLINE
%token CONST
%token IDENTIFIER NUMBER
%token EQUAL



// Token for if then else 
	%token IF
	%token THEN
	%token ELSE

// Token for brackets
	%token OPENBRACKET
	%token CLOSEDBRACKET
	%token OPENCURL
	%token CLOSEDCURL

%nonassoc IFX


%start program

%%

program: statements;

statements : statements statement ENDLINE | statement ENDLINE;

statement : 
	expression_statement |
	assignment_statement |
	var_declaration |
	if_statement
	;


// if statment
if_statement: 
		IF OPENBRACKET expression CLOSEDBRACKET THEN OPENCURL statement CLOSEDCURL  {printf("If then statement\n");}
		| IF OPENBRACKET expression CLOSEDBRACKET THEN OPENCURL statement CLOSEDCURL ELSE OPENCURL statement CLOSEDCURL {printf("If then else statement\n");}
	;

 // Values
value: IDENTIFIER |
	NUMBER
;

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
var_declaration: 		type IDENTIFIER SEMICOLON {printf("Parsed a variable declaration\n");};
type: 					INT | FLOAT | CHAR | STRING | BOOL;
assignment_statement: 	type IDENTIFIER EQUAL value SEMICOLON {printf("Parsed an assignment expression\n");};;



%%


//For reading from console
// int main (void){
// 	yyparse(); 
// 	return 0;
// }


//For reading from file
int main (void)
{
    // yyin = fopen("testfile.txt", "r+");
    // if (yyin == NULL)
    // {
    //     printf("File Not Found\n");
    // }
    // else
    // {
    //     printf(">>>> Test File <<<<\n\n");
    //     FILE* testFile; char ch;
    //     testFile = fopen("testfile.txt","r");
    //     while((ch=fgetc(testFile))!=EOF)
    //     {
    //         printf("%c",ch);
    //     }
    //     printf("\n\n\n>>> Parsing <<<<\n\n");
    //     yyparse();
    // }
    // fclose(yyin);
	yyparse();
    return 0;
}