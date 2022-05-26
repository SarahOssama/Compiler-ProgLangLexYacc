%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include <string.h>


	extern FILE *yyin;
	extern int yylineno;
	extern int yylex();
	extern void yyerror(char *s);
	int yydebug=1;

	//test
	void test(int);
	int t = 9;

%}


%union {
    int intValue;        	/* integer value */
    float floatValue;       /* float value */
    char charValue;       	/* character value */
    char* stringValue; 		/* string value */     
};

//Mathermatical Expressions
%token PLUS MINUS MULT DIV 
%token INC DEC
%token PLUS_EQ MINUS_EQ MULT_EQ DIV_EQ EQ_EQ

//Logical Expressions
%token AND OR NOT


//Declarations
%token INT FLOAT STRING CHAR BOOL

//Stop Characters
%token SEMICOLON 
%token ENDLINE


//Values 
%token CONST
%token IDENTIFIER
%token NUMBER
%type <stringValue> IDENTIFIER
%type <intValue> NUMBER
%type <intValue> expression



// Token for if then else 
%token IF
%token THEN
%token ELSE

// Token for brackets
%token OPENBRACKET
%token CLOSEDBRACKET
%token OPENCURL
%token CLOSEDCURL

//Assignment Operator
%token EQUAL

//Token for functions
%token VOID
%token RETURN
%token COMMA
%token COLON

// Token for while & do-while & for statment
%token WHILEEQ_EQ WHILE
%token DO
%token FOR



//Associativity
// - Non Associative
%nonassoc OR AND NOT
%nonassoc IFX

// - Left Associative
%left PLUS MINUS PLUS_EQ MINUS_EQ INC DEC
%left MULT DIV MULT_EQ DIV_EQ
%left GE LE EQ_EQ NE GT LT

%start program

%%

program: statements;

statements : 
 statements statement
| statement
;

statement : 
	
	expression_statement 				{printf("Expression Statement \n");}
	| assignment_statement				{	
											printf("Assignment Statement \n");
										}
	| var_declaration 					{printf("Variable Declaration \n");}
	| constant_declaration				{printf("Constant Declaration \n");}
	| if_statement						{printf("If Statement \n");}
	| while_statement 
	| do_while_statement
	| for_statement
	| function							{printf("Function \n");}
	| function_call						{printf("Function Call \n");}
	| OPENCURL statements CLOSEDCURL
	| RETURN return_value SEMICOLON
	;


/* // Block of code
block_statement : 
	OPENCURL statement CLOSEDCURL ENDLINE 		{printf("Block Statement \n");}
	; */

//if statment
if_statement: 
		IF OPENBRACKET expression CLOSEDBRACKET THEN OPENCURL statement CLOSEDCURL  {printf("If then statement\n");}
		| IF OPENBRACKET expression CLOSEDBRACKET THEN OPENCURL statement CLOSEDCURL ELSE OPENCURL statement CLOSEDCURL {printf("If then else statement\n");}
	;
//while statment
while_statement:
		WHILE OPENBRACKET expression CLOSEDBRACKET OPENCURL statement CLOSEDCURL   {printf("while statment\n");}
		| WHILE
		;

// do while statment
do_while_statement:
	DO OPENCURL statement CLOSEDCURL WHILE OPENBRACKET expression CLOSEDBRACKET  {printf("do-while statment\n");}
	;

// for statment
for_statement:
	FOR OPENBRACKET assignment_statement expression SEMICOLON expression SEMICOLON CLOSEDBRACKET OPENCURL statement CLOSEDCURL {printf("for loop\n");}
	;

 // Values
value: IDENTIFIER {printf("IDENTIFIER: %s\n",$1);}|
	NUMBER {printf("NUMBER: %d\n",$1);}
;

//  Mathematical Expressions
expression_statement: expression SEMICOLON;

expression:
	expression PLUS expression {
									printf("Expression: %d + %d\n", $1, $3);
									$$ = $1 + $3;
									printf("$$: %d\n", $$);
								} 
	|
	expression MINUS expression |
	expression MULT expression |
	expression DIV expression |
	value |

	expression PLUS_EQ expression |
	expression MINUS_EQ expression |
	expression MULT_EQ expression |
	expression DIV_EQ expression |
	expression EQ_EQ expression |

	expression GE expression |
	expression LE expression |
	
	expression NE expression |
	expression GT expression |
	expression LT expression |


	expression INC |
	// INC expression |
	expression DEC |
	// DEC expression |

	expression AND expression |
	expression OR expression |
	NOT expression

	;
	
var_declaration: 		type IDENTIFIER SEMICOLON {printf("Identifier: %s\n",$2);};
type: 					INT | FLOAT | CHAR | STRING | BOOL;
assignment_statement: 	type IDENTIFIER EQUAL value SEMICOLON
						| IDENTIFIER EQUAL value SEMICOLON ;
constant_declaration: 	CONST type IDENTIFIER EQUAL value SEMICOLON ;

function: 				function_prototype statement;
						
return_value: 			value | ;	
function_prototype:		type IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET 
						| type IDENTIFIER OPENBRACKET CLOSEDBRACKET
						| VOID IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET
						| VOID IDENTIFIER OPENBRACKET CLOSEDBRACKET;
parameters: 			parameters COMMA single_parameter | single_parameter ;
single_parameter: 		type IDENTIFIER | type IDENTIFIER EQUAL constant ;
constant: 				NUMBER | STRING;
function_call: 			IDENTIFIER OPENBRACKET call_parameters CLOSEDBRACKET SEMICOLON ;
call_parameters:		call_parameter |;
call_parameter:			call_parameter COMMA value | value ;

%%

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
	/* yyparse(); */
    return 0;
}