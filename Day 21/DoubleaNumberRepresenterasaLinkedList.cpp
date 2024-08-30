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
private:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL){
            ListNode* ahead = curr->next;
            curr->next = prev;
            prev = curr;
            curr = ahead;
        }
    return prev;
    }
public:
    ListNode* doubleIt(ListNode* head) {

        ListNode* head1 = reverse(head);
        int carry = 0;
        ListNode* curr = head1;
        ListNode* New = new ListNode(-1);
        ListNode* tail = New;

        while(curr != NULL){
            int value = 2*(curr->val) + carry;
            int digit = value % 10;
            carry = value/10;

            ListNode* temp = new ListNode(digit);
            tail->next = temp;
            tail = tail->next;
            curr = curr->next; 
        }
        if(carry > 0){
            tail->next = new ListNode(carry);
            tail = tail->next;
        }
        New = New->next;
        return reverse(New);
    }
};