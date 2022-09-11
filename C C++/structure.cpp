
#include <stdio.h>

struct employee
{
    int eId;
    char eName[100];
    float salary;
};

int main()
{
    struct employee e;
    printf("Enter your name:");
    gets(e.eName);
    printf("Enter id of emloyee:");
    scanf("%d", &e.eId);
    printf("Enter the monthly salary amount:");
    scanf("%f", &e.salary);

    printf("EMPLOYEE'S INFORMATION:\n");
    printf("_______________________________\n");
    printf("Persone Name:%s\n", e.eName);
    printf("Employee Id:%d\n", e.eId);
    printf("Monthly Salary:%f\n", e.salary);
    return 0;
}