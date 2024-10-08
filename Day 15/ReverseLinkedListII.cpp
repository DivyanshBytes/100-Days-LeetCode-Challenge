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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next == NULL)
            return head;
        vector<int> sample;
        ListNode* temp = head;
        while(temp != NULL){
            sample.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(left < right){
            swap(sample[left-1], sample[right-1]);
            left++;
            right--;
        }
        int i=0;
        while(temp != NULL){
            temp->val = sample[i];
            i++;
            temp = temp->next;
        }
    return head;
    }
};