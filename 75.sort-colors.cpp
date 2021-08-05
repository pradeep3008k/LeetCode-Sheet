/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0,white=0,blue=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0)red++;
            else if(nums[i]==1)white++;
            else blue++;
        }
        int i=0;
        for(i;i<red;i++)nums[i]=0;
        for(i;i<red+white;i++)nums[i]=1;
        for(i;i<n;i++)nums[i]=2;
    }
};
// @lc code=end

