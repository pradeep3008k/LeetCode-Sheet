/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>>col_count(9,vector<int>(9,0));
        vector<vector<int>>row_count(9,vector<int>(9,0));
        vector<vector<int>>box_count(9,vector<int>(9,0));
        unordered_map<int,int> boxnumber {
            {11,0},
            {14,1},
            {17,2},
            {41,3},
            {44,4},
            {47,5},
            {71,6},
            {74,7},
            {77,8},
        };
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int val=board[i][j]-'1';
                    col_count[j][val]++;
                    row_count[i][val]++;
                    box_count[boxnumber[(i-i%3 +1)*10+ j-j%3 + 1]][val]++;
                }
            }
        }
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(row_count[i][j]>1 or col_count[i][j]>1 or box_count[i][j]>1)return false;
            }
        }
    return true;
    }
};
// @lc code=end

