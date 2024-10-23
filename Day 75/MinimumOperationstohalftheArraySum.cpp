class Solution {
public:
    int halveArray(vector<int>& nums) {
        int steps = 0;
        double maxSum = 0;

        priority_queue<double> pq;
        for(int i=0; i<nums.size(); i++){
            maxSum += nums[i];
            pq.push(nums[i]);
        }
        
        double target = maxSum / 2;
        while(maxSum > target){
            steps++;
            double top = pq.top();
            pq.pop();
            maxSum -= top;
            top /= 2;
            maxSum += top;
            pq.push(top);
        }
        return steps;
    }
};