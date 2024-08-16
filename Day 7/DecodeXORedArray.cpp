class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> decoded;
        decoded.push_back(first);
        for(int i=0; i<encoded.size(); i++){
            int next = encoded[i] ^ decoded.back();
            decoded.push_back(next);
        }
    return decoded;
    }
};