/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,n=prices.size();
        int curr_val;
        for(int i=1;i<n;i++){
            curr_val=max(0,prices[i]-prices[i-1]);
            ans+=curr_val;
        }
        return ans;
    }
};
// @lc code=end

