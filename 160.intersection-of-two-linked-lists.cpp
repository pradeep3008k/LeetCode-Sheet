/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // sign change
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL or headB == NULL)return NULL;
        ListNode * root=headA;
        //One could be the length solution //just find the difference of lengths of both lists and increment the longer list by the same difference
        while(root){
            root->val*=-1;
            root=root->next;
        }
        while(headB){
            if(headB->val<0)break;
            headB=headB->next;
        }
        root=headA;
        while(root){
            root->val*=-1;
            root=root->next;
        }
        return headB;
    }
};
// @lc code=end

