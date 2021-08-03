/*
 * @lc app=leetcode id=116 lang=cpp
 *
 * [116] Populating Next Right Pointers in Each Node
 */
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    // O(N) space
    // Node* connect(Node* root) {
    //     queue<Node *>q;
    //     q.push(root);
    //     while(!q.empty()){
    //         int size=q.size();
    //         Node * prev=NULL;
    //         for(int i=0;i<size;i++){
    //             Node * curr=q.front();q.pop();
    //             if(prev!=NULL)prev->next=curr;
    //             if(curr->left)q.push(curr->left);
    //             if(curr->right)q.push(curr->right);
    //             prev=curr;
    //         }
    //     }
    //     return root;
    // }
    // O(1) space
    void preorder(Node ** a, Node ** b){
        (*a)->next=(*b);
        if((*a)->left and (*b)->left)preorder(&((*a)->right),&((*b)->left));
        if((*a)->left)preorder(&((*a)->left),&((*a)->right));
        if((*b)->left)preorder(&((*b)->left),&((*b)->right));
    }
    Node* connect(Node* root) {
        if(root==NULL or root->left==NULL)return root;
        preorder(&(root->left),&(root->right));
        return root;
    }
};
// @lc code=end

