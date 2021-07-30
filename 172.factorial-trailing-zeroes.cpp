/*
 * @lc app=leetcode id=172 lang=cpp
 *
 * [172] Factorial Trailing Zeroes
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0,t=5;;
        while(t<=n){
            ans+=(n/t);
            t*=5;
        }
        return ans;
    }
};
// @lc code=end

