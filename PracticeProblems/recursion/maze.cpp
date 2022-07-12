#include <bits/stdc++.h>
using namespace std;

int maze(int i, int j)
{
    if (i == 1 || j == 1)
    {
        return 1;
    }
    int count = 0;
    count = maze(i - 1, j) + maze(i, j - 1);
    return count;
}
int mazeanotherway(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }
    return (mazeanotherway(n, i + 1, j) + mazeanotherway(n, i, j + 1));
}
int main()
{
    cout << maze(3, 3)<<endl;
    cout << mazeanotherway(3, 0, 0);
    return 0;
}