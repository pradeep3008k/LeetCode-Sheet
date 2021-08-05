/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int left_index(vector<int> & nums,int left, int right,int target){
        if(left==right){
            if(nums[left]==target)return left;
            else return -1;
        }
        if(left<right){
            int mid=(left+right)/2;
            if(nums[mid]<target)return left_index(nums,mid+1,right,target);
            return left_index(nums,left,mid,target);
        }
        return -1;
    }
    int right_index(vector<int> & nums,int left, int right,int target){
        if(left==right){
            if(nums[left]==target)return left;
            else return -1;
        }
        if(left<right){
            int mid=(left+right)/2;
            if(nums[mid]>target)return right_index(nums,left,mid-1,target);
            return right_index(nums,mid,right,target);
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        ans.push_back(left_index(nums,0,n-1,target));
        ans.push_back(right_index(nums,0,n-1,target));
    }
};
// @lc code=end

