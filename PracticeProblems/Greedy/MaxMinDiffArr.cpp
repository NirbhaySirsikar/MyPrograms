#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int main()
{
    vi a = {12, -3, 10, 0};
    int n = a.size();
    sort(a.begin(), a.end());
    int minans = 0;
    int maxans = 0;
    for (int i = 0; i < n/2; i++)
    {
        minans+=abs(a[2*i]-a[2*i+1]);
        maxans+=abs(a[i]-a[n-i-1]);
    }
    
    cout<<minans<<" "<<maxans;

    return 0;
}