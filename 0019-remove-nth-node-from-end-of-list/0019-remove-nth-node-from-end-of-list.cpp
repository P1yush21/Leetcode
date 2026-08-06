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
        // int len = 0;
        // ListNode* temp = head;
        // while(temp!= NULL){
        //     len++;
        //     temp = temp->next;
        // }
        // temp=head;
        // int rem = len-n;
        // if(rem==0) return head->next;
        // for(int i = 1; i < rem; i++){
        //     temp=temp->next;
        // }
        // temp->next = temp->next->next;
        // return head;



        ListNode* slow = head;
        ListNode* fast = head;
        // travel fast to n+1 steps
        for(int i = 1; i <= n+1; i++){
            if(fast==NULL) return head->next;
            fast = fast->next;
        }
        // move slow and fast at same pace
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};