class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> v;
        if(head==NULL || head->next==NULL || head->next->next==NULL) return {-1,-1};
        ListNode* prev = head;
        ListNode* temp = head->next;
        ListNode* front = temp->next;
        int i = 2;
        while(front){
            if((temp->val < prev->val && temp->val < front->val )||(temp->val > prev->val && temp->val > front->val )) v.push_back(i);
            front=front->next;
            temp=temp->next;
            prev=prev->next;
            i++;
        }
        int n = v.size();
        if(n<2) return {-1,-1};
        int mn = INT_MAX , mx = INT_MIN;
        for(int i = 1; i < n ; i++){
            mn = min(mn, v[i]-v[i-1]);
        }
        mx = v[n-1]-v[0];
        return {mn,mx};
    }
};
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