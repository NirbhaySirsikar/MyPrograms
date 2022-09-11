
#include <stdio.h>

void swap(int *a, int *b);
int max(int a, int b);

int main()
{
    int a = 5, b = 10;

    printf("from value of a and b max value is:%d\n", max(a, b));
    swap(&a, &b);
    printf("after swaping:\nvalue of a:%d\nvalue of b:%d\n", a, b);
    return 0;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
