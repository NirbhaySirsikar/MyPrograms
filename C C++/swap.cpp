#include <iostream>
using namespace std;

void swap(int x, int y);

int main()
{
    int a, b;
    cout << "Enter two numbers you want to swap : " << endl;
    cin >> a >> b;
    cout << "Value before swap:\n";
    cout << "a = " << a << " b = " << b << endl;
    swap(a, b);
}

void swap(int x, int y)
{
    cout << "Value before swap inside the function :" << endl;
    cout << "a = " << x << " b = " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "Value after swap inside the function :" << endl;
    cout << "a = " << x << " b = " << y << endl;
}