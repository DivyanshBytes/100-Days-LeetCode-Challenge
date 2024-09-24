#define MOD 1000000007

class Solution {
private:
    long long power(long long x, long long n) {
        if (n == 0)
            return 1;
        long long temp = power(x, n/2);
        temp = (temp*temp) % MOD;
        if (n%2 == 0)
            return temp;
        else
            return (x*temp) % MOD; 
    }

public:
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = (n+1)/2;

        return (power(5, even)*power(4, odd)) % MOD;
    }
};
