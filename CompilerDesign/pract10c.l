%{
	#include<stdio.h>
	int line_number = 1;
%}
line .*\n
%%
{line} { printf("%d %s", line_number++, yytext); }
%%
int yywrap(){} int main()
{
extern FILE *yyin; yyin=fopen("word.txt","r"); if(yyin==NULL){
printf("File Not Found");
}
yylex(); return 0;
}