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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* start = list1;
        int count = 0;
        while (t2->next != nullptr) {
            t2 = t2->next;
        }
        while (t1 != nullptr) {
            if(count==a-1){
                start=t1;
            }
            if(count==b+1){
                break;
            }
            count++;
            t1 = t1->next;
        }
        start->next = list2;
        t2->next = t1;
        return list1;
    }
};