class Solution {
private:
    int floor(int num){
        if(num % 2 != 0)
            return num/2 + 1;
        return num/2;
    }
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;

        for(int i=0; i<piles.size(); i++)
            pq.push(piles[i]);

        while(k--){
            int maxi = pq.top();
            int Floor = floor(maxi);
            pq.pop();
            pq.push(Floor);
        }
        int stones = 0;
        while(!pq.empty()){
            int temp = pq.top();
            stones += temp;
            pq.pop();
        }
        return stones;
    }
};