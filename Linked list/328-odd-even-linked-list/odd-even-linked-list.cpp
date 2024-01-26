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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
    ListNode* evenHead=new ListNode(-1);
    ListNode* evenTail=evenHead;
    ListNode* oddHead=new ListNode(-1);
    ListNode* oddTail=oddHead;

    ListNode* temp=head;
    // vector<int>ans;
    // temp=ans(n);
        int i=1;
        while(temp!=NULL){
            if(i%2!=0){
                 oddTail->next=temp;
                oddTail=oddTail->next;
            }
            else{
                evenTail->next=temp;
                evenTail=evenTail->next;
            }
            temp=temp->next;
            i++;
        }

        head=oddHead->next;
        oddTail->next=evenHead->next;
        evenTail->next=NULL;
      
       delete oddHead;
        delete evenHead;

      return head;
    }
};