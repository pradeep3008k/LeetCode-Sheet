/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};

class Solution {
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    int m,n;
    vector<vector<char>>board;
    string word;
public:
    bool backtracking(int size,int row,int col, int current_index){
        if(size==1 and board[row][col]==word[current_index])return true;
        else{
            board[row][col]='*';
            current_index++;
            size--;
            for(int k=0;k<4;k++){
                int r1=row+dx[k];
                int c1=col+dy[k];
                if(r1>=0 and r1<m and c1>=0 and c1<n and board[r1][c1]==word[current_index]){
                    if(backtracking(size,r1,c1,current_index))return true;
                }
            }
            current_index--;
            size++;
            board[row][col]=word[current_index];
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        this->board=board;
        this->m=board.size();
        this->n=board[0].size();
        this->word=word;
        int size=word.length();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]){
                    if(backtracking(size,i,j,0))return true;
                }
            }
        }
        return false;
    }
};
// @lc code=end

