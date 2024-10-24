class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
    // Approach 1:
        // sort(nums.begin(), nums.end());
        // return nums;

    // Approach 2:
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<nums.size(); i++)
            pq.push(nums[i]);
        
        int index = 0;
        while(!pq.empty()){
            nums[index] = pq.top();
            pq.pop();
            index++;
        }
        return nums;
    }
};