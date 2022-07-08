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
    int graph[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)graph[i][j]=0;
            else graph[i][j]=inf;
        }
        
    }
    
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = w;
    }
    

    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                graph[i][j] = min(graph[i][j], (graph[i][k] + graph[k][j]));
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            cout << graph[i][k] << " ";
        }
        cout << endl;
    }

    return 0;
}