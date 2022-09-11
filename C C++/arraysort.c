#include <stdio.h>

int main()
{
    int arr[6] = {6, 9, 1, 8, 2, 3};
    int key, i, j, k;
    for (int i = 1; i < 6; i++)
    {
        key = arr[i];
        i = j - 1;
        while ((j >= 0) && (arr[j] > key))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + i] = key;
    }

    for (int k = 0; k < 6; k++)
    {
        printf("%d ", arr[i]);
    }

    getchar();
    return 0;
}
