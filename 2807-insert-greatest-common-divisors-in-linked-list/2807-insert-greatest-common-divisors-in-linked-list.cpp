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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==nullptr) return head;
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=nullptr){
            int data=gcd(temp->val,temp->next->val);
            ListNode* newNode=new ListNode(data);
            ListNode* sub=temp->next;
            temp->next=newNode;
            newNode->next=sub;
            temp=sub;
        }
        return head;
    }
};