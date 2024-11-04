class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int count = 1;
        char ch = word[0];

        for(int i=1; i<word.size(); i++){
            if(ch == word[i] && count < 9)
                count++;
            else{
                ans += to_string(count);
                ans += ch;
                ch = word[i];
                count = 1;
            }
        }
        ans += to_string(count);
        ans += ch;
        return ans;
    }
};