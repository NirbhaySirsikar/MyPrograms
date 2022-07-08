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
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n);
    vector<int> dist(n, inf);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }
    int source;
    cin >> source;
    dist[source] = 0;
    for (int j = 0; j < n-1; j++)
    {
        for (int i = 0; i < n; i++)
        {
            for (auto it : graph[i])
            {
                if (dist[it.ff] > dist[i] + it.ss)
                {
                    dist[it.ff] = dist[i] + it.ss;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<dist[i]<<" ";
    }
    
    return 0;
}