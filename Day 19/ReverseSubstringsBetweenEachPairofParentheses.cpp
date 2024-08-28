class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> temp;
        for(int i=0; i<s.size(); i++){
            if(s[i] == ')'){
                string a = "";
                while(temp.top() != '('){
                    a.push_back(temp.top());
                    temp.pop();
                }
                temp.pop();
                for(auto i:a)
                    temp.push(i);
            }else
                temp.push(s[i]);
        }
    string a = "";
    while(!temp.empty()){
        a.push_back(temp.top());
        temp.pop();
    }
    reverse(a.begin(), a.end());
    return a;
    }
};