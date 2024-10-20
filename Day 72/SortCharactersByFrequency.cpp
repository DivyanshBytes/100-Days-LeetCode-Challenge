class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;

        for(char ch : s){
            mp[ch]++;
        }

        vector<pair<int, char>> vec;
        for(auto& i : mp)
            vec.push_back({i.second, i.first});
        
        sort(vec.rbegin(), vec.rend());

        string ans = "";
        for(auto& j : vec)
            ans.append(j.first, j.second);

        return ans;
    }
};