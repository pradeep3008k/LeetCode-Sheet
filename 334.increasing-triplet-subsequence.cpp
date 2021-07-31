/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    // O(N) and O(N)approach
    // bool increasingTriplet(vector<int>& nums) {
    //     int n=nums.size();
    //     if(n<3)return false;
    //     vector<int>min_values(n);
    //     int minv=INT_MAX;
    //     for(int i=0;i<n-1;i++){
    //         min_values[i]=minv=min(minv,nums[i]);
    //     }
    //     int maxv=INT_MIN;
    //     for(int i=n-2;i>0;i--){
    //         maxv=max(maxv,nums[i+1]);
    //         if(min_values[i-1]<nums[i] and maxv>nums[i])return true;
    //     }
    //     return false;
    // }
    //O(N) and O(1) approach
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return false;
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(auto &it :nums){
            if(it<=min1)min1=it;
            else if(it<=min2)min2=it;
            else return true;
        }
        return false;
    }
};
// @lc code=end

