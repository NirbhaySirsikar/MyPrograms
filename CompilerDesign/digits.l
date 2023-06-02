%{
	#include<stdio.h>
%}

%%
[0-9]+ {printf("%s", yytext);}
. ;
%%
int main()
{
	extern FILE *yyin;
	yyin=fopen("digits.txt","r");
	yylex();
}
int yywrap(){
return 1;
}