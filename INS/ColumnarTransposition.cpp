#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

int main()
{
    string s;
    cin >> s;
    string key;
    cin >> key;
    int n = key.length();
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[key[i]] = i;
    }
    int height = s.length() % n == 0 ? s.length() / n : s.length() / n + 1;
    vector<vector<char>> arr(height, vector<char>(n, ' '));
    int curr = 0;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = s[curr];
            if (curr < s.length())
                curr++;
            else
                break;
        }
    }
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
    {
        for (int i = 0; i < height; i++)
        {
            cout << arr[i][it->second];
        }

        // for (int i = 0; i < height; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cipher[j][i] = arr[j][it->second];
        //     }
        // }
    }
    // for (int i = 0; i < height; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }

    return 0;
}