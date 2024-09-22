class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp ="";
        
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' ')
                temp.push_back(s[i]);
            else if(!temp.empty()){
                st.push(temp);
                temp.clear();
            }
        }
        if(!temp.empty())
            st.push(temp);
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
            if(!st.empty())
                ans += ' ';
        }
        return ans;
    }
};