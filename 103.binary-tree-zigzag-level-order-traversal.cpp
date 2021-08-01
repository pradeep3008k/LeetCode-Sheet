/*
 * @lc app=leetcode id=103 lang=cpp
 *
 * [103] Binary Tree Zigzag Level Order Traversal
 */
#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<pair<TreeNode *,int>>qu;
        qu.push({root,0});
        //even left to right
        while(!qu.empty()){
            int size=qu.size();
            vector<int>y;
            for(int i=0;i<size;i++){
                TreeNode* node=qu.front().first;
                int height=qu.front().second;
                qu.pop();
                if(height & 1)y.insert(y.begin(),node->val);
                else y.push_back(node->val);
                if(node->left)qu.push({node->left,height+1});
                if(node->right)qu.push({node->right,height+1});
            }
            ans.push_back(y);
        }
        return ans;   
    }
};
// @lc code=end

