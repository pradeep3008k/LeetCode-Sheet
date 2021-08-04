/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
    vector<vector<char>>grid;
    int m;
    int n;
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};
public:
    bool canmove(int r,int c){
        if(r>=0 and r<m and c>=0 and c<n)return true;
        return false;
    }
    void dfs(int r,int c){
        grid[r][c]='2';
        for(int i=0;i<4;i++){
            int r1=r+dx[i];
            int c1=c+dy[i];
            if(canmove(r1,c1) and grid[r1][c1]=='1'){
                grid[r1][c1]='2';
                dfs(r1,c1);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        this->grid=grid;
        this->m=row;
        this->n=col;
        int total=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(this->grid[i][j]=='1'){
                    dfs(i,j);
                    total++;
                }
            }
        }
        return total;
    }
};
// @lc code=end

