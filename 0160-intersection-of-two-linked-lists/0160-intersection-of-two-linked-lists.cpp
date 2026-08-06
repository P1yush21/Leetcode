/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*>v;
        ListNode* temp = headA;
        while(temp!=NULL){
            v.push_back(temp);
            temp=temp->next;
        }
        ListNode* ans = headB;
        while(ans!=NULL){
            for(int i = 0; i < v.size(); i++){
                if(ans==v[i]) return ans;
            }
            ans=ans->next;
        }
        return NULL;
    }
};