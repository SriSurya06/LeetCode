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
    ListNode* rev(ListNode* head){
        ListNode* temp1=nullptr;
        ListNode* temp2=head;
        ListNode* temp=nullptr;
        while(temp2!=nullptr){
            temp=temp2->next;
            temp2->next=temp1;
            temp1=temp2;
            temp2=temp;
        }
        return temp1;
    }
    ListNode* removeNodes(ListNode* head) {
        if(head->next==NULL) return head;
        head=rev(head);
        ListNode* temp=head;
        int maxval=head->val;
        while(temp->next!=NULL){
            if(temp->next->val<maxval){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
                maxval=temp->val;
            }
        }
        head=rev(head);
       return head;
    }
};