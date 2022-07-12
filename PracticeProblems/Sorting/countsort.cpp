#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void CountSort(int arr[], int n)
{
    int m = arr[0];
    for (int i = 0; i < n; i++)
    {
        m = max(arr[i], m);
    }
    m++;
    int count[m] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]] += 1;
    }
    int cnum = 0;
    for (int i = 0; i < m; i++)
    {
        cnum += count[i];
        count[i] = cnum;
    }

    int res[n];
    for (int i = 0; i < n; i++)
    {
        res[count[arr[i]] - 1] = arr[i];
        count[arr[i]] -= 1;
    }
    print(res, n);
}

int main()
{
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    CountSort(arr, 9);
    return 0;
}