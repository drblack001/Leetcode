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
    Node* duplicate(Node* head) {
        Node* dummy = new Node(0);
        Node* temp = dummy;

        while (head) {
            Node* neu = new Node(head->val);
            neu->random = nullptr;

            temp->next = neu;
            temp = temp->next;
            head = head->next;
        }

        return dummy->next;
    }

    vector<pair<int, Node*>> pairs(Node* head) {
        vector<pair<int, Node*>> ans;
        int index = 0;

        while (head) {
            ans.push_back({index, head->random});
            head = head->next;
            index++;
        }

        return ans;
    }

    Node* copyRandomList(Node* head) {
        if (!head) return nullptr;

        Node* copy = duplicate(head);
        vector<pair<int, Node*>> ans = pairs(head);

        Node* temp1 = copy;
        int index = 0;

        while (temp1) {
            Node* randomNode = ans[index].second;

            if (randomNode == nullptr) {
                temp1->random = nullptr;
            } else {
                Node* original = head;
                Node* copied = copy;

                while (original != randomNode) {
                    original = original->next;
                    copied = copied->next;
                }

                temp1->random = copied;
            }

            temp1 = temp1->next;
            index++;
        }

        return copy;
    }
};
