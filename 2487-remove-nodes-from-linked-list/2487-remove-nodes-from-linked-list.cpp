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

        vector<int> ans;
        ListNode* temp = reverseList(head);
        ListNode* t = temp;

        int max = temp->val;
        ans.push_back(max);

        while (temp->next != nullptr) {
            temp = temp->next;
            if (temp->val >= max) {
                max = temp->val;
                ans.push_back(max);
            }
        }

        reverse(ans.begin(), ans.end());
        temp = t;
        int n = ans.size() - 1;
        int i = 0;

        while (temp != nullptr && i <= n) {
            temp->val = ans[i];
            if (i == n) {
                temp->next = nullptr;
                break;
            }
            i++;
            temp = temp->next;
        }

        return t;
    }
};