#include <stdio.h>
#include <conio.h>
#include <string.h>
char prol[10][10] = {"E", "E'", "E'", "T", "T'", "T'", "F", "F"};
char pror[10][10] = {"TE'", "+TE'", "@", "FT'", "*FT'", "@", "(E)", "%"};
char prod[10][10] = {"E->TE'", "E'->+TE'", "T->FT'", "T->*F", "F->(E)", "F->%"};
char first[10][10] = {"(%", "+@", "(%", "*@", "(%"};
char follow[10][10] = {"$)", "$)", "+$)", "+$)", "*+$)"};
char table[5][6][10];
numr(char c)
{
    switch (c)
    {
    case 'E':
        return 0;
    case 'T':
        return 1;
    case 'F':
        return 2;
    case '+':
        return 0;
    case '*':
        return 1;
    case '(':
        return 2;
    case ')':
        return 3;
    case '%':
        return 4;
    case '$':
        return 5;
    }
    return (2);
}


void main()
{
    int i, j, k;
    // clrscr();
    for (i = 0; i < 5; i++)
        for (j = 0; j < 6; j++)
            strcpy(table[i][j], " ");
    printf("\nThe following is the predictive parsing table for the following grammar:\n");
    for (i = 0; i < 10; i++)
        printf("%s\n", prod[i]);
    printf("\nPredictive parsing table is\n");
    fflush(stdin);
    for (i = 0; i < 10; i++)
    {
        k = strlen(first[i]);
        for (j = 0; j < 10; j++)
            if (first[i][j] != '@')
                strcpy(table[numr(prol[i][0]) + 1][numr(first[i][j]) + 1], prod[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (strlen(pror[i]) == 1)
        {
            if (pror[i][0] == '@')
            {
                k = strlen(follow[i]);
                for (j = 0; j < k; j++)
                    strcpy(table[numr(prol[i][0]) + 1][numr(follow[i][j]) + 1], prod[i]);
            }
        }
    }
    strcpy(table[0][0], " ");
    strcpy(table[0][1], "+");
    strcpy(table[0][2], "*");
    strcpy(table[0][3], "(");
    strcpy(table[0][4], ")");
    strcpy(table[0][5], "%");
    strcpy(table[0][5], "$");
    strcpy(table[1][0], "E");
    strcpy(table[2][0], "T");
    strcpy(table[3][0], "F");
    printf("\n \n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 6; j++)
        {
            printf("%-10s", table[i][j]);
            if (j == 5)
                printf("\n -------------------------------------------------------\n");
        }
}
