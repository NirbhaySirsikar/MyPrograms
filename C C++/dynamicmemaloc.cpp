
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    int n, i;

    printf("write number of elements:");
    scanf("%d", &n);
    ptr = (char *)malloc(n * sizeof(char));

    if (ptr == NULL)
    {
        printf("error\n");
    }
    else
    {
        printf("write the elements of array:\n");

        for (int i = 0; i <= n; i++)
        {
            scanf("%c", &ptr[i]);
        }

        printf("the elements of array are:\n");
        for (int i = 1; i <= n; i++)
        {
            printf("%c, ", ptr[i]);
        }
        ptr[n] = '\0';
        printf("\n");
        free(ptr);
    }

    return 0;
}
