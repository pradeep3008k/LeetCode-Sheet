/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double power(double x,int n){
        if(n==0)return 1;
        double half=power(x,n/2);
        if(n&1)return half*half*x;
        return half*half;
    }
    double myPow(double x, int n) {
        if(n<0){
            if(n!=-2147483648)return 1/power(x,-n);
            return 1/(power(x,2147483647)*x);
        }
        return power(x,n);
    }
};
// @lc code=end

