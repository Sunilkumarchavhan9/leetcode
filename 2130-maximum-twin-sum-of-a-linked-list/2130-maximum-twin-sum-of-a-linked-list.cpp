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
    int pairSum(ListNode* head) {
        int Maxsum = 0, length = 0;
        vector<int>values;
        while(head){
            length++;
            values.push_back(head->val);
            head = head->next;
        }
        for(int i=0; i<length/2; ++i){
            Maxsum = max(Maxsum, values[i] + values[length - i - 1]);
        }
        return Maxsum;
    }
};