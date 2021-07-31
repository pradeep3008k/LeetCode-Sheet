/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //two pointer approach
        int n= nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i==0 or nums[i]!=nums[i-1]){
                int target=-nums[i];
                int start=i+1,end=n-1;
                while(start<end){
                    if(nums[start]+nums[end]<target)start++;
                    else if(nums[start]+nums[end]>target)end--;
                    else{
                        vector<int>a;
                        a.push_back(nums[i]);
                        a.push_back(nums[start]);
                        a.push_back(nums[end]);
                        ans.push_back(a);
                        start++;
                        while(start<end and nums[start]==nums[start-1])start++;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

