#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n){
    if(n==1){
        return 1;
    }
    bool rem = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && rem);
}

int main(){
    int arr[]={1,2,3,8,5,6};
    cout<<sorted(arr,6);
    return 0;
}