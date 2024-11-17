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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      if(head == NULL || left == right)return head;
      
      ListNode*dumyhead = new ListNode(0);
      dumyhead->next = head;
      
      int count = 1;
      ListNode*prev = dumyhead;
      ListNode*curr = head;
      ListNode*next;
      
      ListNode*left1 = NULL;
      ListNode*right1 = NULL;
      while(curr != NULL && count <= right){
        next = curr->next;
        if(count == left){
          left1 = prev;
          right1 = curr;
        }
        if(count >= left){
          curr->next = prev;
        }
        prev = curr;
        curr = next;
        count++;
      }
      left1->next = prev;
      right1->next = curr;
      return dumyhead->next;
    }
};