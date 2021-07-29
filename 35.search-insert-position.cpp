/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */
#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<=nums[0])return 0;
        int n=nums.size();
        if(target>nums[n-1])return n;
        for(int i=0;i<n;i++){
            if(nums[i]>=target)return i;
        }
        return 0;
    }
};
// @lc code=end

