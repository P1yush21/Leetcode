class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* tempA = head;
        ListNode* tempB = head;
        int n = 0;
        while(tempA){
            n++;
            tempA = tempA->next;
        }
        tempA = head;
        for(int i = 0; i < k-1; i++){
            tempA=tempA->next;
        }
        for(int i = 0; i < n-k; i++){
            tempB = tempB->next;
        }
        swap(tempA->val,tempB->val);
        return head;
    }
};