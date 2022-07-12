#include <bits/stdc++.h>
using namespace std;

int findpeak(int arr[], int n)
{
    int left = 0, right = n;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return arr[mid];
        }
        else if (arr[mid] <= arr[mid - 1])
        {
            right = mid;
        }
        else if (arr[mid] <= arr[mid + 1])
        {
            left = mid;
        }
    }
    return -1;
}

int main()
{
    int arr[]={0,99,1,8,5,7,9};
    cout<<findpeak(arr,6);
    return 0;
}