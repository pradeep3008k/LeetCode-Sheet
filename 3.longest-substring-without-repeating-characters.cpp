/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
struct Node {
    int value = -1;
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n<2)return n;
        int max_length=0;
        unordered_map<char,Node>index;
        int start_index=0;
        index[s[0]].value=0;
        int i=1;
        for(i=1;i<n;i++){
            //check if it is already part of list or not
            if(index[s[i]].value>=start_index){
                //means part of the current string
                max_length=max(max_length,i-start_index);
                start_index=index[s[i]].value+1;
            }
            index[s[i]].value=i;
        }
        max_length=max(max_length,i-start_index);
        return max_length;
    }
};
// @lc code=end

