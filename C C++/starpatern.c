#include <stdio.h>

int star(int n)
{
    for (int k = 0; k < n; k++)
    {

        for (int j = k; j <= 10; j++)
        {
            for (int i = 0; i < j; i++)
            {
                printf("* ");
            }
            printf("*\t");
        }
        printf("\n");
    }
}

int revstar(int n)
{
    for (int j = n; j >= 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()

{
    int a, num;
    printf("\nChoose what type of star psttern do you want : \n0 for triangular star patern\n1 for reversed triangular star pattern \n");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("\nEnter the nummber till which you want the pattern : ");
        scanf("%d", &num);
        printf("\n%c", star(num));
    }

    else
    {
        printf("\nEnter the nummber till which you want the pattern : ");
        scanf("%d", &num);
        printf("\n%c", revstar(num));
    }

    return 0;
}