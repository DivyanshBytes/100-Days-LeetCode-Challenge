class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,bool> temp;

        for(auto i : nums)
            temp[i] = true;

        int small = 1;
        for(int i=0; i<nums.size(); i++){
            if(temp.find(small) == temp.end())
                return small;
            small++;
        }
    return small;
    }
};