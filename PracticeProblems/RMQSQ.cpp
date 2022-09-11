#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
const int N = 1e5 + 7, mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n) cin >> arr[i];
    int len = (int)sqrtl(n) + 1;
    vi b(len, mod);
    for (int i = 0; i < n; i++)
    {
        b[i / len] = min(arr[i], b[i / len]);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int ans = mod;
        for (int i = l; i <= r;)
        {
            if (i % len == 0 && i + len - 1 <= r)
            {
                ans = min(ans, b[i / len]);
                i += len;
            }
            else
            {
                ans = min(arr[i], ans);
                i++;
            }
        }
        cout << ans<<"\n";
    }
    return 0;
}