/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
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
 *     TreeNode() : val(0), l(vector<int>()),left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), l(vector<int>()),left(nullptr), right(nullptr) {}
 *     TreeNode(int x, l(vector<int>()),TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    /* first solution
    void fn(TreeNode* root, int targetSum, map<TreeNode*,vector<int>> & mp){
        if(root==NULL)return ;
        if(root->left==NULL and root->right==NULL){mp[root].push_back(root->val);return;}
        if(root->left){
            fn(root->left,targetSum,mp);
            for(auto it: mp[root->left]){
                int k=root->val+it;
                mp[root].push_back(k);
            }
        }
        if(root->right){
            fn(root->right,targetSum,mp);
            for(auto it: mp[root->right]){
                int k=root->val+it;
                mp[root].push_back(k);
            }
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        map<TreeNode* , vector<int>> mp;
        fn(root,targetSum,mp);
        for(auto it: mp[root]){
            if(it==targetSum)return true;
        }
        return false;
    }*/
    // One solution from discussion
    bool hasPathSum(TreeNode * root, int targetSum){
        if(root==NULL)return false;
        if(root->val==targetSum and root->left==NULL and root->right==NULL)return true;
        return hasPathSum(root->left,targetSum-root->val) or hasPathSum(root->right,targetSum-root->val);
    }
};
// @lc code=end

