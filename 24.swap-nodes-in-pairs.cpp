/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
 */

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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL or head->next==NULL)return head;
        ListNode * pt1=head; ListNode * pt2=head->next;
        ListNode * ans=pt2;
        ListNode * temp1,*temp2;
        while(pt1 and pt2){
            //need to find the next two nodes before merging these two
            temp1=pt1;temp2=pt2;
            pt1=pt2->next;
            if(pt1)pt2=pt1->next;
            else pt2=NULL;
            temp2->next=temp1;
            temp1->next=pt2;
        }
        if(pt1)temp1->next=pt1;
        return ans;
    }
};
// @lc code=end

