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
    if(n%2!=0){
        cout<<"Enter valid input";
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int dp[n][n];
    for (int g = 0; g < n; g++)
    {
        for(int i=0,j=g;j<n;i++,j++){
            if(g==0){
                dp[i][j]=arr[i];
            }
            if(g==1){
                dp[i][j]=max(arr[i],arr[j]);
            }
            else{
                dp[i][j]=max(arr[i]+min(dp[i+2][j],dp[i+1][j-1]),arr[j]+min(dp[i+1][j-1],dp[i][j-2]));
            }
        }
    }
    cout<<dp[0][n-1];
    
    return 0;
}