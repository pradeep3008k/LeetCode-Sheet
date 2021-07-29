/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int combination(int n ,int k){
        int C[n + 1][k + 1];
        int i, j;
    
        // Calculate value of Binomial Coefficient
        // in bottom up manner
        for (i = 0; i <= n; i++) {
            for (j = 0; j <= min(i, k); j++) {
                // Base Cases
                if (j == 0 || j == i)
                    C[i][j] = 1;
    
                // Calculate value using previously
                // stored values
                else
                    C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    
        return C[n][k];
    }
    int climbStairs(int n) {
        int a=n,b=0;
        int ans=0;
        while(a>=b){
            ans+=combination(a,b);
            a--;b++;
        }
        return ans;
    }
};
// @lc code=end

