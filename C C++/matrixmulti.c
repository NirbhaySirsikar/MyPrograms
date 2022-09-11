#include <stdio.h>
int main()
{
    int a[4][2], b[2][3], ans[4][3];
    int sum;

    printf("Enter your first 4*2 matrix : \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter your second 2*3 matrix : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            ans[i][j] = sum;
            sum = 0;
        }
    }
    printf("Your multiplied matrix is : \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}