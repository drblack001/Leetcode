class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* temp1 = head->next;

        while (temp != nullptr) {

            if (temp->val == 0) {
                temp = temp->next;

                if (temp == nullptr) {
                    temp1->next = nullptr;
                    break;
                }

                temp1->next = temp;
                temp1 = temp;
            } else {
                if (temp != temp1)
                    temp1->val += temp->val;
            }

            temp = temp->next;
        }

        return head->next;
    }
};