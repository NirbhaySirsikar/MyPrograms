#include <bits/stdc++.h>
#include "bitman.cpp"
using namespace std;

int unique(int arr[], int n)
{
    int num = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getbit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            num=setBit(num, i);
        }
    }
    return num;
}

int main()
{
    int a[] = {1, 2, 3, 4,1, 2, 3, 1, 2, 3};
    cout << unique(a, 10);
    return 0;
}