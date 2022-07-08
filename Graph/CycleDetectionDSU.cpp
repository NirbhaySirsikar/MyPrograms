#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
const int N=1e5+6;
vector<int> parent(N);
vi sz(N);
void make_set(int v){
    parent[v]=v;
    sz[v]=1;
}
int find_set(int v){
    if(v==parent[v]){
        return v;
    }
    return parent[v]=find_set(parent[v]);
}
void union_set(int u,int v){
    int a=find_set(u);
    int b=find_set(v);
    if(a!=b){
        if(sz[a]<sz[b]){
            swap(a,b);
        }
        parent[b]=a;
        sz[a]+=sz[b];
    }
}
int main(){
    for (int i = 0; i < N; i++)
    {
        make_set(i);
    }
    
    int n,m;cin>>n>>m;
    vector<vector<int>> edges;
    for (int i = 0; i < m; i++)
    {
        int x,y;cin>>x>>y;
        edges.push_back({x,y});

    }
    bool cycle=false;

    for(auto i:edges){
        int u=i[0];
        int v=i[1];
        int x=find_set(u);
        int y=find_set(v);
        if(x==y){
            cycle=true;
        }else{
            union_set(u,v);
        }
    }
    cout<<cycle;
    return 0;
}