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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* tempHead=head->next;
        ListNode* itr=tempHead;
        while(itr){
            ListNode* curr=itr;
            int data=0;
            while(curr && curr->val!=0){
                data+=curr->val;
                curr=curr->next;
            }
            itr->val=data;
            itr->next=curr->next;
            if(curr->next==nullptr) break;
            itr=itr->next;
        }
        return tempHead;
    }
};