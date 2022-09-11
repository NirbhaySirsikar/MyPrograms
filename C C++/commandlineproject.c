#include <stdio.h>
#include <string.h>

// You have to create a command line utility to add/subtract/divide/multiply two numbers
// First command line argument of your c program must be the operation.
// The next arguments being the two numbers. For example:
// >>Command.c add 45 4
// >>49
int main(int argc, char *argv[])
{
    int a, b;
    char *op;
    op = argv[1];
    a = atoi(argv[2]);
    b = atoi(argv[3]);

    if (strcmp(op, "add") == 0)
    {
        printf("%d", a + b);
    }
    else if (strcmp(op, "sub") == 0)
    {
        printf("%d", a - b);
    }
    else if (strcmp(op, "multi") == 0)
    {
        printf("%d", a * b);
    }
    else if (strcmp(op, "div") == 0)
    {
        printf("%d", a / b);
    }

    return 0;
}
