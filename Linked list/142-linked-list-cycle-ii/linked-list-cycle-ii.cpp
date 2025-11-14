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
ListNode *cycle(ListNode *head){

    if(head==NULL){
        return head;
    }
    ListNode* slow=head;
    ListNode* fast=head;

while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;

if(slow==fast){
    return slow;
}
}
return NULL;
}

    ListNode *detectCycle(ListNode *head) {

     ListNode *slow=head;
     ListNode* interaction=cycle(head);

     if(interaction==NULL){
        return NULL;
     }

     while(slow!=interaction){
        slow=slow->next;
        interaction=interaction->next;
     }
     return slow;
    }
};