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
    void reorderList(ListNode* head) {
        deque<int> dq;

        ListNode* temp = head;
        while(temp != NULL){
            dq.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;

        while(temp != NULL){
            temp->val = dq.front();
            temp = temp->next;
            dq.pop_front();
            if(temp != NULL){
                temp->val = dq.back(); 
                dq.pop_back();
                temp = temp->next;
            }
        }
    }
};