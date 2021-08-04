/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    void allParenthesis(int a,int b,int count, string & s,vector<string> & ans){
        if(a==0 and b==0){
            ans.push_back(s);
            return;
        }
        if(a){
            s+='(';
            allParenthesis(a-1,b,count+1,s,ans);
            s.pop_back();
        }
        if(count>0 and b){
            s+=')';
            allParenthesis(a,b-1,count-1,s,ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s;
        allParenthesis(n,n,0,s,ans);
        return ans;
    }
};
// @lc code=end

