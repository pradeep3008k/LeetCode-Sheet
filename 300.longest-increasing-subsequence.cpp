/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    // O(N^2) solution
    // int lengthOfLIS(vector<int>& nums) {
    //     int n=nums.size();
    //     if(n==1)return 1;
    //     int dp[n];
    //     dp[0]=1;
    //     int max_val=1;
    //     for(int i=1;i<n;i++){
    //         dp[i]=1;
    //         for(int j=0;j<i;j++){
    //             if(nums[j]<nums[i])dp[i]=max(dp[i],dp[j]+1);
    //         }
    //         max_val=max(max_val,dp[i]);
    //     }
    //     return max_val;
    // }
    // O(NlogN)
    int lengthOfLIS(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(v.empty() or v.back()<nums[i])v.push_back(nums[i]);
            else{
                int index=lower_bound(v.begin(),v.end(),nums[i])-v.begin();
                v[index]=nums[i];
            }
        }
        return v.size();
    }
};
// @lc code=end

