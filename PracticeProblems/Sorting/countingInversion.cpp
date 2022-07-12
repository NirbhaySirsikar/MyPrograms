#include <bits/stdc++.h>
using namespace std;

long long merge(int arr[],int l ,int mid,int r){
    long long inv=0;
    int n1= mid-l+1;
    int n2= r-mid;
    int a[n1],b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if (a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;k++;
        }
        else{
            arr[k]=b[j];
            j++;k++;inv+=n1-i;
        }
        
    }
    while (i<n1)
    {
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;k++;

    }
    return inv;
}

long long mergesort(int arr[], int l, int r)
{
    long long inv = 0;
    if (l < r)
    {
        int mid = (l + r) / 2;
        inv+=mergesort(arr,l,mid);
        inv+=mergesort(arr,mid+1,r);
        inv+=merge(arr,l,mid,r);
    }
    return inv;
}

int main()
{
    int arr[]= { 3,2,1};
    cout<<mergesort(arr,0,2);
    return 0;
}