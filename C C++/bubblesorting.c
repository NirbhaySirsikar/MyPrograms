#include <stdio.h>
void out(int *num[])
{

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
}
int main()
{
    int num[7] = {10, 7, 8, 9, 1, 5, 3};
    int n = 7, temp, i, j, key;
    for (i = 1; i < n; i++)
        out(num[n]);
    {
        key = num[i];
        j = i - 1;
        while (j >= 0 && (num[j] > key))
        {
            num[j + 1] = num[j];
            j -= 1;
        }
        num[j + 1] = key;
    }
    printf("sorted elements of array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}