%{


#include<stdio.h>
int yylineno = 1; // initialize to 1
void yyerror(char *s);
#include "test.tab.h"


%}

%%
"Hi"        return HI;
"Bye"       return BYE;
.           return OTHER;

%%


int yywrap(void)
{
   return 0;
}

void yyerror(char *s) {
    fprintf(stderr, "\n ERROR ON LINE %d :\n %s \n", yylineno, s);
    exit(0);
}
