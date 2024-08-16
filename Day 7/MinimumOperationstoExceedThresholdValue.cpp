class Solution {
private:
    void Delete(vector<int>& nums, int n){
        for(int i=n; i<nums.size()-1; i++){
            nums[i] = nums[i+1];
        }
        nums.pop_back();
    }
public:
    int minOperations(vector<int>& nums, int k) {
        int operations = 0;
        for(int i=0; i<nums.size();){
            if(nums[i] < k){
                operations++;
                Delete(nums, i);
            }else{
                i++;
            }
        }
    return operations;
    }
};