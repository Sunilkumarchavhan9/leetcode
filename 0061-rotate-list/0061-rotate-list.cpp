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
private:
    int size(ListNode*head){
        int s = 0;
        while(head){
            s++;
            head = head->next;
        }
        return s;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0) return head;

        int s = size(head);
        k%=s;
        if(k == 0) return head;

        int go = s - k - 1;
        ListNode *temp = head;
        for(int i=0; i<go; i++){
            temp = temp->next;
        }
        ListNode *start = temp->next;
        temp->next = NULL;

        temp = start;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = head;
        return start;
    }
};