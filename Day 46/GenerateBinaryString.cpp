class Solution {
private:
    void process(int prev, int &n, string curr, vector<string> &ans){
        if(curr.length() == n){
            ans.push_back(curr);
            return;
        }
        if(prev == -1 || prev == 1){
            curr.push_back('0');
            process(0, n, curr, ans);
            curr.pop_back();
        }
        curr.push_back('1');
        process(1, n, curr, ans);
        curr.pop_back();
    }
public:
    vector<string> validStrings(int n) {
        vector<string> ans;
        string curr = "";
        int prev = -1;
        process(prev, n, curr, ans);
        return ans;
    }
};