/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int last=nums[0],index=0;
        int k=1;
        for(auto it: nums){
            if(it!=last){
                nums[++index]=it;
                k++;
                last=it;
            }
        }
        return k;
    }
};
// @lc code=end

