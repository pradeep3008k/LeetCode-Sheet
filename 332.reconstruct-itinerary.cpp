/*
 * @lc app=leetcode id=332 lang=cpp
 *
 * [332] Reconstruct Itinerary
 */
#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string,multiset<string>>mp;
        for(int i=0;i<tickets.size();i++)mp[tickets[i][0]].insert(tickets[i][1]);
        vector<string>ans;
        stack<string> st;
        st.push("JFK");
        while(!st.empty()){
            string src=st.top();
            if(mp[src].size()){
                auto dest=mp[src].begin();
                st.push(*dest);
                mp[src].erase(dest);
            }
            else{
                st.pop();
                ans.push_back(src);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }    
};
// @lc code=end

