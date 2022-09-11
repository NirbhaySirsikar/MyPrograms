#include <stdio.h>

int factorial(int number)

{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int num;
    printf("\n Enter the number you want the factorial of : ");
    scanf("%d", &num);

    printf("\nThe factorial of the number %d is %d", num, factorial(num));
    return 0;
}
