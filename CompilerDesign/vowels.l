%{
	#include<stdio.h>
	int v=0;
	int c=0;
%}

%%
[aeiouAEIOU] {v++;}
[A-Za-z] {c++;}
%%
int yywrap(){
	return 1;
}
int main()
{
	yylex();
	printf("vowels= %d",v);
	printf(" consonants= %d",c);
	return 0;
}