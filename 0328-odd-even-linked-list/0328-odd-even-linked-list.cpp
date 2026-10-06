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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode * odd = head;
        ListNode* even = head->next;
        ListNode* t =odd;
        ListNode*t1=even;
        while( t->next != nullptr && t1->next !=nullptr){
            t->next = t1->next;
            t=t->next;
            t1->next=t->next;
            t1=t1->next;
        }
        t->next=even;
        return head;

    }
};