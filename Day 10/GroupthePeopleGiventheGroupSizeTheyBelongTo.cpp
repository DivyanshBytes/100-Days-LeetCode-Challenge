class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        vector<vector<int>> ans;
        vector<vector<int>> vec(n+1);

        for(int i=0; i<n; i++){
            int L = groupSizes[i];
            vec[L].push_back(i);
            if(vec[L].size() == L){
                ans.push_back(vec[L]);
                vec[L] = {};
            }
        }
    return ans;
    }
};