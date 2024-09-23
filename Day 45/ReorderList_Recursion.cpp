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
    void copy(ListNode* head, deque<int> &dq, bool flag){
        if(head == NULL)
            return;

        if(flag){
            head->val = dq.front();
            dq.pop_front();
        }
        else{
            head->val = dq.back();
            dq.pop_back();
        }
        flag = !flag;
        copy(head->next, dq, flag);
    }
public:
    void reorderList(ListNode* head) {
        deque<int> dq;
        ListNode* temp = head;
        while(temp != NULL){
            dq.push_back(temp->val);
            temp = temp->next;
        }
        bool flag = true;
        copy(head, dq, flag);
    }
};