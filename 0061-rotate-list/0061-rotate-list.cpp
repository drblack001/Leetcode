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
    ListNode* rotate(ListNode* head) {
        ListNode* t1 = head;
        while (t1->next->next != nullptr) {
            t1 = t1->next;
        }
        ListNode* temp = t1->next;
        t1->next = nullptr;
        temp->next = head;
        head = temp;
        return head;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next)
            return head;

        int n = 0;
        ListNode* temp = head;

        while (temp) {
            n++;
            temp = temp->next;
        }

        k = k % n;

        while (k--) {
            head = rotate(head);
        }

        return head;
    }
};