#include <iostream>

using namespace std;

int main()
{
    float a, b;
    char op;
    cout << " Enter any two numbers : ";
    cin >> a >> b;
    cout << " Enter the operator that you want to use : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a << " " << op << " " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " " << op << " " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " " << op << " " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " " << op << " " << b << " = " << a / b;
        break;

    default:
        break;
    }

    return 0;
}
