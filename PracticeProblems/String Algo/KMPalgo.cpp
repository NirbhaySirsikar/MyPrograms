#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
vector<int> computeLps(string s)
{
    int n = s.size();
    vi pi(n, 0);
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
        {
            j = pi[j - 1];
        }
        if (s[i] == s[j])
        {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}
void KMP(string s, string t)
{
    int n = t.length();
    int m = s.length();
    vi res = computeLps(s);
    int pos = -1;
    int i(0), j(0);
    while (i < n)
    {
        if (t[i] == s[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j != 0)
            {
                j = res[j - 1];
                // cout<<j<<"\n";
            }
            else
            {
                i++;
            }
        }
        if (j == m)
        {
            pos = i - m;
            break;
        }
        // cout<<i<<"\n";
    }
    cout << pos;
}

int main()
{
    string t = "onionionspl";
    string s = "onions";
    KMP(s, t);
    return 0;
}