#include <bits/stdc++.h>

using namespace std;

bool power2check(int n)
{
    return !(n&&(n & (n - 1)));
}

int main()
{
    int n;cin>>n;
    if (power2check(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    };
    return 0;
}
