/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0;
        int end=numbers.size()-1;
        vector<int>ans;
        while(start<end){
            int total=numbers[start]+numbers[end];
            if(total==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                break;
            }
            else if(total<target)start++;
            else end--;
        }
        return ans;
    }
};
// @lc code=end

