#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
    int n,m;cin>>n>>m;
    int cnt=0;
    vector<vi>adj(n);
    vi indeg(n,0);
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        indeg[y]++;
    }
    queue<int>q;
    for (int i = 0; i < n; i++)
    {
        if(indeg[i]==0){
            q.push(i);
        }
    }
    while (!q.empty())
    {
        cnt++;
        int num=q.front();
        q.pop();
        cout<<num<<" ";
        for (auto it:adj[num])
        {
            indeg[it]--;
            if(indeg[it]==0){
                q.push(it);
            }
        }
        
    }
    
    return 0;
}