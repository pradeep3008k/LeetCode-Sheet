/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        for(int i=0;i<32;i++,n>>=1){
            if(n&1)ans++;
        }
        return ans;
    }
};
// @lc code=end

