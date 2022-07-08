#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int n, m;
const int N = 1e5 + 3;
vector<vi> g[N];
vector<int> dist(N), parent(N);
vector<bool> vis(N);
const int INF = 1e9;
int cost = 0;

void primsmst(int source)
{
    for (int i = 0; i < n; i++)
    {
        dist[i] = INF;
    }
    set<vi> s;
    dist[source] = 0;
    s.insert({0, source});
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        vis[x[1]] = true;
        int u = x[1];
        int v = parent[x[1]];
        int w = x[0];
        cout << u << " " << v << " " << w << endl;
        cost += w;
        for (auto it : g[x[1]])
        {
            if (vis[it[0]])
            {
                continue;
            }
            if (dist[it[0]] > it[1])
            {
                s.erase({dist[it[0]], it[0]});
                dist[it[0]] = it[1];
                s.insert({dist[it[0]], it[0]});
                parent[it[0]] = x[1];
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    primsmst(0);
    cout << cost;

    return 0;
}