class Solution {
private:
    int leftSum(int n, vector<int>& nums){
        int left = 0;
        for(int i=0; i<n; i++){
            left += nums[i];
        }
    return left;
    }
    int rightSum(int n, vector<int>& nums){
        int right = 0;
        for(int i=n+1; i<nums.size(); i++){
            right += nums[i];
        }
    return right;
    }
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans(nums.size());

        for(int i=0; i<nums.size(); i++){
            int a = abs(leftSum(i, nums) - rightSum(i, nums));
            ans[i] = a;
        }
    return ans;
    }
};