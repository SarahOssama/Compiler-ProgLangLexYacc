%{


#include<stdio.h>
int yylineno = 1; // initialize to 1
void yyerror(char *s);
#include "test.tab.h"


%}

%%
    /* Mathematical Expressions */
"+"                             return PLUS;
"-"                             return MINUS;
"*"                             return MULT;
"/"                             return DIV;
"++"                            return INC;
"--"                            return DEC;
"+="                            return PLUS_EQ;
"-="                            return MINUS_EQ;
"*="                            return MULT_EQ;
"/="                            return DIV_EQ;
"=="                            return EQ_EQ;

    /* Logical Expressions */
"&&"                            return AND;
"||"                            return OR;
"!"                             return NOT;

    /*Types*/
"int"                           return INT;  
"float"                         return FLOAT;
"string"                        return STRING;
"char"                          return CHAR;
"bool"                          return BOOL;
    /*Constant*/
"const"                         return CONST;

    /* if then else statment */
"if"                            return IF;
"then"                          return THEN;
"else"                          return ELSE;

    /* Brackets */
"("                             return OPENBRACKET;
")"                             return CLOSEDBRACKET;
"{"                             return OPENCURL;
"}"                             return CLOSEDCURL;

    /*Functions*/
"void"                          return VOID; 
"return"                        return RETURN;  
","                             return COMMA;
":"                             return COLON;

    /* While & do-while statment */
"while"                         return WHILE;
"do"                            return DO;



    /*Identifier and Numbers*/
[a-zA-Z][_a-zA-Z0-9]*           return IDENTIFIER;
[0-9]+                          return NUMBER;

    /*Operators*/
    /*Assignment Operator*/
"="				                return EQUAL;

    /*Stop Characters*/
"\n"                            return ENDLINE;
";"                             return SEMICOLON;


%%


int yywrap(void)
{
   return 0;
}

void yyerror(char *s) {
    fprintf(stderr, "\n ERROR ON LINE %d :\n %s \n", yylineno, s);
    exit(0);
}
