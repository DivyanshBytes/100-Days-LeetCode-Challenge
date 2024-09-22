class Solution {
private:
    void process(string s, int index, stack<string> &st, string temp){
        if (index == s.size()) {
            if (!temp.empty())
                st.push(temp); 
            return;
        }
        if(s[index] != ' ')
            temp.push_back(s[index]);
        else if(!temp.empty()){
            st.push(temp);
            temp.clear();        
        }
        process(s, index+1, st, temp);
    }

public:
    string reverseWords(string s) {
        stack<string> st;
        string temp ="";
        int index = 0;

        process(s, index, st, temp);
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