/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    void dfs(vector<vector<string>> & ans, vector<string> & st, int start, string &s,vector<vector<bool>>&dp){
        // using backtracking and dfs to solve the problem
        if(start>=s.size()){
            ans.push_back(st);
            return;
        }
        for(int end=start;end<s.size();end++){
            if(s[start]==s[end] and (end-start<=2 or dp[start+1][end-1])){// check if it makes a palindrome
                dp[start][end]=true;
                st.push_back(s.substr(start,end-start+1));
                dfs(ans,st,end+1,s,dp);
                st.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string> st;
        vector<vector<bool>>dp(s.size(),vector<bool>(s.size(),false));
        dfs(ans,st,0,s,dp);
        return ans;
    }
};
// @lc code=end

