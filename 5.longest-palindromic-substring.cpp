/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    // my approach
    string longestPalindrome(string s) {
        int n=s.size();
        int max_length=0,global_start=0,global_end=0;
        string ans="";
        for(int i=0;i<n;i++){
            int start=i-1,end=i+1;
            while(start>=0 and end<n){
                if(s[start]==s[end]){
                    start--;
                    end++;
                }
                else break;
            }
            if(end-start-1>max_length){
                max_length=end-start-1;
                global_end=end-1;
                global_start=start+1;
            }
            int start=i,end=i+1;
            while(start>=0 and end<n){
                if(s[start]==s[end]){
                    start--;
                    end++;
                }
                else break;
            }
            if(end-start-1>max_length){
                max_length=end-start-1;
                global_end=end-1;
                global_start=start+1;
            }
        }
        for(int k=global_start;k<=global_end;k++)ans+=s[k];
        return ans;
    }
    //solution approach
    // string longestPalindrome(string s) {
    //     int n=s.size();
    //     bool table[n][n];
    //     memset(table,0,sizeof(table));
    //     //now fill all the strings with length 1 and 2.
    //     int start=0,maxlength=1;
    //     for(int i=0;i<n;i++)table[i][i]=true;
    //     for(int i=0;i<n-1;i++){
    //         if(s[i]==s[i+1]){
    //             table[i][i+1]=true;
    //             start=i;
    //             maxlength=2;
    //         }
    //     }
    //     for(int k=3;k<=n;k++){
    //         for(int i=0;i<n-k+1;i++){
    //             int j=i+k-1;
    //             if(table[i+1][j-1] and s[i]==s[j]){
    //                 table[i][j]=true;
    //                 if(k>maxlength){
    //                     start=i;
    //                     maxlength=k;
    //                 }
    //             }
    //         }
    //     }
    //     string ans="";
    //     for(int i=start;i<start+maxlength;i++)ans+=s[i];
    //     return ans;
    // }
};
// @lc code=end

