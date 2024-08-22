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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2,-1);
        vector<int> index;
        if(head->next->next == NULL)
            return ans;

        ListNode* prev = head;
        ListNode* curr = head->next;
        int cnt = 2;
        while(curr->next != NULL){
            ListNode* ahead = curr->next;
            if(curr->val > prev->val && curr->val > ahead->val || curr->val < prev->val && curr->val < ahead->val)
                index.push_back(cnt);
            cnt++;
            prev = curr;
            curr = ahead;
        }
        int n = index.size();
        if (n < 2) 
            return ans;

        int minDist = INT_MAX;
        for (int i=1; i<n; i++) {
            minDist = min(minDist, index[i] - index[i-1]);
        }
        ans[0] = minDist;
        ans[1] = index[n - 1] - index[0];
    
    return ans;
    }
};