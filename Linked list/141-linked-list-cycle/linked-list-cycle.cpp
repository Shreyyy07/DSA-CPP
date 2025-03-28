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
    bool hasCycle(ListNode *head) {

        if(head==NULL){
            return 0;
        }
        ListNode *slow=head;
        ListNode *fast=head->next;

        while(fast!=NULL && fast->next!=NULL){
             if(slow==fast){
              return 1;
        }
        else{
            slow=slow->next;
            fast=fast->next->next;
        }
        }
            return 0;
    }
};