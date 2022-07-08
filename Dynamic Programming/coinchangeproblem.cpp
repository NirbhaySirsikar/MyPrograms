#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int main()
{
    int coin;
    cin >> coin;
    vi coins(coin);
    for (int i = 0; i < coin; i++)
    {
        cin >> coins[i];
    }

    int v;
    cin >> v;
    vi dp(v + 2, 0);

    dp[0] = 1;
    for (int i = 0; i < coins.size(); i++)
    {
        for (int j = coins[i]; j <= v; j++)
        {
            // if (dp[j - coins[i]] >= 0)
            // {

                dp[j] += dp[j - coins[i]];
            // }
            // else

            //     dp[j] = dp[j];
            
        }
            for (int i = 0; i <= v; i++)
            {
                cout<<dp[i]<<" ";
            }cout<<endl;
    }
    cout << dp[v];

    return 0;
}