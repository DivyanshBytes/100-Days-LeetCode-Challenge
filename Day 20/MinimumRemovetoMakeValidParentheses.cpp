class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> temp;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(')
                temp.push(i);
            else if(s[i] == ')'){
                if(temp.empty() && s[temp.top()] == '(')
                    temp.pop();
                else
                    temp.push(i);
            }
        }
        while(!temp.empty()){
            s.erase(temp.top(), 1);
            temp.pop();
        }
    return s;
    }
};