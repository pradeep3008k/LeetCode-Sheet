/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    // int peak(vector<int> & nums,int left, int right,int n){
    //     if(left<=right){
    //         int mid=(left+right)/2;
    //         bool ans =true;
    //         if(mid-1>=0 and nums[mid-1]>nums[mid]){ 
    //             ans=false;
    //             return peak(nums,left,mid-1,n);
    //         }
    //         if(mid+1<n and nums[mid+1]>nums[mid]){
    //             ans=false;
    //             return peak(nums,mid+1,right,n);
    //         }
    //         if(ans)return mid;
    //         if(mid-1>=0 and nums[mid-1]==nums[mid] and mid+1<n and nums[mid+1]==nums[mid])return min(peak(nums,left,mid-1,n),peak(nums,mid+1,right,n));
    //     }
    //     return INT_MAX;
    // }
    // int findPeakElement(vector<int>& nums) {
    //     int n=nums.size();
    //     return peak(nums,0,n-1,n);
    // }
    // Taken from solution // slightly faster than the above solution
    int findPeakElement(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=(l+r)/2;
            if(nums[mid]>nums[mid+1])r=mid;
            else l=mid+1;
        }
        return l;
    }
};
// @lc code=end

