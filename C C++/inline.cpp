#include <iostream>

using namespace std;

inline int sum(int a)

{
    int temp = 0;
    for (int i = 0; i < a; i++)
    {
        //return 2 * i + 1;
        temp += 2 * i + 1;
    }
    return temp;
}
int main()
{
    int a;
    cout << " Enter the upper bound";
    cin >> a;
    cout << "sum of first " << a << "odd numbers is " << sum(a);
    return 0;
}