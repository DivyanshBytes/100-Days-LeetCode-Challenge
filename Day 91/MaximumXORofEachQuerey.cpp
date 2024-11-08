class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int Xor = 0;
        for(int i=0; i<n; i++)
            Xor ^= nums[i];

        int maxK = pow(2, maximumBit) - 1;
        vector<int> ans;

        for(int i=n-1; i>=0; i--){
            int temp = Xor ^ maxK;
            ans.push_back(temp);
            Xor ^= nums[i];
        }
        return ans;
    }
};