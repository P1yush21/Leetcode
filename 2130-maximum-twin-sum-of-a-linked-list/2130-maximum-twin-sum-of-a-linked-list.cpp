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
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        ListNode* d = new ListNode(10);
        ListNode* dummy = d;
        while(temp){
            ListNode* s = new ListNode(temp->val);
            dummy->next = s;
            dummy=dummy->next;
            temp=temp->next;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* NEXT = NULL;
        while(curr){
            NEXT = curr->next;
            curr->next = prev;
            prev = curr;
            curr = NEXT;
        }

        temp = prev;
        int len = 0;
        while(temp){
            len++;
            temp=temp->next;
        }
        dummy=d->next;
        temp=prev;
        int sum = 0;
        int maxSum = INT_MIN;
        for(int i = 0; i <= len/2; i++){
            sum = dummy->val+temp->val;
            maxSum = max(maxSum, sum);
            dummy=dummy->next;
            temp=temp->next;
        }
        return maxSum;
    }
};