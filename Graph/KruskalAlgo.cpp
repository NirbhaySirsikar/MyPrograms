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
        int w,x,y;cin>>x>>y>>w;
        edges.push_back({w,x,y});

    }
    sort(edges.begin(),edges.end());
    int cost=0;
    for(auto i:edges){
        int w=i[0];
        int u=i[1];
        int v=i[2];
        int x=find_set(u);
        int y=find_set(v);
        if(x==y){
            continue;
        }
        else{
            cout<<u<<" "<<v<<endl;
            cost+=w;
            union_set(u,v);
        }
    }
    cout<<cost<<endl;
    return 0;
}