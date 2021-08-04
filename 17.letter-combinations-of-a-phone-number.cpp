/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
    unordered_map<char,string>number_to_letter=
    {
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    };
    int total_digits;
public:
    void allcombinations(vector<string>values, string & s,int i,vector<string> & ans){
        if(i==total_digits){
            ans.push_back(s);
            return;
        }
        else{
            for(auto it: values[i]){
                s+=it;
                allcombinations(values,s,i+1,ans);
                s.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        int n=digits.length();
        if(n==0)return ans;
        this->total_digits=n;
        vector<string>values;
        for(int i=0;i<n;i++){
            values.push_back(number_to_letter[digits[i]]);
        }
        string s;
        allcombinations(values,s,0,ans);
        return ans;
    }
};
// @lc code=end

