/*
 * @lc app=leetcode id=576 lang=cpp
 *
 * [576] Out of Boundary Paths
 */
// @lc code=start
#include <bits/stdc++.h>
#include <map>
class Solution {
public:
    // map<int,int> dp[51][51];
    // vector<vector<map<int,int>>>dp(number,vector<map<int,int>>(number));
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        // vector<vector<map<int,int>>dp(m,vector<int>(n));
        if(dp[startRow][startColumn].first==maxMove){
            return dp[startRow][startColumn].second;
        }
        if(startRow>=m or startRow<0 or startColumn<0 or startColumn>=n) return 1;
        if(maxMove==0) return 0;
         dp[startRow][startColumn][maxMove]=findPaths(m,n,maxMove-1,startRow-1,startColumn)+findPaths(m,n,maxMove-1,startRow,startColumn+1)+findPaths(m,n,maxMove-1,startRow+1,startColumn)+findPaths(m,n,maxMove-1,startRow,startColumn-1);
        return dp[startRow][startColumn][maxMove].second;
    }
};
// @lc code=end

