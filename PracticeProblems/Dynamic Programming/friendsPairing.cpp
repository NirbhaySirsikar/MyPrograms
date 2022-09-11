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
    //f(n)=f(n-1)+(n-1)f(n-2)
    vi dp(n+1);
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for (int i = 3; i < n+1; i++)
    {
        dp[i]=dp[i-1]+(i-1)*dp[i-2];
    }
    cout<<dp[n];
    return 0;
}