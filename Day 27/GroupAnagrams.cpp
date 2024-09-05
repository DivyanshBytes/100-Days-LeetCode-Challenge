class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(auto s : strs){
            string temp = s;
            sort(s.begin(), s.end());
            m[s].push_back(temp);
        }
        vector<vector<string>> ans;
        for (auto pair : m) {
            ans.push_back(pair.second);
        }
    return ans;
    }
};