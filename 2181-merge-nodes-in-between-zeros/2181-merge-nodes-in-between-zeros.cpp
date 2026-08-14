class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* res = new ListNode(10);
        ListNode* tempB = res;
        int sum = 0;
        while(temp){
            if(temp->val!=0) sum+= temp->val;
            else{
                if(sum!=0){
                    ListNode* tempC = new ListNode(sum);
                    tempB->next = tempC;
                    tempB = tempB->next;
                    sum = 0;
                }
            }
            temp=temp->next;
        }
        return res->next;
    }
};