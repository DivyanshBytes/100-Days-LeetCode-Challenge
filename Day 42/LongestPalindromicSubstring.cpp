class Solution {
private:
    bool palindrome(const string& s, int start, int end){
        while (start < end){
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
    return true;
    }
public:
    string longestPalindrome(string s) {
        if (s.empty()) 
            return "";  

        int maxLen = 0;
        string longest = "";
        for (int i = 0; i < s.size(); i++){
            for (int j = i; j < s.size(); j++){
                if (palindrome(s, i, j)){
                    int len = j-i+1;
                    if (len > maxLen){
                        maxLen = len;
                        longest = s.substr(i, len);
        }   }   }   }
    return longest;
    }
};
