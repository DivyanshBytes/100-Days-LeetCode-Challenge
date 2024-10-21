class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            if (nums[i] > 0)
                pq.push(nums[i]);
        }    
        while(!pq.empty()){
            int small = pq.top();
            pq.pop();
            count++;
            
            for (int i=0; i<nums.size(); i++) {
                if (nums[i] > 0)
                    nums[i] -= small;
            }
            priority_queue<int, vector<int>, greater<int>> temp;
            for(int i=0; i<nums.size(); i++){
                if (nums[i] > 0)
                    temp.push(nums[i]);
            }pq = temp;   
        }
        return count;
    }
};