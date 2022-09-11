#include <stdio.h>
#include <math.h>

int main()
{
    int num[100], n, min, pos, temp0;
    int temp[100];
    printf("How many numbers do you wanat to enter");
    scanf("%d", &n);
    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                temp[j] = num[j] % 10;
            }
            else if (i == 1)
            {
                temp[j] = ((num[j] % 100) - (num[j] % 10)) / 10;
            }
            else
            {
                temp[j] = num[j] / 100;
            }
        }
        for (int k = 0; k < n; k++)
        {
            for (int m = k + 1; m < n; m++)
            {
                if (temp[k] > temp[m])
                {
                    temp0 = num[k];
                    num[k] = num[m];
                    num[m] = temp0;

                    temp0 = temp[k];
                    temp[k] = temp[m];
                    temp[m] = temp0;
                }
            }
        }
    }
    printf("Sorted elements of array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}