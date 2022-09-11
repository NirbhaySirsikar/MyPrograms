#include <iostream>

using namespace std;

float add(float a, float b)
{
    return a + b;
}
float sub(float a, float b)
{
    return a - b;
}
float multi(float a, float b)
{
    return a * b;
}
float division(float a, float b)
{
    return a / b;
}

int main()
{
    float a, b;
    char op;
    cout << "Enter your first number : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;
    cout << "Enter the operator you want to use + , - , / or * : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The addition of the numbers is : " << add(a, b);
        break;
    case '-':
        cout << "The subtraction of the numbers is : " << sub(a, b);
        break;
    case '*':
        cout << "The multiplication of the numbers is : " << multi(a, b);
        break;
    case '/':
        if (b == 0)
        {
            cout << "Please enter a valid input";
        }
        else

            cout << "The division of the numbers is : " << division(a, b);
        break;

    default:
        break;
    }

    return 0;
}