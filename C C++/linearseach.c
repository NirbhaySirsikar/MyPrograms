#include <stdio.h>

int main()
{
    int num[9], i, search, key;
    printf("Enter 10 elements of the array you want to write : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Enter the element you want to search : ");
    scanf("%d", &search);
    for (i = 0; i < 10; i++)
    {
        if (num[i] == search)
        {
            key = 1;

            break;
        }
        else
        {
            key = 0;
        }
    }
    if (key != 0)
    {
        printf("Your element was found on %d location.", i + 1);
    }
    else
    {
        printf("Your element was not found");
    }
    return 0;
}