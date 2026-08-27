class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head;
        ListNode* NEXT = temp->next;
        ListNode* prev = NULL;
        vector<int>v;
        vector<int>ans(2);
        int i = 0, res = 0, mn = INT_MAX;
        while(NEXT){
            if(prev!=NULL && NEXT!=NULL){
                if((temp->val > prev->val && temp->val > NEXT->val) || (temp->val < prev->val && temp->val < NEXT->val)) v.push_back(i);
            }
            prev = temp;
            temp = temp->next;
            if (temp)
                NEXT = temp->next;
            i++;
        }
        if(v.empty()) return{-1,-1};
        for(int i = 1; i < v.size(); i++){
            res = v[i]-v[i-1];
            mn = min(res,mn);
        }
        ans[0] = mn;
        if (!v.empty()) {
            ans[1] = v[v.size() - 1] - v[0];
        }
        if(ans[0]==INT_MAX || ans[1]==0) return {-1,-1};
        return ans;
    }
};