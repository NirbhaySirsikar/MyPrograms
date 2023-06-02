%{
		#include"if1.tab.h"
	
%}
%%
amit return AMIT;
else return ELSE;

[0-9]+			{ return NUM;}
[A-Za-z][A-Za-z_0-9]*	{return ID;}
[\t ] ;
\n return 0;
.  return yytext[0];

%%

