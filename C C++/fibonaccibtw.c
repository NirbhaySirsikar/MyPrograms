#include <stdio.h>
//#include <string.h>
/*
int fibitr(int num)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < num - 1; i++)
    {
        b = a + b;
        a = b - a;
        
    }
    return a;
}*/
/*
int fib(int *string, int n2)
{
    int a = 0;
    int b = 1;
    if (n2 > 0)
    {
        for (int i = 0; i < n2 - 1; i++)
        {
            b = a + b;
            string[i] = a;
            a = b - a;
        }
    }
}
*/
int main()
{
    int n1, n2;
    //int string[n2 - n1];
    //int string[n2];
    int a = 0;
    int b = 1;
    printf("\n Enter the number from which you want your fibonacci sequence : ");
    scanf("%d", &n1);
    printf("\n Enter the number till which you want your fibonacci sequence : ");
    scanf("%d", &n2);

    //printf("\n fibonacci term at %d with iterative method is %d", n, fibitr(n));
    if (0 < n1 < n2)
    {

        if (n2 > 0)
        {
            //printf("0");
            for (int i = 0; i < n2; i++)
            {
                b = a + b;
                if (i >= n1)
                {
                    printf("%d ", a);
                }
                //else
                //{
                //    continue;
                //}
                //string[i] = a;
                a = b - a;
            }
        }
    }
    else
    {
        printf("\nInvalid input");
    }

    //fib(string, n2);
    //printf("%s", string);
    return 0;
}
