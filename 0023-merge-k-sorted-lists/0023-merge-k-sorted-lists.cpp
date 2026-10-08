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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        vector<int> nums;

        for (auto x : lists) {
            while (x) {
                nums.push_back(x->val);
                x = x->next;
            }
        }
        if (nums.empty())
            return NULL;

        sort(nums.begin(), nums.end());

        ListNode* head = new ListNode(nums[0]);
        ListNode* temp = head;

        for (int i = 1; i < nums.size(); i++) {
            temp->next = new ListNode(nums[i]);
            temp = temp->next;
        }

        return head;
    }
};