class Solution {
private:
    int ceil(int num){\
        return (num + 2) / 3;
    }
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;

        for(int i=0; i<nums.size(); i++)
            pq.push(nums[i]);

        long long score = 0;
        while(k--){
            int maxi = pq.top();
            pq.pop();
            int Ceil = ceil(maxi);
            score += maxi;
            pq.push(Ceil);
        }
        return score;
    }
};