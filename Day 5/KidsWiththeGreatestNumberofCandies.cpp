class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        vector<bool> ans(candies.size(), false);
        int maxValue = *max_element(candies.begin(), candies.end()); 
        for(int i=0; i<candies.size(); i++){
            if(candies[i] + extraCandies >= maxValue)
                ans[i] = true;
        }   
    return ans;
    }
};