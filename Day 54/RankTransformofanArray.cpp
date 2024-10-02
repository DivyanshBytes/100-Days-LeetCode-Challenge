class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> rank;

        vector<int> temp(arr);
        sort(temp.begin(), temp.end());

        int curr = 1;
        for (int i = 0; i < temp.size(); i++) {
            if (rank.find(temp[i]) == rank.end()) {
                rank[temp[i]] = curr++;
            }
        }

        for(int i=0; i<arr.size(); i++){
            arr[i] = rank[arr[i]];
        }
    return arr;
    }
};