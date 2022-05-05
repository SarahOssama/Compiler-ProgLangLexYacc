%{


#include<stdio.h>
int yylineno = 1; // initialize to 1
void yyerror(char *s);
#include "test.tab.h"


%}

%%

    /*Types*/
"int"                           return INT;  
"float"                         return FLOAT;
"string"                        return STRING;
"char"                          return CHAR;
"bool"                          return BOOL;
    /*Constant*/
"const"                         return CONST;

    /*Identifier and Numbers*/
[a-zA-Z][_a-zA-Z0-9]*           return IDENTIFIER;
[0-9]+                          return NUMBER;

    /*Operators*/
        /*Assignment Operator*/
"="				return EQUAL;

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
