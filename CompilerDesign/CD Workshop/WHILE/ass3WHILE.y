%{
#include<stdio.h>
%}
%token WHILE
%token ID
%start s
%%
s		: WHILE '(' condition ')' '{'block '}'	{printf("\n  Expression is valid\n ");}
      		;

condition 	: ID '<' exp  	
	        | ID '>' exp  	
	        ;

block 		: statement ';'
	        | block statement ';'
      		;	 

statement 	: ID '=' exp 	
	        ;     

exp 		: ID '+' exp	
	  	| ID	        
    		;
%%
int main(){
yyparse();
}
yyerror(){
printf("\n WHILE Expression is In-valid\n ");
}

