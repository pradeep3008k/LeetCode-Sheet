/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string s) {
        int ans=0;
        int size=s.size();
        for(int i=0;i<size;i++){
            ans=ans*26 + (s[i]-64);
        }
        return ans;
    }
};
// @lc code=end

