#include <stdio.h>
int main()
{
    int n = 10;
    int m = 10;
    int o = 10;
    printf("Enter number of rows and columns for the first matrix");
    scanf("%d%d", &m, &n);
    printf("Enter number of columns for the second matrix");
    scanf("%d", &o);
    int a[m][n], b[n][o], c[m][o];
    printf("Enter your first %d * %d matrix:\n", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
        printf("____________________________________________________________\n");
    for (int i = 0; i < m; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("|\n\n");
    }
        printf("____________________________________________________________\n");
    printf("Enter your second %d * %d matrix:\n", n, o);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < o; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
        printf("____________________________________________________________\n");
    for (int i = 0; i < n; i++)
    {
        printf("|");
        for (int j = 0; j < o; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("|\n\n");
    }
        printf("____________________________________________________________\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Multiplication of these two matrices:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}