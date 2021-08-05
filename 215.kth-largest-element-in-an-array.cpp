/*
 * @lc app=leetcode id=215 lang=cpp
 *
 * [215] Kth Largest Element in an Array
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    // int partition(vector<int>&arr,int l,int r){
//         int index=l,pivot=arr[r];
//         for(int j=l;j<r;j++){
//             if(arr[j]<=pivot){
//                 swap(arr[index],arr[j]);
//                 index++;
//             }
//         }
//         swap(arr[index],arr[r]);
//         return index;
//     }
//     int findKthSmallest(vector<int>& nums, int l,int r, int k) {
//         if(k>=0 and k<=r-l+1){
//             int index=partition(nums,l,r);
//             if(k-1==index-l)return nums[index];
//             else if(k-1<index-l)return findKthSmallest(nums,l,index-1,k);
//             return findKthSmallest(nums,index+1,r,k - index + l - 1);
//         }
//         return INT_MAX;
//     }
//     int findKthLargest(vector<int>&nums,int k){
//         int n=nums.size();
//         return findKthSmallest(nums,0,n-1,n-k+1);
//     }

    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
    }
};
// @lc code=end

