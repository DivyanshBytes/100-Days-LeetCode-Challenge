class Solution {
private:
    void find(vector<int>& nums, vector<int> output, int index, vector<vector<int>> &ans){
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }

        find(nums, output, index+1, ans);

        int num = nums[index];
        output.push_back(num);
        find(nums, output, index+1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        find(nums, output, index, ans);
        return ans;
    }
};