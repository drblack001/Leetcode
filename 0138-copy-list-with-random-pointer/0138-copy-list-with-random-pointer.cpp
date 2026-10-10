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
        if (!head) return nullptr;

        Node* curr = head;

        while (curr) {
            Node* neu = new Node(curr->val);
            neu->next = curr->next;
            curr->next = neu;
            curr = neu->next;
        }

        curr = head;

        while (curr) {
            if (curr->random) {
                curr->next->random = curr->random->next;
            }

            curr = curr->next->next;
        }

        Node* dummy = new Node(0);
        Node* copyTail = dummy;
        curr = head;

        while (curr) {
            Node* copied = curr->next;

            curr->next = copied->next;
            copyTail->next = copied;
            copyTail = copied;

            curr = curr->next;
        }

        return dummy->next;
    }
};
