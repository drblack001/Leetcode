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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
    ListNode* removeNodes(ListNode* head) {

        head = reverseList(head);

        ListNode* temp = head;
        ListNode* t = head;

        int maxi = head->val;
        temp = temp->next;

        while (temp != nullptr) {

            if (temp->val >= maxi) {
                maxi = temp->val;
                t->next = temp;
                t = temp;
            }

            temp = temp->next;
        }

        t->next = nullptr;

        return reverseList(head);
    }
};