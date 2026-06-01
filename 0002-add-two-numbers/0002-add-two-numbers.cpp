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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode();
        ListNode* temp=head;
        int carry=0;
        while(l1!=NULL || l2!=NULL||carry){
            int n=0;
            if(l1!=NULL) {
                n+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL) {
                n+=l2->val;
                l2=l2->next;
            }
            n+=carry;
            carry=n/10;
            ListNode* newNode= new ListNode(n%10);
            temp->next=newNode;
            temp=temp->next;            
           
        }
        return head->next;
    }
};