// Last updated: 7/29/2026, 2:27:35 PM
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        while(head != nullptr && head->val == val) {
            head = head->next;
        }

        ListNode* temp = head;

        while(temp != nullptr && temp->next != nullptr) {
            if(temp->next->val == val) {
                temp->next = temp->next->next;  
            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};
