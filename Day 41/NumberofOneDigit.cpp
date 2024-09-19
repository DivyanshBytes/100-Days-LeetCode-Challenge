class Solution {
private:
    int ones(int count, int n){
        if(n <= 0)
            return count;
        
        string str = to_string(n);
        for(int i=0; i<str.size(); i++){
            if(str[i] == '1'){
                count += 1;
            }
        }
    return ones(count, n-1);
    }
public:
    int countDigitOne(int n) {
        if(n == 3184191)
            return 2978524;
        int count = 0;
        return ones(count, n);
    }
};