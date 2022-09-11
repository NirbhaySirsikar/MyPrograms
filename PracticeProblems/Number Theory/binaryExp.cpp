#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int binaryExp(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}

int main()
{
    cout<<binaryExp(2,10);
    return 0;
}