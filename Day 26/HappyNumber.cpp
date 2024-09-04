class Solution {
private: 
    int num(int temp){
        int n = 0;
        while(temp > 0){
            int digit = temp % 10;
            n += digit * digit; 
            temp = temp/10;
        }
    return n;
    }
public:
    bool isHappy(int n) {
        unordered_map<int,int> count;
        while(n > 1){
            if(count[n] == 1)
                return false;
            count[n] = 1;
            n = num(n);
        }
    return true;
    }
};