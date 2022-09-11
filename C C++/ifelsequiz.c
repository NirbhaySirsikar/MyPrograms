
#include<stdio.h>

int main()
{
    int a,b;
    printf("\nEnter the marks you scored in maths : ");
    scanf("%d",&a);
    printf("\n Enter the marks you scored in science : ");
    scanf("%d",&b);
    if (a >= 30 && b >= 30) {
        printf("\nYou will get a gift of 45rs ");
    }
    else if (a >= 30 || b >= 30)
    {
        printf("\nYou will get a gift of 15rs");
    }
    else {
        printf("\nYou will get no gift :\")");
    }
    return 0;
}
