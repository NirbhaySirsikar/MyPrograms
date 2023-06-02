%{
	#include<stdio.h>
	int num=0;
%}
%%
[0-9] {num++;}
%%
int main()
{
	yyin= fopen("pract10.txt","r"); yylex();
	printf("\n\t%d digits", num);
	return 0;
}
int yywrap()
{
return(1);
}