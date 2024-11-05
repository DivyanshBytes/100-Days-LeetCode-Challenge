class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int curr = s[0];
        int count = 0;
        int changes = 0;

        for(int i=0; i<n; i++){
            if(s[i] == curr){
                count++;
                continue;
            }
            if(count % 2 == 0)
                count = 1;
            else{
                changes++;
                count = 0;
            }
            curr = s[i];
        }
        return changes;
    }
};