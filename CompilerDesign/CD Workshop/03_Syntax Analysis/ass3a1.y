%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
%}
%token NUM 
%left '+' '-'
%%

exp : 	exp '+' exp  
	| exp '-' exp
	| NUM
	;

%%

int main()
{
printf("Enter an arithmetic expression\n");
yyparse();
printf("\nValid expression\n");
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

//input 20+20
