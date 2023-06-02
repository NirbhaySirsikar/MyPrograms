#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    bool down = true;
    vector<vector<char>> arr(3, vector<char>(n, '.'));
    int row = 0;
    for (int i = 0; i < n; i++)
    {

        arr[row][i] = s[i];
        if (row >= 2)
        {
            down = false;
        }
        else if (row <= 0)
        {
            down = true;
        }
        if (down)
            row++;
        else
            row--;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == '.')
                continue;
            else
                cout << arr[i][j];
        }
    }

    return 0;
}