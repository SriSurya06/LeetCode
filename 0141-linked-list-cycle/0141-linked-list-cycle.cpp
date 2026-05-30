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
    bool hasCycle(ListNode *head) {
        ListNode* tor=head;
        ListNode* har=tor;
        while(har!=NULL && har->next!=NULL){
            tor=tor->next;
            har=har->next->next;
            if(har==tor) return true;
        }
        return false;
    }
};