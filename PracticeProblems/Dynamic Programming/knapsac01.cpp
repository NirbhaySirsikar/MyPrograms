#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int main()
{
    int n;
    cin >> n;
    vi wt(n);
    vi val(n);
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    int w;
    cin >> w;
    vector<vi> dp(n + 1, vi(w + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (j - wt[i - 1] >= 0)
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]],dp[i-1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
        for (int k = 0; k <= w; k++)
        {
            cout << dp[i][k] << " ";
        }
        cout << endl;
    }
    cout << dp[n][w];
    return 0;
}