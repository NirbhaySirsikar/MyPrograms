#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int main()
{
    vector<vi> arr = {{10, 20}, {12, 15}, {20, 30}};
    sort(arr.begin(), arr.end(), [&](vi &a, vi &b)
         { return a[1] < b[1]; });
    int take = 1;
    int end = arr[0][1];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i][1] >= end)
        {
            take++;
            end = arr[i][1];
        }
    }
    cout << take << endl;

    return 0;
}