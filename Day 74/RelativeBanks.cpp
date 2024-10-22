class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size());
        priority_queue<pair<int,int>> pq;

        for(int i=0; i<score.size(); i++)
            pq.push({score[i], i});

        for(int rank = 1; rank<=score.size(); rank++){
            int idx = pq.top().second;
            pq.pop();

            if(rank == 1)
                ans[idx] = "Gold Medal";
            else if(rank == 2)
                ans[idx] = "Silver Medal";
            else if(rank == 3)
                ans[idx] = "Bronze Medal";
            else
                ans[idx] = to_string(rank);
        }
        return ans;
    }
};