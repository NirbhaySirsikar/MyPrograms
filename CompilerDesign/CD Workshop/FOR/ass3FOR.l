%{
#include"ass3FOR.tab.h"
%}

%%
for 			{return FOR; }
[A-Za-z_][A-Za-z_0-9]*		{return ID;}
[\t ] 			;
.			{return yytext[0];}
%%

int yywrap(){
	return 1;
}



