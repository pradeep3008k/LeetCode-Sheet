/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++)ans=ans^nums[i];
        return ans;
    }
};
// @lc code=end

