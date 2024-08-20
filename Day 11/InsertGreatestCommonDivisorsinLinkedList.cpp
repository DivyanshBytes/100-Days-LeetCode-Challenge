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
// Approach 1 : Without Using Inbuilt gcd Function
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* num1 = head;
        ListNode* num2 = head->next;

        while(num2 != NULL){
            int GDC=1;
            if(num1->val > num2->val){
                for(int i=2; i<=num2->val; i++){
                    if(num1->val % i == 0 && num2->val % i == 0)
                        GDC = i;
                }
            }
            else if(num1->val == num2->val)
                GDC = num1->val;
            else{
                for(int i=2; i<=num1->val; i++){
                    if(num1->val % i == 0 && num2->val % i == 0)
                        GDC = i;
                }
            }
            ListNode* NEW = new ListNode(GDC);
            NEW->next = num2;
            num1->next = NEW;
            num1 = num2;
            num2 = num2->next;
        }
    return head;

//Approach 2: Using inbuilt gdc Function
    // if(head == NULL || head->next == NULL)
    //         return head;
    //     ListNode* num1 = head;
    //     ListNode* num2 = head->next;

    //     while(num2 != NULL){
    //         int GCD = gcd(num1->val, num2->val);
    //         ListNode* New = new ListNode(GCD);
    //         New->next = num2;
    //         num1->next = New;
    //         num1 = num2;
    //         num2 = num2->next;
    //     }
    // return head;
    }
};