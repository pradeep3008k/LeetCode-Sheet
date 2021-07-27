/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // let's merge l2 list in l1
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        // if(l2->val<l1->val)swap(l1,l2);
        ListNode* l1_prev=NULL;
        ListNode* ans= (l1->val<l2->val)?l1:l2;
        while(l1!=NULL and l2!=NULL){
            if(l2->val<=l1->val){
                //if l2 is smaller than l1
                ListNode * x = l2;
                l2=l2->next;
                if(l1_prev!=NULL){
                    l1_prev->next=x;
                }
                x->next=l1;
                l1_prev=x;
            }
            else {l1_prev=l1;l1=l1->next;}
        }
        if(l2!=NULL){
            l1_prev->next=l2;
        }
        return ans;
    }
};
// @lc code=end

