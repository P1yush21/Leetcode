class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = 0;
        ListNode* temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        int rem = len%k;
        int size = len/k;
        temp = head;
        vector<ListNode*>v;
        while(temp){
            ListNode* c = new ListNode(100);
            ListNode* tempC = c;
            int s = size;
            if(rem>0) s++;
            rem--;
            for(int i = 1; i <= s; i++){
                tempC->next = temp;
                temp = temp->next;
                tempC = tempC->next;
            }
            tempC->next = NULL;
            v.push_back(c->next);
        }
        if(v.size()<k){
            int extra = k-v.size();
            for(int i = 0; i < extra; i++){
                v.push_back({});
            }
        }
        return v;
    }
};