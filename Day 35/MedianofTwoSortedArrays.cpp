class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        for(int i=0; i<m; i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        int size = m+n;

        double mediun = 0;
        if(size % 2 == 0){
            mediun = (nums1[size/2-1] + nums1[(size/2)])/2.0;
        }else{
            mediun = nums1[size/2];
        }
    return mediun;
    }
};