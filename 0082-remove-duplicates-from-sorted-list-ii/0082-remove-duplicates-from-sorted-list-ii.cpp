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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* tempA = head;
        ListNode* tempB = tempA->next;
        ListNode* c = new ListNode(10);
        ListNode* tempC = c;
        while(tempB){
            if(tempA->val!=tempB->val){
                tempC->next = tempA;
                tempA = tempA->next;
                tempB = tempB->next;
                tempC = tempC->next;
            }
            else{
                while(tempB && tempB->val==tempA->val){
                    tempB=tempB->next;
                }
                tempC->next = tempB;
                tempA = tempB;
                if(tempB) tempB = tempB->next;
            }
        }
        return c->next;
    }
};