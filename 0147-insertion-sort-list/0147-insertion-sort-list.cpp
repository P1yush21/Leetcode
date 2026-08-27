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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }
        sort(v.begin(),v.end());
        ListNode* a = new ListNode(10);
        ListNode* tempA = a;
        for(int i = 0; i < v.size(); i++){
            ListNode* b = new ListNode(v[i]);
            tempA->next = b;
            tempA = tempA->next;
        }
        return a->next;
    }
};