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
int main()
{
    int a;
    cout << "Enter your number : ";
    cin >> a;
    cout << "\nThe square of your number is " << sqr(a) << " and the cube is " << cube(a);
    return 0;
}
