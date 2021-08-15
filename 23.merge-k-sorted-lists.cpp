/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
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
    ListNode * merge_two_lists(ListNode * a, ListNode * b){
        if(a==NULL)return b;
        if(b==NULL)return a;
        //now we gonna merge b into a
        ListNode * ans= (a->val<b->val)?a:b;
        ListNode *a_prev=NULL;
        while(a and b){
            if(a->val<b->val){
                a_prev=a;
                a=a->next;
            }
            else{
                ListNode * curr=b;
                b=b->next;
                if(a_prev!=NULL)a_prev->next=curr;
                curr->next=a;
                a_prev=curr;
            }
        }
        if(b)a_prev->next=b;
        return ans;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)return NULL;
        ListNode * ans=lists[0];
        for(int i=1;i<n;i++){
            ans=merge_two_lists(ans,lists[i]);
        }
        return ans;
    }
};
// @lc code=end

