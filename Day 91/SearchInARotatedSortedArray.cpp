class Solution {
private:
    int BinarySearch(vector<int>& nums, int target, int a, int b){
        int s = a;
        int e = b;
        int mid = s + (e-s)/2;

        while(s <= e){
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                e = mid - 1;
            else
                s = mid + 1;

            mid = s + (e-s)/2;
        }
        return -1;
    }
    int Findpivot(vector<int>& nums){
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2; 
        while(s < e){
            if(nums[mid] >= nums[0])
                s = mid + 1;
            else
                e = mid;
            mid = s + (e-s)/2;
        }
        return s;
    }
public:
    int search(vector<int>& nums, int target) {
        int pivot = Findpivot(nums);

        if(nums[pivot] <= target && target <= nums[nums.size()-1])
            return BinarySearch(nums, target, pivot, nums.size()-1);
            
        return BinarySearch(nums, target, 0, pivot);
    }
};