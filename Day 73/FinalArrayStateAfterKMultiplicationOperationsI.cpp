class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>, 
        vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> ans(nums.size());

        for(int i=0; i<nums.size(); i++){
            pq.push({nums[i], i});
        }
        
        while(k--){
            pair<int,int> p = pq.top();
            pq.pop();
            int value = p.first;
            int index = p.second;
            pq.push({value*multiplier, index});
        }
        while(!pq.empty()) {
            pair<int,int> p = pq.top();
            pq.pop();
            int value = p.first;
            int index = p.second;
            ans[index] = value;
        }
        return ans;
    }
};