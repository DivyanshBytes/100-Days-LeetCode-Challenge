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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        ListNode* temp = list1;
        ListNode* curr = list1;
        int cnt=1;
        while(cnt != a){
            temp = temp->next;
            curr = curr->next;
            cnt++;
        }
        while(a <= b){
            temp->next = temp->next->next;
            a++;
        }
        temp = temp->next;
        ListNode* temp2 = list2;
        ListNode* tail2 = list2;
        while(tail2->next != NULL){
            tail2 = tail2->next;
        }
        curr->next = temp2;
        tail2->next = temp;
    return list1;
    }
};