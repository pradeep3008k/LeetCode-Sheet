/*
 * @lc app=leetcode id=132 lang=cpp
 *
 * [132] Palindrome Partitioning II
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    int minCut(string s) {
        int size=s.size();
        bool dp[size][size];
        memset(dp,false,sizeof(dp));
        int min_cuts[size+1];
        for(int i=0;i<=size;i++)min_cuts[i]=i-1;
        for(int j=1;j<size;j++){
            for(int i=j;i>=0;i--){
                if(s[i]==s[j] and (j-i<=2 or dp[i+1][j-1])){
                    dp[i][j]=true;
                    min_cuts[j+1] = min(min_cuts[j+1],min_cuts[i]+1);
                }
            }
        }
        return min_cuts[size];    
    }
};
// @lc code=end

