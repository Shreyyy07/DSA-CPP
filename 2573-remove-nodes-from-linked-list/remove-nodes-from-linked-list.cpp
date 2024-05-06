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
ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=head;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
      return prev;
}

    ListNode* removeNodes(ListNode* head) {
        ListNode* reverseHead=reverseList(head);

        ListNode* curr=reverseHead;
        int max=INT_MIN;
        ListNode* prev=NULL;

        while(curr!=NULL){
            if(curr->val < max){
                prev->next=curr->next;
            }
            else{
                max=curr->val;
                prev = curr;
            }
             curr=curr->next;
        }
        return reverseList(reverseHead);
    }
};