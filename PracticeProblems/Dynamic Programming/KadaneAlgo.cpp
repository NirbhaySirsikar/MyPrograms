#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int curr=0;
    int maxnow=0;
    for (int i = 0; i < n; i++)
    {
        curr+=arr[i];
        maxnow=max(curr,maxnow);
        if(curr<0){
            curr=0;
        }
    }
    cout<<maxnow;
    return 0;
}