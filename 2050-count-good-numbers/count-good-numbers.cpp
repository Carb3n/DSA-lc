class Solution {
public:
    long long MOD = 1e9+7;
    long long power(long long a, long long n) {
        if(n == 0) {
            return 1;
        }
        long long half = power(a, n / 2);
        half = (half * half) % MOD;
        if(n % 2 == 0) {
            return half;
        }
        return (half * a) % MOD;
    }
    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long ans = power(5, even) * power(4, odd);
        return ans % MOD;
    }
};