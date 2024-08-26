class Solution {
public:
    string removeStars(string s) {
        int i=0;
        string ans = "";
        while(i<s.size()){
            if(s[i] != '*')
                ans += s[i];
            else
                ans.pop_back();
            i++;
        }
    return ans;
    }
};