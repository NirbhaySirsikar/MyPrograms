#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second

int main(){
    int ladders,snake;
    cin>>ladders;
    map<int,int> lad;
    map<int,int> snak;

    for (int i = 0; i < ladders; i++)
    {
        int u,v;
        cin>>u>>v;
        lad[u]=v;
    }
    cin>>snake;
    for (int i = 0; i < snake; i++)
    {
        int u,v;
        cin>>u>>v;
        snak[u]=v;
    }
    int moves=0;
    queue<int>q;
    vector<bool>vis(101,0);
    bool found=false;
    q.push(1);
    vis[1]=true;
    while(!q.empty()and !found ){
        int sz=q.size();
        while(sz--){
            int t=q.front();
            q.pop();
            for (int i = 1; i <= 6; i++)
            {
                if(t+i==100)found=true;
                if(t+i<=100 and lad[t+i] and !vis[lad[t+i]]){
                    vis[lad[t+i]]=true;
                    if(lad[t+i]==100)found =true;
                    q.push(lad[t+i]);
                }
                else if(t+1<=100 and snak[t+i] and !vis[snak[t+i]]){
                    vis[snak[t+i]]=true;
                    if(snak[t+i]==100)found =true;
                    q.push(snak[t+i]);

                }else if(t+i<=100 and !vis[t+i] and !snak[t+1]and !lad[t+i]){
                    vis[t+i]=true;
                    q.push(t+i);
                }
            }
            
        }
        moves++;
    }
    cout<<moves;
    return 0;
}