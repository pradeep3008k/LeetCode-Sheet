/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        ans.push_back(vector<int>());
        for(auto &it: nums){
            int size=ans.size();
            for(int i=0;i<size;i++){
                vector<int> new_arr= ans[i];
                new_arr.push_back(it);
                ans.push_back(new_arr);
            }
        }    
        return ans;
    }
};
// @lc code=end

