class Solution {
private:
    int Binary(vector<int>& nums, int target, int s, int e){
        if(s>e)
            return -1;
        
        int mid = s + (e-s)/2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] > target)
            return Binary(nums, target, s, mid-1);
        else
            return Binary(nums, target, mid+1, e); 

    return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;

    return Binary(nums, target, s, e);
    }
};