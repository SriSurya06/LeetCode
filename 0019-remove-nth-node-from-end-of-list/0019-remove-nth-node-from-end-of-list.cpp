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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return nullptr;
        ListNode* slow=head;
        ListNode* fast=head;
        int k=0;
        int c=1;
        while(fast!=NULL && fast->next!=NULL){
            if(k<n){
                fast=fast->next;
                k++;
            }
            else{
                fast=fast->next;
                slow=slow->next;
            }
            c++;
        }
        if(n==c) head=head->next;
        else slow->next=slow->next->next;
        return head;
    }
};