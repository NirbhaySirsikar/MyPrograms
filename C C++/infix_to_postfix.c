#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;
void push(char symbol)
{
    stack[++top] = symbol;
}
char pop()
{
    if (top == -1)
    {
        return -1;
    }
    else
        return stack[top--];
}
int priority(char symbol)
{
    if (symbol == '(')
        return 0;
    else if (symbol == '^')
        return 1;
    else if (symbol == '+' || symbol == '-')
        return 2;
    else if (symbol == '/' || symbol == '*')
    {
        return 3;
    }
    return 0;
}
int main()
{
    char exp[100];
    char *ele;
    char symbol;
    printf("Enter the expression :");
    scanf("%c", &exp);
    printf("\n");
    ele = exp;
    while (*ele != '\0')
    {
        if (isalnum(*ele))
            printf("%c", *ele);
        else if (*ele == ')')
        {
            while ((symbol = pop()) != '(')
            {
                printf("%c", symbol);
            }
            push(*ele);
        }
        ele++;
    }
    while (top != -1)
    {
        printf("%c", pop());
    }
    return 0;
}