/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<=end){
            //check if it is alphanumeric or not
            
            if(!((s[start]<='z' and s[start]>='a') or (s[start]<='Z' and s[start]>='A') or (s[start]<='9' and s[start]>='0')))start++;
            else if(!((s[end]<='z' and s[end]>='a') or (s[end]<='Z' and s[end]>='A') or (s[end]>='0' and s[end]<='9')))end--;
            else if((s[start]<='9' and s[start]>='0') or (s[end]<='9' and s[end]>='0')){
                if(abs(s[start]-s[end])==0){start++;end--;}
                else return false;
            }
            else{
                int diff=abs(s[start]-s[end]);
                if(diff==0 or diff==32){start++;end--;}
                else return false;
            }
        }
        return true;
    }
};
// @lc code=end

