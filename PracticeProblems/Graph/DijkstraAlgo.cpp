#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

const int inf = 1e7;

int main()
{
    int n, m;
    cin >> n>> m;
    vector<int> dist(n + 1, inf);
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    int source;
    cin >> source;
    dist[source] = 0;
    set<pair<int, int>> s;
    s.insert({dist[source], source});
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        for (auto it : graph[x.second])
        {
            if (dist[it.first] > dist[x.second] + it.second)
            {
                s.erase({dist[it.ff],it.ff});
                dist[it.ff]=dist[x.ss]+it.ss;
                s.insert({dist[it.ff],it.ff});


            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if(dist[i]<inf){
            cout<<dist[i]<<" ";
        }
        else{
            cout<<"-1 ";
        }
    }
    
    return 0;
}
// 4 4
// 1 2 24
// 1 4 20
// 3 1 3
// 4 3 12