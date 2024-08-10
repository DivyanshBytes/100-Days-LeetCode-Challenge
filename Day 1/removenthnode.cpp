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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL || n == 0)
            return head;

        int size = 0;
        ListNode* temp = head;
        while(temp != NULL){
            size++;
            temp = temp-> next;
        }
        
        if(size == n){
            temp = head-> next;
            return temp;
        }
        
        int formula = size - n;
        int count = 1;
        temp = head;
        while(count < formula && temp != NULL){
            temp = temp-> next;
            count++;
        }
        temp->next = temp->next->next;
        return head;
    }
};