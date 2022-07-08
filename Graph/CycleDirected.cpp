#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

bool iscycle(int src,vector<vi> &adj,vector<bool>&visited,int parent){
    visited[src]=true;
    for(auto i:adj[src]){
        if(i!=parent){
            if(visited[i]){
                return true;
            }   
            if(!visited[i]and iscycle(i,adj,visited,src)){
                return true; 
            }
        }
    }
    return false;
}

int main()
{

    int n, m;
    cin >> n >> m;
    vector<vi> adj(n);
    vector<bool> vis(n, false);
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool cycle = false;
    vector<bool> visited(n,0);
    for (int i = 0; i < n; i++)
    {
        if(!visited[i] && iscycle(i,adj,visited,-1)){
            cycle=true;
        }
    }
    cout<<cycle;
    return 0;
}