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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp1 = head;
        int len = 0;
        while(temp1 != NULL){
            len++;
            temp1 = temp1->next;
        }
        temp1 = head;
        int i=1;
        while(i != k){
            temp1 = temp1->next; 
            i++;
        }
        int j=1;
        ListNode* temp2 = head;
        while(j != len-k+1){
            temp2 = temp2->next;
            j++;
        }
        swap(temp1->val, temp2->val);
    return head;
    }
};