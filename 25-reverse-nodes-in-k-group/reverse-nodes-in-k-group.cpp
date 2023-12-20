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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cursor = head;
       for(int i = 0; i < k; i++){
            if(cursor == NULL){ 
            return head;
            }
            cursor = cursor->next;
        }
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        int cnt=0;

        while(curr!=NULL &&  cnt<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }

        // while(next!=NULL){
            head->next=reverseKGroup(next,k);
        // }

        return prev;
    }
};