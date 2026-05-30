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
    ListNode *detectCycle(ListNode *head) {
        ListNode* tor=head;
        ListNode* har=tor;
        ListNode* temp=tor;
        while(har!=NULL && har->next!=NULL){
            tor=tor->next;
            har=har->next->next;
            if(har==tor && har!=temp){
                temp=temp->next;
            } 
            if(tor==temp) return temp;      
            }
        return NULL;
    }
};