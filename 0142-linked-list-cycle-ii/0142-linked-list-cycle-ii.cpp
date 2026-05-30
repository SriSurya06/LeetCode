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
        while(har!=NULL && har->next!=NULL){
            tor=tor->next;
            har=har->next->next;
            if(har==tor){
                ListNode* temp=head;
                while(temp!=tor){
                    temp=temp->next;
                    tor=tor->next;
                }
            return temp;      
            } 
            }
        return NULL;
    }
};