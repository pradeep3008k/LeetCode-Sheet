/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
    // Recursive solution
    // void preorder(TreeNode * root,vector<int> & ans){
    //     ans.push_back(root->val);
    //     if(root->left)preorder(root->left,ans);
    //     if(root->right)preorder(root->right,ans);
    // }
    // vector<int> preorderTraversal(TreeNode* root) {
    //     if(root==NULL)return vector<int>();
    //     vector<int>ans;
    //     preorder(root,ans);
    //     return ans;
    // }

    //Itertative solution
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)return vector<int>();
        vector<int>ans;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode * curr=st.top();st.pop();
            ans.push_back(curr->val);
            if(curr->right)st.push(curr->right);
            if(curr->left)st.push(curr->left);
        }
        return ans;
    }

};
// @lc code=end

