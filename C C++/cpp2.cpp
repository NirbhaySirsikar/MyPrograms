#include <iostream>

using namespace std;
int multi(int a, int b)
{
    return a * b;
}
float fmulti(float a, float b)
{
    return a * b;
}
int main()
{
    int a, b;
    float x, y;
    cout << "Enter your first number : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;

    cout << "The multiplication of your numbers is : " << multi(a, b) << endl;

    cout << "Enter your first float number : ";
    cin >> x;
    cout << "Enter your second float number : ";
    cin >> y;
    cout << "The multiplication of your numbers in float is : " << fmulti(x, y) << endl;

    return 0;
}
