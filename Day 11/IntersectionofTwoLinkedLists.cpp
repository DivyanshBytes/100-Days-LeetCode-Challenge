class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) return NULL;
        
        ListNode* len1 = headA;
        ListNode* len2 = headB;
        
        int l1 = 0; int l2 = 0;
        while (len1) {
            len1 = len1->next;
            l1++;
        }
        while (len2) {
            len2 = len2->next;
            l2++;
        }
        while (l1 > l2) {
            headA = headA->next;
            l1--;
        }
        while (l2 > l1) {
            headB = headB->next;
            l2--;
        }
        while (headA && headB && headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }   
        return headA; 
    }
};