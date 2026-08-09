class Solution {
public:
    long long solve(string &s, int i, long long num, int sign) {
        if (i == s.length() || !isdigit(s[i])) {//isdigit is a c++ function
            return num * sign;
        }
        int digit = s[i] - '0';
        if (num > INT_MAX / 10 || 
            (num == INT_MAX / 10 && digit > 7)) {

            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        return solve(s, i + 1, num * 10 + digit, sign);
    }
    int myAtoi(string s) {
                int n = s.length();
        int i = 0;
        while (i < n && s[i] == ' ')
            i++;
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }
        long long ans = solve(s, i, 0, sign);
        return (int)ans;
    }
};