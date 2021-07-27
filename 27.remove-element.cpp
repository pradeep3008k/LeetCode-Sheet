/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0,k=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]!=val){
                nums[index++]=nums[i];
                k++;
            }
        }
        return k;
    }
};
// @lc code=end

