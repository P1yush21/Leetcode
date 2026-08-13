class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tempA = list1;
        ListNode* tempC = list1->next;
        for(int i = 0; i < a-1; i++){
            tempA = tempA->next;
        }
        for(int i = 0; i < b; i++){
            tempC = tempC->next;
        }
        ListNode* tempB = list2;
        tempA->next = tempB;
        while(tempB->next!=NULL){
            tempB = tempB->next;
        }
        tempB->next = tempC;
        return list1;
    }
};