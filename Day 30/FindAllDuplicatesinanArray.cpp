class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i=0; i<nums.size(); i++)
            count[nums[i]]++;
        
        vector<int> ans;
        for(auto i : count){
            if(i.second > 1)
                ans.push_back(i.first);
        }
    return ans;
    }
};