/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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
    //Resurscive solution
    /*bool check(TreeNode* p, TreeNode*q){
        if(p==NULL and q==NULL)return true;
        if(p==NULL)return false;
        if(q==NULL)return false;
        if(p->val!=q->val)return false;
        return check(p->left,q->right) && check(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        TreeNode* p=root->left,*q= root->right;
        return check(p,q);
    }*/
    //Iterative solution
    bool isSymmetric(TreeNode * root){
        queue<TreeNode*>q;
        q.push(root);
        q.push(root);
        while(!q.empty()){
            TreeNode * a= q.front();q.pop();
            TreeNode * b= q.front();q.pop();
            if(a==NULL and b==NULL)continue;
            if(a==NULL)return false;
            if(b==NULL)return false;
            if(a->val!=b->val)return false;
            q.push(a->left);
            q.push(b->right);
            q.push(a->right);
            q.push(b->left);
        }
        return true;
    }
};
// @lc code=end

