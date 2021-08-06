/*
 * @lc app=leetcode id=150 lang=cpp
 *
 * [150] Evaluate Reverse Polish Notation
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto it: tokens){
            if(it=="+" or it=="-" or it=="*" or it=="/"){
                int second=st.top();st.pop();
                int first=st.top();st.pop();
                if(it=="+")st.push(first+second);
                else if(it=="-")st.push(first-second);
                else if(it=="*")st.push(first*second);
                else st.push(first/second);
            }
            else st.push(stoi(it));
        }
        return st.top();
    }
};
// @lc code=end

