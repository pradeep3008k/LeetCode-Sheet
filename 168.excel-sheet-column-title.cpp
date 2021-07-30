/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        while(n){
            int curr=n%26;
            n=n/26;
            if(curr==0){
                ans.insert(ans.begin(),'Z');
                n--;
            }
            else{
                ans.insert(ans.begin(),(char)(curr+64));
            }
        }
        return ans;
    }
};
// @lc code=end

