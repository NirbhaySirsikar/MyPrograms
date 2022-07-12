#include<bits/stdc++.h>
using namespace std;

// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

int partition(int arr[],int l , int r){
    int p=arr[r];
    int i=l-1;
    for (int j = l; j < r; j++)
    {
        if (arr[j]<p)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[i+1],arr[r]);
    return i+1;
    
}

void quicksort(int arr[],int l, int r){
    if(l<r){

    int p=partition(arr,l,r);
    quicksort(arr,l,p-1);
    quicksort(arr,p+1,r);

    }   
}

int main(){
    int a[]={986,454,879,564,785};
    quicksort(a,0,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}