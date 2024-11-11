class node {
public:
    int data;
    node *next;

    node() {
        data = -1;
        next = NULL;
    }

    node(int val) {
        data = val;
        next = NULL;
    }
};

class MyLinkedList {
public:
    node *head;
    int length;

    MyLinkedList() {
        head = NULL;
        length = 0;
    }

    int get(int index) {
        if (index >= length || index < 0) return -1;
        node *cur = head;
        for (int i = 0; i < index; i++) {
            cur = cur->next;
        }
        return cur ? cur->data : -1;
    }

    void addAtHead(int val) {
        node *new_node = new node(val);
        new_node->next = head;
        head = new_node;
        length++;
    }

    void addAtTail(int val) {
        if (head == NULL) {
            addAtHead(val);
            return;
        }
        node *cur = head;
        while (cur->next != NULL) {
            cur = cur->next;
        }
        node *new_node = new node(val);
        cur->next = new_node;
        length++;
    }

    void addAtIndex(int index, int val) {
        if (index > length || index < 0) return;
        if (index == 0) {
            addAtHead(val);
            return;
        }
        node *new_node = new node(val);
        node *cur = head;
        for (int i = 0; i < index - 1; i++) {
            cur = cur->next;
        }
        new_node->next = cur->next;
        cur->next = new_node;
        length++;
    }

    void deleteAtIndex(int index) {
        if (index >= length || index < 0) return;
        if (index == 0) {
            node *temp = head;
            head = head->next;
            delete temp;
        } else {
            node *cur = head;
            for (int i = 0; i < index - 1; i++) {
                cur = cur->next;
            }
            node *temp = cur->next;
            cur->next = cur->next->next;
            delete temp;
        }
        length--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */