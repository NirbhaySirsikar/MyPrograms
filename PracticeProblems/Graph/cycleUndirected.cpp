#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

bool iscycle(int src,vector<vi> &adj,vector<bool>&visited,vector<int> &stack){
    stack[src]=true;
    if(!visited[src]){
        visited[src]=true;
        for(auto i: adj[src]){
            if(!visited[i] and iscycle(i,adj,visited,stack)){
                return true;
            }if(stack[i]){
                return true;
            }
        }
    }
    stack[src]=false;
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
    }
    bool cycle = false;
    vector<int>stack(n,0);
    vector<bool> visited(n,0);
    for (int i = 0; i < n; i++)
    {
        if(!visited[i] && iscycle(i,adj,visited ,stack)){
            cycle=true;
        }
    }
    cout<<cycle;
    return 0;
}