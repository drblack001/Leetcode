// Last updated: 7/29/2026, 2:28:14 PM
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* newNode = new ListNode(0);
        ListNode* head = newNode;   

        ListNode* temp = list1;
        ListNode* temp1 = list2;

        while (temp != NULL && temp1 != NULL) {
            if (temp->val <= temp1->val) {
                newNode->next = temp;
                temp = temp->next;
            } else {
                newNode->next = temp1;
                temp1 = temp1->next;
            }
            newNode = newNode->next;
        }

        if (temp != NULL) {
            newNode->next = temp;
        } else {
            newNode->next = temp1;
        }

        return head->next;  
    }
};
