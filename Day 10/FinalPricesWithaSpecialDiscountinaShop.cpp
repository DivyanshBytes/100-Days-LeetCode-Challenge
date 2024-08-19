class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            int k = prices[i];
            for(int j=i+1; j<n; j++){
                if(prices[j] <= k){
                    k -= prices[j];
                    break;
                }
            }
        ans[i] = k;
        }
    return ans;
    }
};