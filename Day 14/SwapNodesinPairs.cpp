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
    ListNode* swapPairs(ListNode* head) {

// Approach 1: swaping the Values of Alternative node
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* prev = head;
        ListNode* curr = head->next;

        while(curr != NULL && curr->next != NULL){
            swap(prev->val, curr->val);
            prev = curr->next;
            if(prev != NULL)
                curr = prev->next;
            else
                break;
        }
        if(curr != NULL) {
            swap(prev->val, curr->val);
        }
    return head;

// Approach 2: Changing the Links
    //     ListNode* prev = NULL;
    //     ListNode* newHead = head->next;

    //     while(head != NULL && head->next != NULL){
    //         ListNode* first = head;
    //         ListNode* second = head->next;

    //         first->next = second->next;
    //         second->next = first;

    //         if(prev != NULL)
    //             prev->next = second;
            
    //         prev = first;
    //         head = first->next;
    //     }
    // return newHead;
    }
};