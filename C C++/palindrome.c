#include <stdio.h>

int palindrome(int num)
{

    int p = 0;
    int rev = num;
    while (num != 0)
    {
        p = p * 10 + num % 10;
        num = num / 10;
    }
    if (p == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter a number to check whether it is palindrome or not : ");
    scanf("%d", &n);
    if (palindrome(n))
    {
        printf("\nThe given number is a palindrome .");
    }
    else
    {

        printf("\nThe given number is not a palindrome .");
    }
    return 0;
}