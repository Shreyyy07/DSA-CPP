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
ListNode* middleElement(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

ListNode* reverseList(ListNode* head){

    // ListNode* mid=middleElement(head);
    ListNode* prev=NULL;
    ListNode* curr=head;
    
    while(curr!=NULL){
        ListNode* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}
    bool isPalindrome(ListNode* head) {

        //get the middle element//
        ListNode* mid=middleElement(head);

        ListNode* temp=mid->next;
        mid->next=reverseList(temp);

        ListNode* head1=head;
        ListNode* head2=mid->next;

        while(head2!=NULL){
            if(head1->val==head2->val){
                head1=head1->next;
                head2=head2->next;
            }
            else{
                return false;
            }
        }
        temp=mid->next;
        mid->next=reverseList(temp);
        return true;
    }
};