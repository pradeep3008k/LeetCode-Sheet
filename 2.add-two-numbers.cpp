/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        //let's add l2 into l1
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode * last_node;
        ListNode * ans=l1;
        while(l1 and l2){
            int val=l1->val+l2->val+carry;
            l1->val=val%10;
            carry=val/10;
            last_node=l1;
            l1=l1->next;
            l2=l2->next;
        }
        if(l1){
            while(carry and l1){
                l1->val=l1->val+carry;
                carry=l1->val/10;
                l1->val=l1->val%10;
                last_node=l1;
                l1=l1->next;
            }
            if(carry){
                ListNode * new_node= new ListNode(carry);
                last_node->next=new_node;
            }
        }
        if(l2){
            while(l2){
                ListNode * new_node = new ListNode();
                new_node->val=l2->val+carry;
                carry=new_node->val/10;
                new_node->val=new_node->val%10;
                last_node->next=new_node;
                last_node=last_node->next;
                l2=l2->next;
            }
            if(carry){
                ListNode * new_node= new ListNode(carry);
                last_node->next=new_node;
            }
        }
        if(carry){
            ListNode * new_node= new ListNode(carry);
            last_node->next=new_node;
        }
        return ans;
    }
};
// @lc code=end

