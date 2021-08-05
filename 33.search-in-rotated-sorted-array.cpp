/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    // idea divide the array into two halves // one of them will surely be a sorted array
    int search_in_sorted_array(vector<int>&nums,int left,int right,int target){
        if(left==right and nums[left]==target)return left;
        if(left<right){
            int mid=(left+right)/2;
            if(nums[mid]==target)return mid;
            if(nums[left]<=nums[mid] ){
                if(target>=nums[left] and target<=nums[mid])return search_in_sorted_array(nums,left,mid-1,target);
                return search_in_sorted_array(nums,mid+1,right,target);
            }
            if(nums[mid]<=nums[right]){
                if(target>=nums[mid] and target<=nums[right])return search_in_sorted_array(nums,mid+1,right,target);
                return search_in_sorted_array(nums,left,mid-1,target);
            }
            
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return search_in_sorted_array(nums,0,n-1,target);
    }
};
// @lc code=end

