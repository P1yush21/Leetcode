class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* NEXT = NULL;
        while(curr!=NULL){
            NEXT = curr->next;
            curr->next = prev;
            prev = curr;
            curr = NEXT;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        int len = 1;
        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;
        ListNode* d = NULL;
        ListNode* temp = head;
        while(temp){
            if(len==left-1) a = temp;
            if(len==left) b = temp;
            if(len==right) c = temp;
            if(len==right+1) d = temp;
            len++;
            temp = temp->next;
        }
        if(a!=NULL) a->next = NULL;
        c->next = NULL;
        c = reverse(b);
        if(a!=NULL)a->next = c;
        b->next = d;
        if(a!=NULL) return head;
        return c;
    }
};