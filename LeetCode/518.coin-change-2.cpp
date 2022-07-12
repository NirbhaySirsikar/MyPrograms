#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change 2
 */

// @lc code=start
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        vector<int> dp(amount+1,0);
        // dp[0]=1;
        for(int i=0;i<coins.size();i++){
            for(int j=0;j<amount;j++){
                if(amount-coins[i]>-1)
                dp[j]=max(dp[j-1],(dp[j]+dp[amount-coins[i]]));
                dp[j]=dp[j-1];
            }
        }
        return dp[amount];
    }
};
// @lc code=end

