%{
#include <math.h>
#include <string.h>
#include "lex.yy.c"	

char * codegen(char *first, char op, char *second);
char COUNT[2]="0";
char cnt;
char temp[2]="t";
int lnum=0;	
%}
%union 
{ 
	char dval[30]; 
}
%token <dval> ID 
%token <dval> NUM 
%token IF ELSE 
%type <dval> var 
%type <dval> exp
%type <dval> block
%type <dval> statement
%type <dval> condition
%right '='
%left '+' '-'
%left '*' '/'
%left UMINUS

%%
start :  IF '(' condition ')'{lab1($3);}'{'block'}'{lab4(); } ELSE {lab2(); }'{'block'}'{lab3();}
      ;
condition : var '<' exp  {strcpy($$,codegen($1,'<',$3)); }
	       |var '>' exp  {strcpy($$,codegen($1,'>',$3));}
	       ;
block : block statement ';'
      | statement ';'
      ;	       
statement : var '=' exp {printf("%s=%s\n",$1,$3);}
	      ;     
exp : exp '+' exp	 {strcpy($$,codegen($1,'+',$3));}
    |exp '-' exp	 {strcpy($$,codegen($1,'-',$3));}
  	|exp '*'exp	 {strcpy($$,codegen($1,'*',$3));}
  	|exp '/' exp     {strcpy($$,codegen($1,'/',$3));}
  	|'(' exp ')'	 {strcpy($$,$2);}
  	|var	         {strcpy($$,$1);}
  	|NUM 	         {strcpy($$,$1);}
    ;
var : ID {strcpy($$,$1);}
    ;
%%

main()
{
 	printf("Enter the expression : ");
 	yyparse();
}

char * codegen(char *first, char op, char *second)
{
	char *ptr;
	strcpy(temp,"t");
 	strcat(temp,COUNT);	
	printf("%s=%s %c %s\n",temp,first,op,second);
	COUNT[0]++;
	ptr=temp;
	return ptr;
}

lab1(char *temp)
{
	lnum++;
	printf("if %s goto L%d\n",temp,lnum);
 	cnt=COUNT[0];
 	printf("goto L2\nL1:\n");
}

lab2()
{
	COUNT[0]=cnt;
	printf("L2:\n");
	
}

lab3()
{
	printf("L3:\n");
	
}
lab4()
{
	printf("goto L3\n");
}
