#include <iostream>

using namespace std;
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    return a / b;
}
int main()
{
    int a, b;
    cout << "Enter your first number : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;

    cout << "The addition of your numbers is : " << add(a, b) << endl;
    cout << "The subtraction of your numbers is : " << sub(a, b) << endl;
    cout << "The multipication of your numbers is : " << multi(a, b) << endl;
    cout << "The division of your numbers is : " << division(a, b) << endl;

    return 0;
}
