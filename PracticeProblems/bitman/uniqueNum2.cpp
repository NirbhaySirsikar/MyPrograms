#include <bits/stdc++.h>
using namespace std;

int setbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int Setbit = 0;
    int pos = 0;
    while (Setbit != 1)
    {
        Setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor=0;
    for (int i = 0; i < n; i++)
    {
        if (setbit(arr[i], pos-1))
        {
            newxor = newxor ^ arr[i];
        }
    }
    cout << newxor << endl;
    cout << (newxor ^ tempxor);
}

int main()
{
    int a[] = {1, 2, 3, 1, 2, 3, 4, 5};
    unique(a, 8);

    return 0;
}
