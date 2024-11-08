class Solution {
private:
    int LeftSum(vector<int> nums, int index){
        int sum = 0;
        for(int i=0; i<index; i++)
            sum += nums[i];
        return sum;
    }
    int RightSum(vector<int> nums, int index){
        int sum = 0;
        for(int i=index+1; i<nums.size(); i++)
            sum += nums[i];
        return sum;
    }
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(LeftSum(nums, i) == RightSum(nums, i))
                return i;
        }
        return -1;
    }
};