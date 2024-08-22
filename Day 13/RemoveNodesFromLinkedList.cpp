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
    ListNode* reverseList(ListNode* head){
        if(head->next == NULL)
            return head;
        ListNode* temp = NULL;
        ListNode* prev = head;
        while(prev != NULL){
            ListNode* curr = prev->next;
            prev->next = temp;
            temp = prev;
            prev = curr;
        }
    return temp;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        if(head->next == NULL)
            return head;
        
        ListNode* newHead = reverseList(head);
        int maxVal = newHead->val;
        ListNode* temp = NULL;
        ListNode* prev = newHead;
        ListNode* curr = newHead->next;

        while(curr != NULL){
            temp = curr->next;
            if(curr->val < maxVal)
                prev->next = temp;
            else{
                maxVal = curr->val;
                prev = curr;  
            }
        curr = temp;
        }
        newHead = reverseList(newHead);
        return newHead;
    }
};