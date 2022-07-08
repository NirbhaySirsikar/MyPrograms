#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
vector<bool> vis;
vector<vi> adj;
int n,m;
vi components;
int get_comp(int idx){
    if(vis[idx]){
        return 0;
    }
    vis[idx]=true;
    int ans=1;
    for(auto i:adj[idx]){
        if(!vis[i]){
            ans+=get_comp(i);
            vis[i]=true;
        }
    }
    return ans;
}

int main(){
    int n ,m;
    cin>>n>>m;
    adj=vector<vi>(n);
    vis=vector<bool>(n,false);
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
            components.push_back(get_comp(i));
        }
    }
    for(auto i:components){
        cout<<i<<" ";
    }cout<<endl;
    long long ans=0;
    for(auto i: components){
            ans+=i*(n-i);

    }
    cout<<ans/2;
    
    return 0;
}