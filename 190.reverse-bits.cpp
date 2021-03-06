/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(int i=0;i<32;i++,n>>=1){
            if(n & 1){
                ans|= 1<<(31-i);
            }
        }
        return ans;
    }
};
// @lc code=end

