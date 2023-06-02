%{
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include"ass5dIF.tab.h"
%}
%%
if return IF;
else return ELSE;

[0-9]+                  {strcpy(yylval.dval,yytext); return NUM;}
[A-Za-z][A-Za-z_0-9]*	{strcpy(yylval.dval,yytext); return ID;}
[\t ] ;
\n                      return 0;
.                       return yytext[0];
%%

int yywrap()
{
	return 1;
}

int yyerror()
{
	printf("\n %s Error!");
	return 0;
}



