class Solution {
private:
    int Bits(int n){
        int count = 0;
        while(n != 0){
            int bit =  n & 1;
            if(bit == 1)
                count++;
            n = n >> 1;
        }
    return count;
    }
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            int TBits = Bits(i);
            if(TBits == k)
                sum += nums[i];
        }
    return sum;
    }
};