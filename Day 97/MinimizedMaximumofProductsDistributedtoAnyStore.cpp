class Solution {
private:
    bool Distribution(int x, vector<int>& quantities, int shops){
        for(int &product : quantities){
            shops -= (product + x - 1) / x;
            if(shops < 0)
                return false;
        }
        return true;
    }
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int m = quantities.size();
        int s = 1;
        int e = *max_element(begin(quantities), end(quantities));
        int ans = 0;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(Distribution(mid, quantities, n)){
                ans = mid;
                e = mid - 1;
            }
            else
                s = mid + 1;
        }
        return ans;
    }
};