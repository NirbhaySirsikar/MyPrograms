#include <bits/stdc++.h>
using namespace std;

int first(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return first(arr, n, i + 1, key);
}
int last(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    int lastnum=last(arr, n, i + 1, key);
    if (lastnum !=-1)
    {
        return lastnum;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,2,9};
    cout<<first(a,10,0,2);
    cout<<last(a,10,0,2);
    return 0;
}