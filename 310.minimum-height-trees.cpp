/*
 * @lc app=leetcode id=310 lang=cpp
 *
 * [310] Minimum Height Trees
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n,vector<int>());
        vector<int>degree(n,0);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            degree[edges[i][0]]++;
            degree[edges[i][1]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++)if(degree[i]==1)q.push(i);
        while(n>2){
            int size=q.size();
            n-=size;
            for(int i=0;i<size;i++){
                int a = q.front();q.pop();
                for(auto it: adj[a])if(--degree[it]==1)q.push(it);
            }
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        if(ans.size()==0)ans.push_back(0);
        return ans;
    }
};
// @lc code=end

