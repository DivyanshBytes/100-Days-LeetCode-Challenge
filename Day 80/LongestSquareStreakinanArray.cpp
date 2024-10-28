class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int,int> mp;
        sort(nums.begin(), nums.end());
        int maxi = 0;

        for(auto num : nums){
            int root = (int)sqrt(num);
            if(root*root == num && mp.find(root) != mp.end())
                mp[num] = mp[root] + 1;
            else
                mp[num] = 1;

            maxi = max(maxi, mp[num]);
        }
        if(maxi < 2)
            return -1;
        return maxi;
    }
};