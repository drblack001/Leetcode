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

        stack<int> st;
        head=reverseList(head);
        ListNode*temp = head;

        while(temp != nullptr){
            if(st.empty()) st.push(temp->val);
            else if(temp->val >= st.top()){
                st.push(temp->val);
            }
            temp=temp->next;
        }

        temp=head;

        while(!st.empty()){
            temp->val = st.top();
            st.pop();
            if(st.empty()){
                temp->next=nullptr;
            }
            temp=temp->next;
        }
        return head;

    }
};