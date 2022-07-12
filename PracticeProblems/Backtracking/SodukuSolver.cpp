#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

void helper(int r,int c,vector<vi>&a,map<pair<int,int>,map<int,int>>&mp,vector<map<int,int>>row,vector<map<int,int>>col){
    if(r==9){
        for(auto it : a){
            for(auto i:it){
                cout<<i<<" ";
            }cout<<endl;
        }
        return;
    }
    if(c==9){
        helper(r+1,0,a,mp,row,col);
        return;
    }
    if(a[r][c]!=0){
    // cout<<"boom"<<endl;
        helper(r,c+1,a,mp,row,col);
        return;
    }
    for (int i = 0; i <= 9; i++)
    {
        int rw=r/3,cl=c/3;
        if(!mp[{rw,cl}][i] and !row[r][i] and !col[c][i]){
            mp[{rw,cl}][i]=1;
            row[r][i]=1;
            col[c][i]=1;
            a[r][c]=i;
            // cout<<r<<" "<<c<<" = "<<a[r][c]<<endl;
            helper(r,c+1,a,mp,row,col);
            // cout<<"backtrack"<<endl;
            mp[{rw,cl}][i]=0;
            row[r][i]=0;
            col[c][i]=0;
            a[r][c]=0;
        }
    }
    
}

void solveSoduku(vector<vi> &a){
    map<pair<int,int>,map<int,int>>mp;
    vector<map<int,int>>row(9);
    vector<map<int,int>>col(9);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            mp[{i/3,j/3}][a[i][j]]=1;
            row[i][a[i][j]]=1;
            col[j][a[i][j]]=1;
        }
        
    }
    helper(0,0,a,mp,row,col );
}

int main()
{
    vector<vi> a = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                    {5, 2, 0, 0, 0, 0, 0, 0, 0},
                    {0, 8, 7, 0, 0, 0, 0, 3, 1},
                    {0, 0, 3, 0, 1, 0, 0, 8, 0},
                    {9, 0, 0, 8, 6, 3, 0, 0, 5},
                    {0, 5, 0, 0, 9, 0, 6, 0, 0},
                    {1, 3, 0, 0, 0, 0, 2, 5, 0},
                    {0, 0, 0, 0, 0, 0, 0, 7, 4},
                    {0, 0, 5, 2, 0, 6, 3, 0, 0}};
    solveSoduku(a);

    return 0;
}