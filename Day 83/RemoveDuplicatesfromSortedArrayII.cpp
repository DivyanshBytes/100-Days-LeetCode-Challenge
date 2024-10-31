class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        int index = 0;

        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if (mp[nums[i]] < 2) { 
                nums[index++] = nums[i];
                mp[nums[i]]++;
            }
        }
        return index;
    }
};