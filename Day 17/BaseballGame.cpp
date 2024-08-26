class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        stack<int> temp;
        for (int i = 0; i < operations.size(); i++) {
            if(operations[i] == "C")
                temp.pop();
            else if(operations[i] == "D")
                temp.push(2 * temp.top());
            else if(operations[i] == "+"){
                int top1 = temp.top(); temp.pop();
                int top2 = temp.top();
                temp.push(top1);
                temp.push(top1 + top2);
            }else
                temp.push(stoi(operations[i]));
        }

        while (!temp.empty()) {
            sum += temp.top();
            temp.pop();
        }
        return sum;
    }
};
