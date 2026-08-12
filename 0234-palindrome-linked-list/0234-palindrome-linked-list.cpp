
class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* NEXT = NULL;
        while(cur){
            NEXT = cur->next;
            cur->next = prev;
            prev = cur;
            cur = NEXT;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // int len = 0;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     len++;
        //     temp = temp->next;
        // }
        // int i = 0;
        // int j = len-1;
        // while(i<j){
        //     ListNode* left = getNodeAt(head,i);
        //     ListNode* right = getNodeAt(head,j);
        //     if(left->val!=right->val) return false;
        //     i++;
        //     j--;
        // }
        // return true;

        ListNode* c = new ListNode(10);
        ListNode* temp = head;
        ListNode* tempC = c;
        while(temp){
            ListNode* node = new ListNode(temp->val);
            tempC->next = node;
            temp = temp->next;
            tempC = tempC->next;
        }
        c=c->next;
        c=reverseList(c);
        ListNode* a = head;
        ListNode* b = c;
        while(a){
            if(a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};