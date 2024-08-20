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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* node = head->next;
        ListNode* temp = node;

        while(temp != NULL){
            int sum = 0;
            while(temp->val != 0){
                sum += temp->val;
                temp = temp->next;
            }
            node->val = sum;
            node->next = temp->next;
            temp = temp->next;
            node = temp;
        }
    return head->next;
    }
};