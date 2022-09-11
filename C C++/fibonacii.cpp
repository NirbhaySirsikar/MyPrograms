#include <iostream>

using namespace std;

int main()
{
    int n1 = 0, n2 = 1, n3, i, num;

    cout << "Enter the number of elements : ";
    cin >> num;
    /*
    cout << n1 << " " << n2 << " ";
    for (int i = 0; i < num; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
*/
    if (num >= 0)
    {

        //cout << "0";
        for (int i = 0; i < num; i++)
        {
            n2 = n1 + n2;
            cout << "," << n1;
            n1 = n2 - n1;
        }
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}
