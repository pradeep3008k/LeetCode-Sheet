/*
 * @lc app=leetcode id=105 lang=cpp
 *
 * [105] Construct Binary Tree from Preorder and Inorder Traversal
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
    TreeNode * fn(int left, int right, int & i,vector<int> & preorder,unordered_map<int,int> & index){
        if(left>right)return NULL;
        int val=preorder[i++];
        TreeNode * node= new TreeNode(val);
        node->left=fn(left,index[val]-1,i,preorder,index);
        node->right=fn(index[val]+1,right,i,preorder,index);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>index;
        int n=preorder.size();
        for(int i=0;i<n;i++){
            index[inorder[i]]=i;
        }
        int i=0;
        return fn(0,n-1,i,preorder,index);
    }
};
// @lc code=end

