class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<tuple<double,int,int>> pq;

        for(int i=0; i<arr.size()-1; i++){
            for(int j=i+1; j<arr.size(); j++){
                double fraction = (double)arr[i]/arr[j];
                pq.push(make_tuple(fraction, arr[i], arr[j]));

                if (pq.size() > k)
                    pq.pop();
            }
        }

        vector<int> ans(2);
        ans[0] = get<1>(pq.top());
        ans[1] = get<2>(pq.top());
        return ans;
    }
};