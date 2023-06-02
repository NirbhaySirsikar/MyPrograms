%{
#include "cal.tab.h"
%}

%%

[0-9]+		{yylval.num=atof(yytext); return number;}
[-+*/;]		{return yytext[0];}
COS|cos 	{yylval.trig=yytext; return cos1; }
SIN|sin 	{yylval.trig=yytext; return sin1; }
TAN|tan 	{yylval.trig=yytext; return tan1; }
%%

int yywrap(){
	return 1;
}
