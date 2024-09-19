class Solution {
private: 
    bool lowerCase(int i, int j, string &s){
        if(i >= j)
            return true;
    
        while (i < j && !isalnum(s[i])) i++;
        while (i < j && !isalnum(s[j])) j--;
        
        if(tolower(s[i]) != tolower(s[j]))
            return false;

    return lowerCase(i+1, j-1, s);;
    }
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
    return lowerCase(i,j,s);
    }
};