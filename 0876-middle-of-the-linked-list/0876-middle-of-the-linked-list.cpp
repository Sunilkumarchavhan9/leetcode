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
    ListNode* middleNode(ListNode* head) {
      ListNode * cur = head;
      int len = 0;
      while(cur != NULL){
        cur = cur->next;
        len++;
      }
      len = len/2;
      cur = head;
      while(len--){
        cur = cur->next;
      }
      return cur;
    }
};