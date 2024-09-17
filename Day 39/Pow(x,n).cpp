class Solution {
public:
    double myPow(double x, long n) {
        if(n == 0)
            return 1;
        if(n < 0){
            x = 1/x; 
            n = -n;
        }
        double pow = myPow(x, n/2);
        if(n%2 == 0)
            return pow * pow;
        else
            return pow * pow * x;
    }
};