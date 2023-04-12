#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][100];
    int n = 3;
    int S, flag = 0;
    cin >> S;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int i = 0, j = 0;
    while (a[i][j] != S)
    {
        if (i == n && j == n)
        {
            flag = 0;
            break;
        }
        else if (a[i][j] == S)
        {
            flag = 1;
            break;
        }
        else if (a[i][j] < S)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    if (flag == 0)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
    return 0;
}
