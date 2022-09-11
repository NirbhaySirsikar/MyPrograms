#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the numbers between which you need the series : ";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        cout << i << " ";
    }

    return 0;
}
