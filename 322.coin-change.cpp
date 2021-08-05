/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)return 0;
        int dp[amount+1];
        sort(coins.begin(),coins.end());
        dp[0]=0;
        if(coins[0]==1)dp[1]=1;
        else dp[1]=INT_MAX;
        for(int i=2;i<=amount;i++){
            dp[i]=INT_MAX;
            for(auto it: coins){
                if(it>i)break;
                else if(dp[i-it]!=INT_MAX)dp[i]=min(dp[i],1+dp[i-it]);
            }
        }
        if(dp[amount]==INT_MAX)return -1;
        else return dp[amount];
    }
};
// @lc code=end

