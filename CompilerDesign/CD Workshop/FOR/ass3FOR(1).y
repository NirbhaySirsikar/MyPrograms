%{
#include <stdio.h>
%}
%token FOR
%token ID
%start s
%%
s 		: FOR '(' initialization ';' condition ';' increment')' '{'block '}'	{printf("\n  Expression is valid\n ");}
       		;

initialization  : ID '=' exp	
		;

increment 	: ID '+' '+'		
		| ID '-' '-'		
		;

condition 	: ID '<' ID  	
	        | ID '>' ID  	
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
void main(){
yyparse();
printf("\n FOR Expression is valid\n ");
}
yyerror(){
printf("\n FOR Expression is In-valid\n ");
}

