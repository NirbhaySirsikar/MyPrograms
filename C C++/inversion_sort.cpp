#include <iostream>
using namespace std;
int main()
{
    int a[] = {6, 9, 1, 4, 0, 3, 2};
    int temp;
    cout << "[ ";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    cout << "]";
    cout << endl;
    cout << "Inversed elements:" << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (a[i] > a[j])
            {
                cout << "{" << a[i] << "," << a[j] << "}";
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << endl;
    cout << "[ ";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    cout << "]";
    cout << endl;
    return 0;
}