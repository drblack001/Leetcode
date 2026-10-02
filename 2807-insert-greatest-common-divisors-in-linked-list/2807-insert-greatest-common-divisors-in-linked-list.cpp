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
    int gcd(int value1 , int value2){
        int minm=min(value1,value2);
        int gcd=1;
        for(int i=1;i<=minm;i++){
            if(value1%i==0 && value2%i==0){
                gcd = i;
            }
        }
        return gcd;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==nullptr)return head;
        ListNode* temp = head;
        while(temp->next != nullptr){

            int t1= temp->val;
            int t2= temp->next->val;

            int ans = gcd(t1,t2);
            
            ListNode* new1 = new ListNode(ans);

            new1->next=temp->next;
            temp->next=new1;


            temp=new1->next;

        }
        return head;
    }
};