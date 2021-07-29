/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size()-1;
        int len=0;
        while(n>=0 and s[n]==' ')n--;
        while(n>=0 and s[n]!=' '){
            len++;
            n--;
        }
        return len;
    }
};
// @lc code=end

