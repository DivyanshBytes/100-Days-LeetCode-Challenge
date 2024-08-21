/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
//Approach 1: Copying & Traversing
        ListNode* temp = node->next;
        ListNode* prev = node;
        ListNode* out = NULL;
        while(temp != NULL){
            prev->val = temp->val;
            out = prev;
            prev = temp;
            temp = temp->next;
        }
        out->next = NULL;

//Approach 2: Copying & Skiping the node
        // node->val = node->next->val;
        // node->next = node->next->next;
    }
};
