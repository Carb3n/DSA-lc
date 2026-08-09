class Solution {
public:
    double power(double x, long n) {
        // Base case: anything raised to 0 is 1
        if (n == 0) return 1.0;

        // Base case: anything raised to 1 is itself
        if (n == 1) return x;

        // If 'n' is even
        if (n % 2 == 0) {
            // Recursive call: x * x, n / 2
            return power(x * x, n / 2);
        }
        // If 'n' is odd
        // Recursive call: x * power(x, n-1)
        return x * power(x, n - 1);
    }
    double myPow(double x, int n) {
        long long N = n;

        if(N < 0) {
            x = 1/x;
            N = -N;
        }

        return power(x, N);
    }
};