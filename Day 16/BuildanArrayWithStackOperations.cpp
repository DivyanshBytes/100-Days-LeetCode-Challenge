class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int count=1;
        int i=0;
        while(count <= n && i<target.size()){
            if(count == target[i]){
                ans.push_back("Push");
                i++;
            }else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        count++;
        }
    return ans;
    }
};