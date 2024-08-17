class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singles = 0;
        int doubles = 0;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            int cnt = 0;
            while(num != 0){
                cnt++;
                num = num / 10;
            }
            if(cnt == 1)
                singles += nums[i];
            else
                doubles += nums[i];
        }
        return singles != doubles;
    }
};