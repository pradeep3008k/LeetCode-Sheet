/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>occurence;
        for(auto it: nums)occurence[it]++;
        set<pair<int,int>,greater<pair<int,int>>>st;
        for(auto it: occurence)st.insert({it.second,it.first});
        vector<int>ans;
        set<pair<int,int>,greater<pair<int,int>>>::iterator it=st.begin();
        for(int i=0;i<k;i++,it++){
            ans.push_back((*it).second);
        }
        return ans;
    }
};
// @lc code=end

