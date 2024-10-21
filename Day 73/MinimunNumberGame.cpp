class Solution {
private:
    void Game(priority_queue<int, vector<int>, greater<int>> pq, vector<int> &ans){
        if(pq.empty())
            return;

        int Alice = pq.top();
        pq.pop();
        int Bob = pq.top();
        pq.pop();
        ans.push_back(Bob);
        ans.push_back(Alice);

        Game(pq, ans);
    }
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        Game(pq, ans);
        return ans;
    }
};