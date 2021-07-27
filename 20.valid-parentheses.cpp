/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        //let's use a stack
        int size=s.size();
        stack<char>st;
        for(int i=0;i<size;i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{')st.push(s[i]);
            else{
                if(st.size()>0){
                    if(s[i]==')' and st.top()=='(')st.pop();
                    else if(s[i]==']' and st.top()=='[')st.pop();
                    else if(s[i]=='}' and st.top()=='{')st.pop();
                    else return false;
                }
                else return false;
            }
        }
        if(st.size())return false;
        return true;
    }
};
// @lc code=end

