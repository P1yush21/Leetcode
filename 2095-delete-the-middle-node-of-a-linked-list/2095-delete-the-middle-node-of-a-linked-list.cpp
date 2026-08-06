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
        // ListNode* slow = head;
        // ListNode* fast = head;
        // while(fast!=NULL && fast->next!=NULL){
        //     slow = slow->next;
        //     fast = fast->next->next;
        //     if(fast->next->next->next==NULL){
        //         slow->next = slow->next->next;
        //         break;
        //     }
        // }
        // return head;
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        temp = head;
        if(len==1) return NULL;
        int mid=len/2;
        for(int i = 0; i < mid-1; i++){
            temp=temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};