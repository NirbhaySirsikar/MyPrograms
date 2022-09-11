#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
    string s1="";
    string s2="";
    cin>>s1;
    cin>>s2;
    vector<vector<int>> dp(s1.size()+1,vector<int>(s2.size()+1,0));
    for (int i = 1; i < s1.size()+1; i++)
    {
        for (int j = 1; j < s2.size()+1; j++)
        {
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[s1.size()][s2.size()];
    return 0;
}