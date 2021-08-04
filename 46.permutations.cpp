/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
    unordered_map<int,bool>ifused;
public:
    void permutations(vector<vector<int>> & ans, vector<int> & curr, vector<int> nums,int n){
        if(n==0){
            ans.push_back(curr);
            return;
        }
        for(auto it: nums){
            auto x=ifused.find(it);
            if(x==ifused.end() or (x!=ifused.end() and x->second==false)){
                ifused[it]=true;
                curr.push_back(it);
                permutations(ans,curr,nums,n-1);
                curr.pop_back();
                ifused[it]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int>curr;
        permutations(ans,curr,nums,n);
        return ans;
    }
};
// @lc code=end

