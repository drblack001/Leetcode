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

    ListNode* halfreversed(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }

        return reverseList(slow);
    }

    int pairSum(ListNode* head) {
        ListNode* first = head;
        ListNode* second = halfreversed(head);
        ListNode* temp = second;
        int sum = 0;
        while (second != nullptr) {
            sum = max(sum, first->val + second->val);
            first=first->next;
            second=second->next;
        }
        return sum;
    }
};