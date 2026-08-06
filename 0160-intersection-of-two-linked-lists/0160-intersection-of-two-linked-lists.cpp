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
        // vector<ListNode*>v;
        // ListNode* temp = headA;
        // while(temp!=NULL){
        //     v.push_back(temp);
        //     temp=temp->next;
        // }
        // ListNode* ans = headB;
        // while(ans!=NULL){
        //     for(int i = 0; i < v.size(); i++){
        //         if(ans==v[i]) return ans;
        //     }
        //     ans=ans->next;
        // }
        // return NULL;

        int len1 = 0;
        int len2 = 0;
        ListNode* temp = headA;
        ListNode* ans = headB;
        while(temp!=NULL){
            len1++;
            temp=temp->next;
        }
        temp=headA;
        while(ans!=NULL){
            len2++;
            ans=ans->next;
        }
        ans=headB;
        if(len1 > len2){
            int len = abs(len1-len2);
            for(int i = 0; i < len; i++){
                temp=temp->next;
            }
        }
        else if(len1 < len2){
            int len = abs(len1-len2);
            for(int i = 0; i < len; i++){
                ans=ans->next;
            }
        }
        while(temp!=NULL && ans!=NULL){
            if(temp==ans) return temp;
            temp=temp->next;
            ans=ans->next;
        }
        return NULL;
    }
};