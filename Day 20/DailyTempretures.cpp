class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>temp;
        vector<int> ans(temperatures.size(), 0);
        for(int i=temperatures.size()-1; i>=0; i--){
            while(!temp.empty() && temperatures[i] >= temperatures[temp.top()])
                temp.pop();
            if(!temp.empty())
                ans[i] = temp.top() - i;
        temp.push(i);
        }
    return ans;
    }
};