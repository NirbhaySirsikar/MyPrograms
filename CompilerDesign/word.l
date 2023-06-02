%{
	#include<stdio.h>
	int w,l,s,t;
%}

%%
[A-Za-z0-9]+ {w++;}
[ ] {s++;}
"\n" {l++;}
"\t" {t++;}
%%
int main()
{
	extern FILE *yyin;
	yyin=fopen("word.txt","r");
	yylex();
	printf("word=%d\nline=%d\nspace=%d\ntab=%d\n",w,l,s,t);
	return 0;
}
int yywrap(){
return 1;
}