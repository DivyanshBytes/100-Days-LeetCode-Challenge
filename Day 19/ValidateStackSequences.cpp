class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> temp;
        int n = pushed.size();
        int i=0;
        int j=0;
        while(i<n && j<n){
            temp.push(pushed[i]);
            while(!temp.empty() && j<n && temp.top() == popped[j]){
                temp.pop();
                j++;
            }
            i++;
        }
    return temp.empty();
    }
};