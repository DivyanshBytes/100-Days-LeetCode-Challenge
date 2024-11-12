class Solution {
private:
    int BinarySearch(vector<vector<int>>& items, int price){
        int s = 0;
        int e = items.size()-1;
        int mid;
        int maxBeauty = 0;
        while(s <= e){
            mid = s + (e-s)/2;
            if(items[mid][0] > price)
                e = mid - 1;
            else{
                maxBeauty = max(maxBeauty, items[mid][1]);
                s = mid + 1;
        }   }
        return maxBeauty;
    }
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = items.size();
        int m = queries.size();
        vector<int> ans(m);

        sort(items.begin(), items.end());
        int Beauty = items[0][1];
        for(int i=1; i<n; i++){
            Beauty = max(Beauty, items[i][1]);
            items[i][1] = Beauty;
        }
        for(int i=0; i<m; i++){
            int price = queries[i];
            ans[i] = BinarySearch(items, price);
        }
        return ans;
    }
};