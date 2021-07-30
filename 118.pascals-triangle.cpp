/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>a;
        a.push_back(1);
        ans.push_back(a);
        for(int i=1;i<numRows;i++){
            //curr_length of a is i
            vector<int>b;
            b.push_back(a[0]);
            for(int j=0;j<i-1;j++){
                b.push_back(a[j]+a[j+1]);
            }
            b.push_back(a[i-1]);
            ans.push_back(b);
            a=b;
        }
        return ans;
    }
};
// @lc code=end

