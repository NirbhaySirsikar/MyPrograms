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
    // ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, p, q;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            p = i;
            q = n / i;
        }
    }
    cout << "p=" << p << " q=" << q << "\n";

    int qn = (p - 1) * (q - 1);
    vi earr;
    for (int i = 0; i <= qn; i++)
    {
        if (__gcd(i, qn) == 1)
        {
            earr.push_back(i);
            cout << earr.size() << " " << i << "\n";
        }
    }
    int choice;
    cin >> choice;
    int e = earr[choice - 1];
    cout << e;
    return 0;
}