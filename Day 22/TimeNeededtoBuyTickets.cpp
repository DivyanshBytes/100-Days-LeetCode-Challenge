class Solution {
public:
    int timeRequiredToBuy(std::vector<int>& tickets, int k) {
        queue<int> q;
        int time = 0;
        for (int i = 0; i < tickets.size(); ++i) {
            q.push(tickets[i]);
        }
        while(true){
            int front = q.front();
            q.pop();
            time++;
            if (k == 0 && front == 1) 
                break;
            if (front > 1) 
                q.push(front - 1);
            k = (k == 0) ? q.size() - 1 : k - 1;
        }
    return time;
    }
};
