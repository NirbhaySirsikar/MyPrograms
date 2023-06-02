%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
%}
%token NUM
%left '+' '-'
%left '*' '/'
%%
S:  exp {printf("Ans=%d",$$);}
exp :  exp '+' exp 	{$$=$1+$3;} 
	| exp '-' exp	{$$=$1-$3;}
	| exp '/' exp	{$$=$1/$3;}
	| exp '*' exp	{$$=$1*$3;}
	| '(' exp ')'	
	| NUM
	;

%%
int main()
{
printf("Enter an arithmetic expression : \n");
yyparse();
printf("Valid expression \n");
return 0;
}

int yyerror()
{ 
	printf("\nInvalid input\n");
	exit(0);
	return 0;
}
yywrap()
{
	exit(0);
}

//Input:50+50

