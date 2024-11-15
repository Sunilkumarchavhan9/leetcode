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
        unordered_set<ListNode*> map;
        ListNode*curA = headA;
        ListNode*curB = headB;
        while(curA != NULL){
            map.insert(curA);
            curA = curA->next;
        }
        while(curB != NULL){
            if(map.find(curB) != map.end()){
                return curB;
            }
            curB = curB->next;
        }
        return NULL;
    }
};