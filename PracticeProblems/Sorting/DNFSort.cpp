#include<bits/stdc++.h>
using namespace std;

void DnfSort(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        if(arr[mid]==1){
            mid++;
        }
        if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[]={1,0,2,1,0,1,2,1,2};
    DnfSort(arr,9);
    return 0;
}