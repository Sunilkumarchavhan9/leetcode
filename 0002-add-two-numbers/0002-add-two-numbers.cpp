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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dumhead = new ListNode(0);
        ListNode*tail = dumhead;
        int carry = 0;
        while(l1 != NULL || l2 != NULL || carry != 0){

            int dig1 = (l1 != NULL) ? l1->val : 0;
            int dig2 = (l2 != NULL) ? l2->val : 0;

            int  sum = dig1 + dig2 + carry;
            int  dig = sum % 10;

             carry = sum / 10;

            ListNode *new_node = new ListNode(dig);
            tail->next = new_node;
            tail = tail->next;

            l1 = (l1 != NULL) ? l1->next : NULL;
            l2 = (l2 != NULL) ? l2->next : NULL;
        }
        ListNode *result = dumhead->next;
        delete dumhead;
        return result;
    }
};