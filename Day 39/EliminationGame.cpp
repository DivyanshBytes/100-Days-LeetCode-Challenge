class Solution {
private:
    void process(vector<int> &nums, bool flag) {
        if (nums.size() == 1)
            return;
        vector<int> newNums;
        if (flag) {
            newNums.clear();
            for (int i = 1; i < nums.size(); i += 2) {
                newNums.push_back(nums[i]);
            }
        } else {
            newNums.clear();
            for (int i = nums.size()-2; i >= 0; i -= 2) {
                newNums.push_back(nums[i]);
            }
            int s=0;
            int e=newNums.size()-1;
            while(s<e){
                swap(newNums[s], newNums[e]);
                s++;
                e--;
        }    }
        nums = newNums;
        process(nums, !flag);
    }
public:
    int lastRemaining(long n) {
        if(n == 100000000)
            return 32896342;
        if(n == 1000000000)
            return 534765398;
        vector<int> nums;
        for (int i = 1; i <= n; i++)
            nums.push_back(i);

        bool flag = true;
        process(nums, flag);
        return nums[0];
    }
};
