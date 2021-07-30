/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    int sumSquares(int n){
        int ans=0;
        while(n>0){
            ans+=(n%10)*(n%10);
            n=n/10;
        }
        return ans;
    }
    bool isHappy(int n) {
        while(n>6){ //as first happy number after 1 is 7
            n=sumSquares(n);
        }
        if(n==1)return true;
        return false;
    }
};
// @lc code=end

