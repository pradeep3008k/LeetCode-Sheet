/*
 * @lc app=leetcode id=104 lang=cpp
 *
 * [104] Maximum Depth of Binary Tree
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
    //Iterative SOlution
    /*int maxDepth(TreeNode* root) {
        //iterative solution check each node and mention its height
        // if(root==NULL)return 0;
        stack<pair<TreeNode *,int>>st;
        int height=0;
        while(root){
            st.push({root,++height});
            root=root->left;
        }
        int ans=0;
        while(!st.empty()){
            TreeNode* curr=st.top().first;
            int h=st.top().second;
            st.pop();
            ans=max(h,ans);
            curr=curr->right;
            while(curr){
                st.push({curr,++h});
                curr=curr->left;
            }
        }
        return ans;
    }*/
    // Resursive solution
    int maxDepth(TreeNode * root){
        if(root==NULL)return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};
// @lc code=end

