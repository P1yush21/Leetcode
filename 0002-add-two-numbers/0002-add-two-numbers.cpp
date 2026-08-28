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
        ListNode* tempA = l1;
        ListNode* tempB = l2;
        int carry = 0;
        ListNode* c = new ListNode(10);
        ListNode* tempC = c;
        while(tempA && tempB){
            int sum = tempA->val + tempB->val + carry;
            carry = sum/10;
            sum = sum%10;
            ListNode* D = new ListNode(sum);
            tempC->next = D;
            tempC=tempC->next;
            tempA=tempA->next;
            tempB=tempB->next;
        }
 
        while(tempB!=NULL){
            int sum = tempB->val + carry;
            carry = sum/10;
            sum = sum%10;
            ListNode* D = new ListNode(sum);
            tempC->next = D;
            tempC=tempC->next;
            tempB=tempB->next;
        }
        while(tempA!=NULL){
            int sum = tempA->val + carry;
            carry = sum/10;
            sum = sum%10;
            ListNode* D = new ListNode(sum);
            tempC->next = D;
            tempC=tempC->next;
            tempA=tempA->next;
        }
        if(carry>0){
            ListNode* car = new ListNode(carry);
            tempC->next=car;
        }

        return c->next;
    }
};