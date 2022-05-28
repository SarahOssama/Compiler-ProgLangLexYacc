%{
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
%}


%union {
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
%token INT_NUMBER FLOAT_NUMBER
%type<stringValue> IDENTIFIER
%type<intValue> type
%type<lexemeValue> value
%type<lexemeValue> expression
%type<lexemeValue> INT_NUMBER
%type<lexemeValue> FLOAT_NUMBER
%type<lexemeValue> CHAR
%type<lexemeValue> STRING
%type<lexemeValue> TRUE
%type<lexemeValue> FALSE


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

//True and False
%token TRUE
%token FALSE


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
	| OPENCURL {openBracket();} statements CLOSEDCURL {closeBracket();}
	| RETURN return_value SEMICOLON
	;


/* // Block of code
block_statement : 
	OPENCURL statement CLOSEDCURL ENDLINE 		{printf("Block Statement \n");}
	; */

//if statment
if_statement: 
		IF OPENBRACKET expression CLOSEDBRACKET THEN OPENCURL {openBracket();} statement CLOSEDCURL {closeBracket();}  {printf("If then statement\n");}
		| IF OPENBRACKET expression CLOSEDBRACKET THEN OPENCURL {openBracket();} statement CLOSEDCURL {closeBracket();} ELSE OPENCURL {openBracket();} statement CLOSEDCURL {printf("If then else statement\n");}
	;
//while statment
while_statement:
		WHILE OPENBRACKET expression CLOSEDBRACKET OPENCURL {openBracket();} statement CLOSEDCURL {closeBracket();}  {printf("while statment\n");}
		| WHILE
		;

// do while statment
do_while_statement:
	DO OPENCURL {openBracket();} statement CLOSEDCURL {closeBracket();} WHILE OPENBRACKET expression CLOSEDBRACKET  {printf("do-while statment\n");}
	;

// for statment
for_statement:
	FOR OPENBRACKET assignment_statement expression SEMICOLON expression SEMICOLON CLOSEDBRACKET OPENCURL {openBracket();} statement CLOSEDCURL {closeBracket();} {printf("for loop\n");}
	;

 // Values
value: 	IDENTIFIER 		{ 
							symbolTableEntry* entry = returnVal($1);
							struct value tempValue = entry->Value;
							if(entry != nullptr)
							{
								
								if(tempValue.type == INT_VAL)
								{
									$$.intValue = tempValue.intValue;
									$$.type = INT_VAL;
								}
								else if(tempValue.type == FLOAT_VAL)
								{
									$$.floatValue = tempValue.floatValue;
									$$.type = FLOAT_VAL;
								}
								else if(tempValue.type == STRING_VAL)
								{
									$$.stringValue = tempValue.stringValue;
									$$.type = STRING_VAL;
								}
								else if(tempValue.type == CHAR_VAL)
								{
									$$.charValue = tempValue.charValue;
									$$.type = CHAR_VAL;
								}
								else if(tempValue.type == BOOL_VAL)
								{
									$$.boolValue = tempValue.boolValue;
									$$.type = BOOL_VAL;
								}
								
							}
							
						}
		| INT_NUMBER   	{
							$$.intValue = $1.intValue;
							$$.type = INT_VAL;
						}
		| FLOAT_NUMBER 	{
							$$.floatValue = $1.floatValue;
							$$.type = FLOAT_VAL;
						}
		| CHAR			{
							$$.charValue = $1.charValue;
							$$.type = CHAR_VAL;
						}
		| STRING		{
							$$.stringValue = $1.stringValue;
							$$.type = STRING_VAL;
						}
		| TRUE 			{
							$$.boolValue = $1.boolValue;
							$$.type = BOOL_VAL;
						}
		| FALSE			{
							$$.boolValue=$1.boolValue;
							$$.type = BOOL_VAL;
						}
;

//  Mathematical Expressions
expression_statement: expression SEMICOLON ;

expression:
		expression PLUS expression {
										printf("PLUS EXPRESSION\n");
										printf("TYPES: %d %d\n", $1.type, $3.type);
										if ($1.type == INT_VAL && $3.type == INT_VAL)
										{
											$$.intValue = $1.intValue + $3.intValue;
											$$.type = INT_VAL;
										}
										if ($1.type == FLOAT_VAL && $3.type == FLOAT_VAL)
										{
											$$.floatValue = $1.floatValue + $3.floatValue;
											$$.type = FLOAT_VAL;
										}
										if ($1.type == INT_VAL && $3.type == FLOAT_VAL)
										{
											$$.floatValue = $1.intValue + $3.floatValue;
											$$.type = FLOAT_VAL;
										}
										if ($1.type == FLOAT_VAL && $3.type == INT_VAL)
										{
											$$.floatValue = $1.floatValue + $3.intValue;
											$$.type = FLOAT_VAL;
										}
										
									} 
	| expression MINUS expression 	{
										printf("MINUS EXPRESSION\n");
										printf("TYPES: %d %d\n", $1.type, $3.type);
										if ($1.type == INT_VAL && $3.type == INT_VAL)
										{

											$$.intValue = $1.intValue - $3.intValue;
											$$.type = INT_VAL;
										}
										if ($1.type == FLOAT_VAL && $3.type == FLOAT_VAL)
										{
											$$.floatValue = $1.floatValue - $3.floatValue;
											$$.type = FLOAT_VAL;
										}
										if ($1.type == INT_VAL && $3.type == FLOAT_VAL)
										{
											$$.floatValue = $1.intValue - $3.floatValue;
											$$.type = FLOAT_VAL;
										}
										if ($1.type == FLOAT_VAL && $3.type == INT_VAL)
										{
											$$.floatValue = $1.floatValue - $3.intValue;
											$$.type = FLOAT_VAL;
										}
									}
									
								 
	| expression MULT expression 
								{
									
									printf("MULTIPLY EXPRESSION\n");
									printf("TYPES: %d %d\n", $1.type, $3.type);
									if ($1.type == INT_VAL && $3.type == INT_VAL)
									{
										printf("1: $d, 3: %d, $$ = %d\n", $1.intValue, $3.intValue,
										$1.intValue * $3.intValue);
										$$.intValue = $1.intValue * $3.intValue;
										$$.type = INT_VAL;
									}
									if ($1.type == FLOAT_VAL && $3.type == FLOAT_VAL)
									{
										$$.floatValue = $1.floatValue * $3.floatValue;
										$$.type = FLOAT_VAL;
									}
									if ($1.type == INT_VAL && $3.type == FLOAT_VAL)
									{
										// printf("1: %d, 3: %f, $$ = %f\n", $1.intValue, $3.floatValue,
										// $1.intValue + $3.floatValue);
										$$.floatValue = $1.intValue * $3.floatValue;
										$$.type = FLOAT_VAL;
									}
									if ($1.type == FLOAT_VAL && $3.type == INT_VAL)
									{
										$$.floatValue = $1.floatValue * $3.intValue;
										$$.type = FLOAT_VAL;
									}
									
								}
	
	|
	expression DIV expression |
	value { 
				printf("AT VALUE: Type = %d intValue = %d\n",$1.type, $1.intValue);
				$$.type= $1.type;  $$.intValue = $1.intValue;		
			} |

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
	
var_declaration: 	type IDENTIFIER SEMICOLON {		
													struct value Value;
													Value.type = $1;
													Value.varName = $2;
													if(Value.type == INT_VAL)
														Value.intValue = -1;
													else if(Value.type == STRING_VAL)
														Value.stringValue = (char*)calloc(1, sizeof(char));
													else if(Value.type == CHAR_VAL)
														Value.charValue = 'e';
													else if(Value.type == BOOL_VAL)
														Value.boolValue = false;
													else if(Value.type == FLOAT_VAL)
														Value.floatValue = -1.0;
													
													createEntry(Value, false, $1, false, false, yylineno);
												}; 
type: 			INT 
					{
						$$ = INT_VAL;
					}; 
				|FLOAT
					{
						$$ = FLOAT_VAL;
					}; 
				|CHAR
					{
						$$=CHAR_VAL;
					}; 
				|STRING
					{
						$$= STRING_VAL;
					};
				|BOOL
					{ 
						$$= BOOL_VAL;
					};
assignment_statement: 	type IDENTIFIER EQUAL expression SEMICOLON {
																struct value Value;
																Value.type = $4.type;
																Value.varName = $2;
																Value.intValue = $4.intValue;
																Value.stringValue = $4.stringValue;
																Value.charValue = $4.charValue;
																Value.boolValue = $4.boolValue;														
																Value.floatValue = $4.floatValue;
																
																
																createEntry(Value, false, $1, true,
																false, yylineno);
															};
						| IDENTIFIER EQUAL expression SEMICOLON 	{	
																struct value Value;
																Value.type = $3.type;
																Value.varName = $1;
																Value.intValue = $3.intValue;
																Value.stringValue = $3.stringValue;
																Value.charValue = $3.charValue;
																Value.boolValue = $3.boolValue;														
																Value.floatValue = $3.floatValue;

																updateEntry(Value, yylineno);
															};
constant_declaration: 	CONST type IDENTIFIER EQUAL value SEMICOLON 
															{
																struct value Value;
																Value.type = $5.type;
																Value.varName = $3;
																Value.intValue = $5.intValue;
																Value.stringValue = $5.stringValue;
																Value.charValue = $5.charValue;
																Value.boolValue = $5.boolValue;														
																Value.floatValue = $5.floatValue;

																createEntry(Value, true, $2, true,
																false, yylineno);
															};

function: 				function_prototype statement;
						
return_value: 			value | ;	
function_prototype:		type IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET 
						| type IDENTIFIER OPENBRACKET CLOSEDBRACKET
						| VOID IDENTIFIER OPENBRACKET parameters CLOSEDBRACKET
						| VOID IDENTIFIER OPENBRACKET CLOSEDBRACKET;
parameters: 			parameters COMMA single_parameter | single_parameter ;
single_parameter: 		type IDENTIFIER | type IDENTIFIER EQUAL constant ;
constant: 				INT_NUMBER | FLOAT_NUMBER | STRING | CHAR;
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