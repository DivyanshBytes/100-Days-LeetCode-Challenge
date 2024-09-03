class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> temp;
        for(int i=1; i<=n; i++)
            temp.push(i);
        
        int l = temp.front();
        while(temp.size() > 1){
            for(int i=1; i<k; i++){
                temp.push(temp.front());
                temp.pop();
            }
            temp.pop();
        }
    return temp.front();
    }
};