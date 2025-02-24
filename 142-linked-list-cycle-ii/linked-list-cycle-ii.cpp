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
    ListNode *validCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;

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
        ListNode* slow=head;
        ListNode* intersection=validCycle(head);

        if(intersection==NULL){
            return NULL;
        }
        while(slow!=intersection){
            slow=slow->next;
            intersection=intersection->next;
        }
        return slow;
    }
};