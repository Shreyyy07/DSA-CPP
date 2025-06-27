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
ListNode* mid(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

ListNode* reverse(ListNode* head){

    ListNode* curr=head;
    ListNode* prev=NULL;

        while(curr!=NULL){
            ListNode* front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
}

    bool isPalindrome(ListNode* head) {

        ListNode* middle=mid(head);

        ListNode* curr=middle->next;
        middle->next=reverse(curr);

        ListNode* head1=head;
        ListNode* head2=middle->next;

        while(head2!=NULL){
        if(head1->val==head2->val){
            head1=head1->next;
            head2=head2->next;
        }
        else{
        return false;
        }
        }
        // curr=middle->next;
        middle->next=reverse(curr);
        return true;
        

    }
};