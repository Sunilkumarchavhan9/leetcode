/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      unordered_map<Node*, Node*>map;
      Node*cur=head;
      while(cur != NULL){
        Node*copycur = new Node(cur->val);
        map[cur] = copycur;
        cur = cur->next;
      }
      cur = head;
      while(cur != NULL){
        Node*copycur = map[cur];
        copycur->next = map[cur->next];
        copycur->random = map[cur->random];
        cur = cur->next;
      }
      return map[head];
    }
};