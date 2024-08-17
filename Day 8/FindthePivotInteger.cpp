class Solution {
public:
    int pivotInteger(int n) {
        for(int i=1; i<=n; i++){
            int left = 0;
            int right = 0;
            for(int j=1; j<=i; j++)
                left += j;
            for(int l=i; l<=n; l++)
                right += l;
            if(left == right)
                return i;
        }
    return -1;
    }
};