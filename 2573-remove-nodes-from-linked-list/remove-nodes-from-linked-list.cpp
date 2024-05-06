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
    ListNode* removeNodes(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=head;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        // now reassigning the values
        head=prev;
        prev=NULL;
        curr=head;

        ListNode* max=head;

        while(curr!=NULL && curr->next!=NULL){
            if(curr->next->val < max->val){
                curr->next=curr->next->next;
                // curr->next->val=NULL;
                
            }
            else{
                max=curr->next;
                curr=curr->next;
            }
        }

//reverse linked list ko sidha kr doh
         prev=NULL;
         next=NULL;
         curr=head;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }  
        return prev;
    }
};