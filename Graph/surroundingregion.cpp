#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
void change(vector<vector<char>>&A,int x,int y){
    A[x][y]='*';
    int dx[]={0,0,-1,1};
    int dy[]={1,-1,0,0};
    for (int i = 0; i <4; i++)
    {
        int cx=x+dx[i];
        int cy=y+dy[i];
        if(cx>=0 and cx<A.size()and cy>=0 and cy<A.size() and A[cx][cy]=='O'){
            change(A,cx,cy);
        }
    }
    
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>A(n,vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>A[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i==0 or i ==n-1 or j==0 or j==n-1)
            if(A[i][j]=='O')
            change(A,i,j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(A[i][j]=='O')A[i][j]='X';
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(A[i][j]=='*')A[i][j]='O';
        }
        
    }
    rep(i,0,n){rep(j,0,m)cout<<A[i][j]<<" ";cout<<endl;}
    
    return 0;
}