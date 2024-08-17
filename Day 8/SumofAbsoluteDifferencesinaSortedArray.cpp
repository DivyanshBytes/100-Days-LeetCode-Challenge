class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int prefixSum = 0;
        int suffixSum = 0;
        
        for (int i = 0; i < n; i++) {
            suffixSum += nums[i];
        }
        for (int i = 0; i < n; i++) {
            suffixSum -= nums[i];
            ans[i] += i*nums[i] - prefixSum;
            ans[i] += suffixSum - (n-i-1)*nums[i];
            
            prefixSum += nums[i];
        }
        
        return ans;
    }
};
