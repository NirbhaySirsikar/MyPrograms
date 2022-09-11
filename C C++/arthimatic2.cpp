#include <iostream>

using namespace std;

inline int sqr(int a)
{
    return a * a;
}

inline int cube(int a)
{
    return a * a * a;
}
inline int add(int a, int b)
{
    return a + b;
}
inline int sub(int a, int b)
{
    return a - b;
}
inline int multi(int a, int b)
{
    return a * b;
}
inline float divi(float a, float b)
{
    return a / b;
}
int main()
{
    int a, b;
    float p, q;
    cout << "Enter your number to find square : ";
    cin >> a;
    cout << "\nThe square of your number is : " << sqr(a);
    cout << "\nEnter your number to find cube : ";
    cin >> a;
    cout << "\nThe cube of your number is : " << cube(a);
    cout << "\nEnter your first number for addition: ";
    cin >> a;
    cout << "\nEnter your second number for addition: ";
    cin >> b;
    cout << "\nAddition of your numbers : " << add(a, b);
    cout << "\nEnter your first number for subtraction: ";
    cin >> a;
    cout << "\nEnter your second number for subtraction: ";
    cin >> b;
    cout << "\nSubtraction of your numbers : " << sub(a, b);
    cout << "\nEnter your first number for for multiplication: ";
    cin >> a;
    cout << "\nEnter your second number for for multiplication: ";
    cin >> b;
    cout << "\nMultiplication of your numbers : " << multi(a, b);
    cout << "\nEnter your first number for division: ";
    cin >> p;
    cout << "\nEnter your second number for division: ";
    cin >> q;
    cout << "\nDivision of your numbers : " << divi(p, q);
    return 0;
}
