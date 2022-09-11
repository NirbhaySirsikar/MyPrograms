#include <stdio.h>

int sum(int a, int b)   //argument,return
{
    return a + b;
}

void printstar(int n)   //argument,no return
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    
}
/*
int takenumber()    //no argument, return
{
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}
*/
//No Argument and No Return Value 
void Star_pattern() 
{ 
	int a; 
	printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/ 
	scanf("%d", &a ); 
	for (int i = 0; i<a; i++) 
	{
		printf("*"); 
	} 
} 
 


int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    //c = sum(a, b);
    Star_pattern();
    //printstar(7);

    printf("The sum is %d \n", c);
    return 0;
}
