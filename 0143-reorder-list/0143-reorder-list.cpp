class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* NEXT = NULL;
        while(cur){
            NEXT = cur->next;
            cur->next = prev;
            prev = cur;
            cur = NEXT;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head; 
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        } 
        // slow is at the left middle/ middle
        ListNode* b = reverseList(slow->next);
        ListNode* a = head;
        slow->next = NULL;  
        ListNode* c = new ListNode(10);
        ListNode* tempA = a;
        ListNode* tempB = b;
        ListNode* tempC = c;
        while(tempA!=NULL && tempB!=NULL){
            tempC->next = tempA;
            tempC = tempC->next;
            tempA = tempA->next;
            
            tempC->next = tempB;
            tempC = tempC->next;
            tempB = tempB->next;
        }
        tempC->next = tempA;
    }
};