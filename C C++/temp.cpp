// input:145
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
const int N=1e5+7,mod=1e9+7;

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int m;cin>>m;
    int n=m;
    vi arr;
    while(n>0){
        int d=n%10;
        n/=10;
        arr.push_back(d);
    }
    int ans=0;
    for(auto i:arr){
        ans+=fact(i);
    }
    (ans==m)?cout<<"Strong Number":cout<<"Not a Strong Number";
    return 0;
}