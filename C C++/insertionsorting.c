#include <stdio.h>

int main()
{
    int num[100], n, min, pos;
    int temp;
    printf("How many numbers do you want to write : ");
    scanf("%d", &n);
    printf("Enter %d number \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        min = num[i];
        pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (num[j] < min)
            {
                min = num[j];
                pos = j;
            }
        }
        temp = num[i];
        num[i] = num[pos];
        num[pos] = temp;
    }
    printf("Sorted Elements of Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}
