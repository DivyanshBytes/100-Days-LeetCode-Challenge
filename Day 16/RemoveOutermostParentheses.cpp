class Solution {
public:
    string removeOuterParentheses(string s) {
//Approach 1: Using Stack
        stack<char> temp;
        string ans;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                if(!temp.empty())
                    ans.push_back(s[i]);
            temp.push(s[i]);
            }
            else if(s[i] == ')'){
                temp.pop();
                if(!temp.empty())
                    ans.push_back(s[i]);
            }
        }
    return ans;

//Approach 2: Without using Stack
    //     string ans="";
    //     int count=0;
    //     for(int i=0; i<s.size(); i++){
    //         if(s[i] == ')') 
    //             count--;
    //         if(count != 0)
    //             ans.push_back(s[i]);
    //         if(s[i] == '(')
    //             count++;
    //     }
    // return ans;
    }
};