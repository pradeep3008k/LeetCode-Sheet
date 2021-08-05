/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public: 
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return true;
        int i=0;
        while(i<n){
            if(nums[i]==0)return false;
            if(i+nums[i]>=n-1)return true;
            //else find the next i
            int max_dist=i+nums[i];
            int index=i;
            for(int j=i+1;j<i+nums[i];j++){
                if(j+nums[j]>max_dist){
                    max_dist=max(max_dist,j+nums[j]);
                    index=j;
                }
                
            }
            if(index==i)i=max_dist;
            else i=index;
        }
        if(i>=n-1)return true;
        return false;
    }
};
// @lc code=end

