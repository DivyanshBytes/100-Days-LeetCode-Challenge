class Solution {
public:
    int maxDepth(string s) {
//Approach 1: Using Stack
    stack<char> temp;
    int count=0;
    int max=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            temp.push(s[i]);
            count++;
            if(count > max)
                max = count;
        }
        else if(s[i] == ')'){
            temp.pop();
            count--;
        }
        }
    return max;
    
//Approach 2: Without using a Stack
    //     int count=0;
    //     int max=0;
    //     for(int i=0; i<s.size(); i++){
    //         if(s[i] == '('){
    //             count++;
    //             if(count > max)
    //                 max = count;
    //         }
    //         else if(s[i] == ')')
    //             count--;  
    //     }
    // return max;
    }
};