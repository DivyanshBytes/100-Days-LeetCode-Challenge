class Solution {
private:
    int bits(int n){
        string temp = "";
        int Bits = 0;
        while(n != 0){
            int rem = n % 2;
            if(rem == 1)
                Bits++;
            temp = to_string(rem) + temp;
            n /= 2;
        }
        return Bits;
    }
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(nums);
        sort(temp.begin(), temp.end());

        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                if(bits(nums[j]) == bits(nums[j+1])){
                    if(nums[j] > nums[j+1])
                        swap(nums[j], nums[j+1]);
                }
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i] != temp[i])
                return false;
        }
        return true;
    }
};