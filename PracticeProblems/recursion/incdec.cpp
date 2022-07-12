#include <bits/stdc++.h>
using namespace std;

void inc(int n)
{
    if (n == 1)
    {
        cout << n << endl;
    }
    else
    {
        inc(n - 1);
        cout << n << endl;
    }
}
void dec(int n)
{
    if (n == 1)
    {
        cout << n << endl;
    }
    else
    {

        cout << n << endl;
        dec(n - 1);
    }
}
int main()
{
    dec(5);
    inc(5);
    return 0;
}