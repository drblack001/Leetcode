// Last updated: 7/29/2026, 2:28:13 PM
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* newHead = head->next;  // new head after first swap
        ListNode* prev = NULL;
        ListNode* temp = head;

        while (temp != NULL && temp->next != NULL) {
            ListNode* first = temp;
            ListNode* second = temp->next;

            // swap
            first->next = second->next;
            second->next = first;

            // connect previous pair
            if (prev != NULL)
                prev->next = second;

            // move pointers
            prev = first;
            temp = first->next;
        }

        return newHead;
    }
};
