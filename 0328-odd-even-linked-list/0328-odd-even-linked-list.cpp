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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* a = new ListNode(100);
        ListNode* b = new ListNode(100);
        ListNode* first = a;
        ListNode* sec = b;
        ListNode* temp = head;
        int len = 0;
        while(temp!=NULL){
            if(len%2==0){
                first->next = temp;
                temp=temp->next;
                first = first->next;
            }
            else{
                sec->next = temp;
                temp=temp->next;
                sec = sec->next;
            }
            len++;
        }
        first->next = b->next;
        sec->next=NULL;
        return a->next;
    }
};