#include <bits/stdc++.h>

using namespace std;

bool power2check(int n)
{
    return !(n&&(n & (n - 1)));
}

int main()
{
    if (power2check(0))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    };
    return 0;
}
