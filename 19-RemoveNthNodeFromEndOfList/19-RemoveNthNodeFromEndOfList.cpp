// Last updated: 7/29/2026, 2:28:17 PM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return head;

        int count = 0;
        ListNode* temp = head;

       
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        
        if (n == count) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        
        temp = head;
        int pos = count - n - 1;
        for (int i = 0; i <= pos; i++) {
            if (i == pos) break;
            temp = temp->next;
        }

        
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;

        return head;
    }
};
