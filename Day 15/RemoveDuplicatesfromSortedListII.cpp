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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = NULL;
        ListNode* curr = head;
        while(curr != NULL){
            if(curr->next != NULL && curr->val == curr->next->val){
                int val = curr->val;
                while(curr != NULL && curr->val == val)
                    curr = curr->next;
                if(temp != NULL)
                    temp->next = curr;
                else
                    head = curr;
            }
            else{
            temp = curr;
            curr = curr->next;
            }
        }
    return head;
    }
};