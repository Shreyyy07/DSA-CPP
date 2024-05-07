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

  ListNode* doubleIt(ListNode* head) {

    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* next=NULL;
    int carry=0;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
        head=prev;

        curr=head;

     while(curr!=NULL){
            int digit=curr->val;
            int product=2*digit+carry;

           curr->val=product%10;
            carry=product/10;

            if(carry && curr->next==NULL){
                ListNode* newNode=new ListNode(carry);
                 curr->next=newNode;
                 break;
            }
            curr=curr->next;
           
        }

        prev=NULL;
       curr=head;
       next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
 }
    return prev;
        
    }
};