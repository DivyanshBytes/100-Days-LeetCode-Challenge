class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long int ans = 0;
        int size = nums.size();
        priority_queue<pair<int,int>, 
            vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i=0; i<size; i++)
            pq.push({nums[i], i});

        vector<int> temp(size, 1);
        while(!pq.empty()){
            pair<int,int> p = pq.top();
            pq.pop();

            if(temp[p.second]){
                ans += p.first;
                if(p.second - 1 >= 0)
                    temp[p.second - 1] = 0;
                if(p.second + 1 < size)
                    temp[p.second + 1] = 0;
            }
        }
        return ans;
    }
};