#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n,int m,int min){
    int painters=1;
    if(m>n){
        return false;
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if(min<arr[i]){
            return false;
        }
        else if(sum<min){
            sum+=arr[i];
        }else{
            painters++;
            sum=arr[i];
            if(painters>m){
                return false;
            }
        }
    }
    return true;
}

int painteralloc(int arr[],int n,int m){
    int ans=INT_MAX;
    int sum=0;
    int mini=arr[0];
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int max=sum;
    while(mini<=max){
        int mid=(mini+max)/2;
        if(isPossible(arr,n,m,mid)){
            ans=min(ans,mid);
            max=mid;
        }
        else{
            mini=mid;
        }
    }
    return ans;
    
}

int main(){
    int arr[]={12,34,67,90};
    int n=4;
    int m=2;
    cout<<painteralloc(arr,n,m);
    return 0;
}