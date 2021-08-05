/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    // TLE 
    // vector<vector<int>> merge(vector<vector<int>>& intervals) {
    //     sort(intervals.begin(),intervals.end());
    //     int n=intervals.size();
    //     int i=0;
    //     while(i<n-1){
    //         //let's check if i and i+1 can be merged or not
    //         if(intervals[i+1][0]<=intervals[i][1]){
    //             n--;
    //             intervals[i+1][0]=min(intervals[i+1][0],intervals[i][0]);
    //             intervals[i+1][1]=max(intervals[i+1][1],intervals[i][1]);
    //             intervals.erase(intervals.begin()+i);
    //         }
    //         else{
    //             i++;
    //         }
    //     }
    //     return intervals;
    // }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        int index=0;
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=ans[index][1]){
                ans[index][1]=max(intervals[i][1],ans[index][1]);
            }
            else{
                ans.push_back(intervals[i]);
                index++;
            }
        }
        return ans;
    }
};
// @lc code=end

