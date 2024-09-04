class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int ans = 0;
        for(int i=0; i<s.size(); i++){
            if(i + 1 < s.size() && s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X'))
                ans -= m[s[i]];
            else if (i + 1 < s.size() && s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C'))
                ans -= m[s[i]];
            else if (i + 1 < s.size() && s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M'))
                ans -= m[s[i]];
            else
                ans += m[s[i]];
        }
    return ans;
    }
};