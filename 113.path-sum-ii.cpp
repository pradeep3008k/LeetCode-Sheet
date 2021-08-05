/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
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
    void backtracking (vector<vector<int>> & ans, vector<int> & curr,TreeNode * root, int target){
        //leaf node
        if(root->left==NULL and root->right==NULL){
            curr.push_back(root->val);
            if(root->val==target)ans.push_back(curr);
            curr.pop_back();
            return;
        }
        //not leaf node
        if(root->left){
            curr.push_back(root->val);
            backtracking(ans,curr,root->left,target-root->val);
            curr.pop_back();
        }
        if(root->right){
            curr.push_back(root->val);
            backtracking(ans,curr,root->right,target-root->val);
            curr.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>curr;
        if(root==NULL)return ans;
        backtracking(ans,curr,root,targetSum);
        return ans;
    }
};
// @lc code=end

