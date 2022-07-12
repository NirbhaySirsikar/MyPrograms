#include <bits/stdc++.h>
using namespace std;

int countPath(int s, int e)
{
    // cout<<"parameters:"<<s<<" "<<e<<endl;
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        // cout<<"iteration"<<i<<endl;
        // cout<<s<<" "<<e<<" "<<count<<endl;
        count += countPath(s + i, e);
        // cout<<count<<endl;
    }
    return count;
}

int main()
{
    cout<<countPath(0,3);
    return 0;
}