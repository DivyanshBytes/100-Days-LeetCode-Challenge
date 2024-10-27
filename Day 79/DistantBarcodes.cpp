class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int, int> frequency;
        for(int i : barcodes)
            frequency[i]++;
        priority_queue<pair<int,int>> pq;
        for(auto entry : frequency)
                pq.push({entry.second, entry.first});
        
        vector<int> ans(barcodes.size());
        int index = 0;
        while(!pq.empty()){
            pair<int,int> top = pq.top();
            pq.pop();
            int freq = top.first;
            int barcode = top.second;
            for(int i=0; i<freq; i++){
                if(index >= barcodes.size())
                    index = 1;
                ans[index] = barcode;
                index += 2; 
        }    } 
        return ans;
    }
};