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
    ListNode* rev(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;
        ListNode* none = head;
        ListNode* prev = nullptr;

        while (temp) {
            count++;

            if (count == k) {

                ListNode* t = temp->next;

                temp->next = nullptr;

                ListNode* neu = rev(none);

                if (prev == nullptr) {
                    head = neu;
                } else {
                    prev->next = neu;
                }

                none->next = t;

                prev = none;
                none = t;
                temp = t;
                count = 0;

                continue;
            }

            temp = temp->next;
        }

        return head;
    }
};