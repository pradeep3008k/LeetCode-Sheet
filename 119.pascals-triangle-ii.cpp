/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> getRow(int r) {
        vector<int>ans;
        ans.push_back(1);
        for(int i=1;i<=r;i++){
            //keep the first element as it is
            int last_element=ans[i-1];
            int prev=0;
            //let's start adding
            for(int j=1;j<i;j++){
                ans[j]=ans[j-1]+ans[j]-prev;
                prev=ans[j-1]-prev;
            }
            ans.push_back(last_element);
        }
        return ans;
    }
};
// @lc code=end

