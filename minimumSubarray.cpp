#include<bits/stdc++.h>
using namespace std;

int minsubarray(int arr[],int n,int x){
    int count=0,sum=0,i=0;
    int ans=INT_MAX;
    while(sum<x){
        sum+=arr[i];
        count++;i++;
    }
    int ele=count;
    for (int i = count; i < n; i++)
    {
        sum-=arr[i-count];
        if(sum>x){
            ele--;
        }
        else{
        sum+=arr[count];
            ele++;
        }
        ans=min(ans,ele);
    }
    return ans;
    
}

int main(){
    int arr[]={1,4,45,6,10,19};
    int x=51;
    int n=6;
    cout<<minsubarray(arr,n,x);
    return 0;
}