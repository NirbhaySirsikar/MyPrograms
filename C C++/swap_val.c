#include<stdio.h>

void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nswapped numbers are : a= %d b= %d",x,y);
}

void main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    swap(a,b);
}