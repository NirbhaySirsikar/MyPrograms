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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i];
    }cout<<endl;
    vector<vi> dp(n-1,(vi (n-1,0)));
    for (int g = 0; g < n - 1; g++)
    {
        for (int i = 0, j = g; j < n - 1; i++, j++)
        {
            if (g == 0)
            {
                dp[i][j] = 0;
            }
            else if (g == 1)
            {
                dp[i][j] = arr[i] * arr[j] * arr[j + 1];
                // cout<<i<<j<<" "<<dp[i][j]<< endl;
            }
            else
            {
                int tc = 1e9;
                for (int k = i; k < j; k++)
                {
                    int lh = dp[i][k];
                    int rh = dp[k + 1][j];
                    int mc = arr[i] * arr[k + 1] * arr[j + 1];
                    tc = min(tc, lh + rh + mc);
                }
                dp[i][j] = tc;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cout << dp[i][j] << "\t";
        }
        cout << endl;
    }

    cout << dp[0][n - 2];

    return 0;
}