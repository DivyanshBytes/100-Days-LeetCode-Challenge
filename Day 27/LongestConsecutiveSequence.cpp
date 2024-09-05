class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;
        sort(nums.begin(), nums.end());
        int count = 1, maxFrequency = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) 
                continue;
            if (nums[i] == nums[i - 1] + 1) {
                count++;
            } else {
                maxFrequency = max(maxFrequency, count);
                count = 1;
            }
        }
    return max(maxFrequency, count);
    }
};
