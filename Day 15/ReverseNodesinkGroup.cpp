class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) 
            return head;

        ListNode* temp = head;
        int count = 0;
        while (temp != NULL && count < k) {
            temp = temp->next;
            count++;
        }
        if (count == k) {
            ListNode* prev = NULL;
            ListNode* curr = head;
            ListNode* next = NULL;
            count = 0;

            while(curr != NULL && count < k){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
            }
            if(next != NULL)
                head->next = reverseKGroup(next, k);
            return prev;
        }
    return head;
    }
};
