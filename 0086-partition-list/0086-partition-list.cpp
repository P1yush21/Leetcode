class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* a = new ListNode(100);
        ListNode* b = new ListNode(200);
        ListNode* temp1 = a;
        ListNode* temp2 = b;
        ListNode* ans = head;
        while(ans != NULL){
            if(ans->val < x){
                temp1->next = ans;
                ans = ans->next;
                temp1 = temp1->next;
            }else{
                temp2->next = ans;
                ans = ans->next;
                temp2 = temp2->next;
            }
        }
        temp2->next = NULL;
        temp1->next = b->next;
        return a->next;
    }
};