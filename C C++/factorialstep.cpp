#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 1, num;

    cout << "Enter a positive integer : ";
    cin >> num;

    if (num >= 0)
    {

        //cout << "0";
        for (int i = 0; i < num; i++)
        {
            b = a + b;
            cout << a;
            a = b - a;
        }
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}
