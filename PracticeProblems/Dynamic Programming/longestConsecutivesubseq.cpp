#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
    int n;cin>>n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vi dp(n,1);
    int ans=0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[i]>arr[j])dp[i]=max(dp[i],1+dp[j]);
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}