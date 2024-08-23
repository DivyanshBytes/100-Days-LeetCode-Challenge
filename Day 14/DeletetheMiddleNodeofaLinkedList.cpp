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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            return NULL;
        }
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            cnt++;
        }
        int mid = cnt/2;
        cnt = 0;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(cnt != mid){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
    return head;
    }
};