class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int inflection = -1;
        int n = nums.size();
        for (int i = n-2; i>=0; i--) {
            if (nums[i] < nums[i+1]) {
                inflection = i;
                break;
            }
        }
        if(inflection == -1){
            sort(nums.begin(), nums.end());
            return;
        }
        else{
            for (int i=n-1; i>inflection; i--) {
                if (nums[i] > nums[inflection]) {
                    swap(nums[i], nums[inflection]);
                    break;
            }    }
        }
        sort(nums.begin() + inflection + 1, nums.end());
    }
};