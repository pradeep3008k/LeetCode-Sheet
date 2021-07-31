/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    // My approach
    // void setZeroes(vector<vector<int>>& matrix) {
    //     int m = matrix.size();
    //     int n = matrix[0].size();
    //     map<pair<int,int>,bool>mp;
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(matrix[i][j]==0)mp[{i,j}]=true;
    //         }
    //     }
    //     //let's make the row and cols of each and every each of these numbers zero
    //     for(auto it: mp){
    //         int i=it.first.first;
    //         int j=it.first.second;
    //         for(int k=0;k<m;k++)matrix[k][j]=0;
    //         for(int k=0;k<n;k++)matrix[i][k]=0;
    //     }
    // }
    //Alternate approach
    void setZeroes(vector<vector<int>>& matrix){
        //use first col and first row of each cell as a flag
        int m = matrix.size();
        int n = matrix[0].size();
        bool first_col=false;
        //use mat[0][0] as flag for row not column
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0)first_col=true;
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 or matrix[0][j]==0)matrix[i][j]=0;
            }
        }
        if(matrix[0][0]==0){
            for(int j=0;j<n;j++)matrix[0][j]=0;
        }
        if(first_col){
            for(int i=0;i<m;i++)matrix[i][0]=0;
        }
    }
};
// @lc code=end

