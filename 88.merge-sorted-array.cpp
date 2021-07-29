/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        //let's merge
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 and j>=0){
            if(a[i]>b[j])a[k--]=a[i--];
            else a[k--]=b[j--];
        }
        while(j>=0){
            a[k--]=b[j--];
        }
    }
};
// @lc code=end

