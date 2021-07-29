/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int crossingSum(vector<int>&nums,int l, int m,int h){
        int left_sum=INT_MIN,right_sum=INT_MIN;
        int curr_sum=0;
        for(int i=m;i>=l;i--){
            curr_sum+=nums[i];
            left_sum=max(left_sum,curr_sum);
        }
        curr_sum=0;
        for(int i=m+1;i<=h;i++){
            curr_sum+=nums[i];
            right_sum=max(right_sum,curr_sum);
        }
        return max(left_sum,max(right_sum,left_sum+right_sum));
    }
    int maxSum(vector<int> & nums, int l, int h){
        if(l==h)return nums[l];
        int m=(l+h)/2;
        return max(maxSum(nums,l,m),max(maxSum(nums,m+1,h),crossingSum(nums,l,m,h)));
    }
    int maxSubArray(vector<int>& nums) {
        //so basically there are three loops
        //ans = max(left_sum, right_sum, crossing sum)
        int n=nums.size();
        return maxSum(nums,0,n-1);
    }
};
// @lc code=end

