#include <iostream>
using namespace std;

int addition(int a, int b);
int substraction(int a, int b);
int multiplication(int a, int b);
int main()
{
    int num1;
    int num2;
    int add;
    int sub;
    int multi;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    add = addition(num1, num2);
    sub = substraction(num1, num2);
    multi = multiplication(num1, num2);
    cout << "Addition is: " << add << endl;
    cout << "multiplication is: " << sub << endl;
    cout << "substraction is: " << multi << endl;
    return 0;
}
int addition(int a, int b)
{
    return (a + b);
}
int substraction(int a, int b)
{
    return (a - b);
}
int multiplication(int a, int b)
{
    return (a * b);
}
