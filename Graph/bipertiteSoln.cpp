#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
vector<vector<int>> adj;
vector<bool> vis;
vector<int> col;
bool bipart;
void colour(int u, int curr)
{
    if (col[u] != -1 && col[u] != curr)
    {
        bipart = false;
        return;
    }
    col[u] = curr;
    if (vis[u])
    {
        return;
    }
    vis[u] = true;
    for (auto i : adj[u])
    {
        colour(i, curr xor 1);
    }
}
int main()
{
    int n, m, x, y;
    bipart = true;
    cin >> n >> m;
    adj = vector<vi>(n);
    vis = vector<bool>(n, false);
    col = vector<int>(n, -1);
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            colour(i, 0);
        }
    }
    if (bipart)
    {
        cout << "graph is bipart";
    }
    else
        cout << "graph is not bipart";

    return 0;
}