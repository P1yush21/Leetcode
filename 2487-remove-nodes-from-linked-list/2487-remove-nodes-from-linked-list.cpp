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
    ListNode* removeNodes(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>suffMax(v.size());
        suffMax[v.size()-1] = v.back();
        for(int i = v.size()-2; i >= 0; i--){
            suffMax[i] = max(v[i],suffMax[i+1]);
        }
        vector<int>v1;
        for(int i = 0; i < v.size(); i++){
           if (v[i]==suffMax[i])v1.push_back(suffMax[i]);
        }
        ListNode* c = new ListNode(10);
        ListNode* tempC = c;
        for(int i = 0; i < v1.size(); i++){
           ListNode* d = new ListNode(v1[i]);
           tempC->next = d;
           tempC=tempC->next;
        }
        return c->next;
    }
};