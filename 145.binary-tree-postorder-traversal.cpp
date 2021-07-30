/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
    // void postorder(TreeNode * root,vector<int> & ans){
    //     if(root->left)postorder(root->left,ans);
    //     if(root->right)postorder(root->right,ans);
    //     ans.push_back(root->val);
    // }
    // vector<int> postorderTraversal(TreeNode* root) {
    //     if(root==NULL)return vector<int>();
    //     vector<int>ans;
    //     postorder(root,ans);
    //     return ans;
    // }

    //Iterative solution 1
    // vector<int> postorderTraversal(TreeNode* root) {
    //     if(root==NULL)return vector<int>();
    //     vector<int>ans;
    //     stack<pair<TreeNode*,bool>>st;
    //     st.push({root,false});
    //     while(!st.empty()){
    //         pair<TreeNode *,bool> curr=st.top();st.pop();
    //         if(curr.second==true){
    //             ans.push_back((curr.first)->val);
    //         }
    //         else{
    //             curr.second=true;
    //             st.push(curr);
    //             if((curr.first)->right)st.push({(curr.first)->right,false});
    //             if((curr.first)->left)st.push({(curr.first)->left,false});
    //         }
    //     }
    //     return ans;
    // }
    // Iterative Solution 2
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)return vector<int>();
        vector<int>ans;
        stack<TreeNode *>st;
        while(root){
            if(root->right)st.push(root->right);
            st.push(root);
            root=root->left;
        }
        while(!st.empty()){
            TreeNode * curr = st.top();st.pop();
            if(curr->right!=NULL and st.size() and (curr->right)==(st.top())){
                st.pop();
                st.push(curr);
                curr=curr->right;
                while(curr){
                    if(curr->right)st.push(curr->right);
                    st.push(curr);
                    curr=curr->left;
                }       
            }
            else{
                ans.push_back(curr->val);
            }

        }
        return ans;
    }
};
// @lc code=end

