#include <bits/stdc++.h>
using namespace std;
// map<int,int> dp[51][51];
vector<vector<map<int, int>>> dp(51, vector<map<int, int>>(51));
int N=1e9+7;
int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
{
    // vector<vector<map<int,int>>dp(m,vector<int>(n));
    if (maxMove == 0)
        return 0;
    if (dp[startRow][startColumn][maxMove]!=NULL)
    {
        return dp[startRow][startColumn][maxMove];
    }
    if (startRow >= m or startRow < 0 or startColumn < 0 or startColumn >= n)
        return 1;
    dp[startRow][startColumn][maxMove] = (findPaths(m, n, maxMove - 1, startRow - 1, startColumn) + findPaths(m, n, maxMove - 1, startRow, startColumn + 1) + findPaths(m, n, maxMove - 1, startRow + 1, startColumn) + findPaths(m, n, maxMove - 1, startRow, startColumn - 1))%N;
    return dp[startRow][startColumn][maxMove];
}
int main()
{
    cout << findPaths(2, 2, 2, 0, 0) << endl;
    cout << findPaths(1, 3, 3, 0, 1) << endl;
    return 0;
}