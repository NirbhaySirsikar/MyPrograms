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
    vi dp(n);
    dp[0] = 1;
    int two = 0;
    int three = 0;
    int five = 0;
    for (int i = 1; i < n; i++)
    {
        dp[i] = min({2 * dp[two], 3 * dp[three], 5 * dp[five]});
        if ((2 * dp[two] )== dp[i])
            two++;
        if ((3 * dp[three]) == dp[i])
            three++;
        if ((5 * dp[five]) == dp[i])
            five++;
    }
    cout << dp[n - 1];
    return 0;
}