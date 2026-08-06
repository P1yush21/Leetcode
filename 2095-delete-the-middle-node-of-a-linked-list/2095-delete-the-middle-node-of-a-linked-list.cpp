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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        return head;


        // int len = 0;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     len++;
        //     temp = temp->next;
        // }
        // temp = head;
        // if(len==1) return NULL;
        // int mid=len/2;
        // for(int i = 0; i < mid-1; i++){
        //     temp=temp->next;
        // }
        // temp->next = temp->next->next;
        // return head;
    }
};