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
ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                temp->next = a;
                a=a->next;
                temp = temp->next;
            }
            else{
                temp->next = b;
                b= b->next;
                temp=temp->next;
            }
        }
        if(a==NULL){
            temp->next = b;
        }
        else{
            temp->next = a;
        }
        return c->next;
    }
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& list) {
        if(list.size()==0) return NULL;
        while(list.size()>1){
            ListNode* a = list[0];
            list.erase(list.begin());
            ListNode* b = list[0];
            list.erase(list.begin());
            ListNode* c = merge(a,b);
            list.push_back(c);
        }
        return list[0];
    }
};