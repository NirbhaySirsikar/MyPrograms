#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

const int N = 1e5 + 2;
bool vis[N];
vi adj[N];

void dfs(int node)
{
    // preorder
    vis[node] = 1;
    //uncomment below line to execute preorder transversal 
    // cout << node << " ";

    // inorder
    vi ::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (vis[*it]);
        else
        {
            dfs(*it);
        }
    }

    // preorder
    cout << node << " ";
}

int main()
{
    for (int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }
    int n, m;
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);

    return 0;
}
/*
input:
7 7
1 2
1 3
2 4
2 5
2 6
2 7
7 3
*/