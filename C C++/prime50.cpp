#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
const int N=1e5+7,mod=1e9+7;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    vi arr;
    int n=2,m;cin>>m;
    while(arr.size()<m){
        bool flag=true;
        for (int i = 2; i < n/2; i++)
        {
            if(n%i==0){
                flag=false;
            }
        }
        if(flag)arr.push_back(n);
        n++;
    }
    for(int i=1;i<=m;i++) cout<<i<<"\t"<<arr[i-1]<<"\n";
    
    return 0;
}