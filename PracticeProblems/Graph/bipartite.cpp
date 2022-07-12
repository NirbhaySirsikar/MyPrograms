#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int main()
{
    bool flag = 1;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    vector<int> visited(n, 0);
    vector<int> color(n, -1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    color[0] = 0;
    for (int i = 0; i < n; i++)
    {
        if (color[i] == 1)
        {
            for (auto j : adj[i])
            {
                if (color[j] == -1)
                {
                    color[j] = 0;
                }
                else if (color[j] == 1)
                {
                    flag = 0;
                    break;
                }
            }
        }
        else if (color[i] == 0)
        {
            for (auto j : adj[i])
            {
                if (color[j] == -1)
                {
                    color[j] = 1;
                }
                else if (color[j] == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        else
        {
            for (auto j : adj[i])
            {
                if (color[j] == 1)
                {
                    color[i] = 0;
                }
                else if (color[j] == 0)
                {
                    color[i] = 1;
                }
            }
            if (color[i] == -1)
            {
                color[i] = 0;
            }
        }
    }

    cout << flag;
    return 0;
}