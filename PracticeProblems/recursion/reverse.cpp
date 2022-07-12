#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    if(n==1){
        cout<<arr[0];
    }else{

    reverse(arr+1,n-1);
    cout<<arr[0];
    }
}

int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    reverse(arr,9);
    return 0;
}