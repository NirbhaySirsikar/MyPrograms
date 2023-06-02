

%{
#include<stdio.h>
int LOOKUP = 0;
int state;
int count=0;
int add_word(char *word) ;
int lookup_word(char *word);
%}

%%

\/\/.* {printf("%s Comment\n", yytext);}
\/\*([a-zA-z]*|(\n)*)*\*\/ {printf("%s Multiline comment\n", yytext);}
#include["<][a-zA-Z.]+[">] { printf("%s include statement\n", yytext); }

int|main|return|void|printf	{ printf("%s is a keyword\n", yytext); }

\{|\(	{ printf("%s opening brace\n", yytext);}

\}|\)	{ printf("%s closing brace\n", yytext);}

\ |\,|\|\t|\;	{}

\n {state=LOOKUP;}

[a-zA-Z][a-zA-Z0-9_]* {
			add_word(yytext);
	}
\+|\-|\*|\\|=|\<|\> { printf("%s Operator\n", yytext ); }

\-?(([0-9]+)|([0-9]+\.[0-9]+)) {printf("%s Number\n", yytext);}
%%

int main(){
    yyin=fopen("test.c","r");
	yylex();
return 0;
}

int yywrap(){
return 1;}

struct word{
	char *word_name;
	int count;
	struct word *next;
};

struct word *word_list;

int add_word(char *word){
	struct word *wp;
	int _count = lookup_word(word);
	if(_count!=LOOKUP){
		printf("%s Identifier%d\n",word, _count);
		return 0;
	}
	count++;
	wp = (struct word *)malloc(sizeof(struct word));
	wp->next = word_list;
	wp->word_name = (char *)malloc(strlen(word)+1);
	strcpy(wp->word_name,word);
	wp->count=count;
	word_list=wp;
	printf("%s added to word list as identifier%d\n", word, count);
	return 1;
}

int lookup_word(char *word){
	struct word *wp=word_list;
	while(wp){
		if(strcmp(wp->word_name,word)==0){
			return wp->count;
		}
		wp = wp->next;	
	};
	return LOOKUP;
}
