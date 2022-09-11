#include <iostream>

using namespace std;

inline int sqr(int n)
{
    return n * n;
}

inline int cube(int n)
{
    return n * n * n;
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
inline int divi(int a, int b)
{
    return a / b;
}
int main()
{
    int a, b;
    cout << "Enter your two numbers : ";
    cin >> a;
    cin >> b;
    cout << "\nAddition of your numbers : " << add(a, b);
    cout << "\nSubtraction of your numbers : " << sub(a, b);
    cout << "\nMultiplication of your numbers : " << multi(a, b);
    cout << "\nDivision of your numbers : " << divi(a, b);
    return 0;
}
