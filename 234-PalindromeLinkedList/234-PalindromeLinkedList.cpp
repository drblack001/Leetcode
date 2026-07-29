// Last updated: 7/29/2026, 2:27:26 PM
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
    bool isPalindrome(ListNode* head) {
        vector<int> a;
        ListNode* temp=head;
        while(temp!=NULL){
            a.push_back(temp->val);
            temp=temp->next;
        }
        vector<int> b=a ;
        reverse(b.begin(), b.end());
        return a==b;
    }
};