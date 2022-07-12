#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
const int N=1e5;
int dp[N];

// by memorization technique twicked from recurrence relation
int minSquarememorization(int n){
    if(n==0||n==1||n==2||n==3)return n;
    if(dp[n]!=1e7){
        return dp[n];
    }
    for (int i = 1; i*i <= n; i++)
    {
        dp[n] =min(dp[n],(minSquarememorization(n-i*i)+1));
    }
    return dp[n];
}
//by recurrence
int minSquarerec(int n){
    if(n==0||n==1||n==2||n==3)return n;
    int ans=1e7;
    for (int i = 1; i*i <= n; i++)
    {
        ans =min(ans,(minSquarerec(n-i*i)+1));
    }
    return ans;

}
int main(){
    rep(i,0,N){
        dp[i]=1e7;
    }
    int n;
    cin>>n;
    cout<<minSquarememorization(n)<<endl;

    // by dynamicprogramming aka bottom up aproach
    vi dyp(n+1,INT_MAX);
    dyp[0]=0;
    dyp[1]=1;
    dyp[2]=2;
    dyp[3]=3;
    for (int i = 4; i <= n; i++)
    {
        for (int j = 1;j*j<=i; j++)
        {
            dp[i]=min(dp[i],1+dp[i-j*j]);
        }
        
    }
    cout<<dp[n]<<endl;
    //it will take a lot time incase of larger numbers
    cout<<minSquarerec(n)<<endl;
    return 0;
}