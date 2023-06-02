%{
#include <math.h>
#include <ctype.h>
#include <string.h>
#include "lex.yy.c"
	
%}
%token  ID 
%token  NUM 
%token AGAR WARNA 
%right '='
%left '+' '-'
%left '*' '/'
%left UMINUS
%%
start :  AGAR '(' condi ')' statement ';'  WARNA statement ';'
  ; 
condi : var '<' expr 	
		|	var '>' expr 	
	;
statement : var '=' expr 	
	;
expr : 	expr '+' expr		
   	| expr '-' expr		
  		| expr '*'expr			
  		| expr '/' expr      
  		| '(' expr ')'			
  		| var						
  		| NUM 					
  	;
var : ID 
  ;
%%
void main()
{
 	printf("Enter the expression : ");
 	yyparse();
	printf("Valid expression : ");
}
int yywrap()
{
	exit(0);
} 	
int yyerror(char *s)
{
	printf("\n %s Error!",s);
	exit(0);
}

//gcc  y.tab.c
//amit@amit-VPCF136FG:~/MIt workshop Programs$ ./a.out 
//Enter the expression : if(a<b) a=b+c;
//if (a<b) a=a+b; else b=b+a;
