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
    int dp[n];
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    for (int i = 3; i <= n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
    return 0;
}