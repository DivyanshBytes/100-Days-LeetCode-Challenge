class Solution {
private: 
    bool isDigit(char a){
        string digits = "1234567890";
        for(int i=0; i<digits.size(); i++){
            if(a == digits[i])
                return true;
        }
    return false;
    }
public:
    string clearDigits(string s) {
        int i=0;
        string ans = "";
        while(i<s.size()){
            if(!isDigit(s[i]))
                ans += s[i];
            else
                ans.pop_back();
            i++;
        }
    return ans;
    }
};