#include<iostream>
using namespace std;

void mergesort(int a[],int l,int r,){
    int mid;
    mid=(l+r))/2;
    if(l<r){
        	mergesort(a[],l,mid);
        	mergesort(a[],mid+1,r);
    else if(a[l]>a[r]){
        int temp;
        temp=a[l];
        a[l]=a[r];
        a[r]=temp;

    }
    }
int main(){
    int a[]= {7,5,3,4,6,2,1};
    mergesort(a[8],0,7);
    for(int i;i<8;i++){
        cout<<a[i]<<" ";
    }

    return 0;

}