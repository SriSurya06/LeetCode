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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==headB) return headA;
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        // while(temp1!=NULL){
        //     ListNode* temp2=headB;
        //     while(temp2!=NULL){
        //         if(temp2==temp1) return temp1;
        //         temp2=temp2->next;
        //     }
        //     temp1=temp1->next;
        // }
        set<ListNode*> st;
        while(temp1!=NULL){
            st.insert(temp1);
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            if(st.contains(temp2)) return temp2;
            temp2=temp2->next;
        }
        return nullptr;
    }
};