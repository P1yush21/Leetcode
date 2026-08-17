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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp = head;
        int len = 0;
        while(temp){
            len++;
            temp=temp->next;
        }
        temp=head;
        vector<int>v(len);
        int i = 0;
        while(temp){
            ListNode* a = temp->next;
            while(a!=NULL){
                if(a->val > temp->val){
                    v[i] = a->val;
                    break;
                }
                a=a->next;
            }
            i++;
            temp = temp->next;
        }
        return v;
    }
};