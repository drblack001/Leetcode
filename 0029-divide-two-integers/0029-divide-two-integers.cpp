class Solution {
public:
    int divide(int dividend, int divisor) {
        bool negative = (dividend < 0) ^ (divisor < 0);

        long long a = dividend;
        long long b = divisor;

        if (a < 0) a = -a;
        if (b < 0) b = -b;

        long long ans = 0;

        while (a >= b) {
            long long temp = b;
            long long count = 1;

            while (a >= temp + temp) {
                temp += temp;
                count += count;
            }

            a -= temp;
            ans += count;
        }

        if (negative)
            ans = -ans;

        if (ans > INT_MAX)
            return INT_MAX;

        if (ans < INT_MIN)
            return INT_MIN;

        return (int)ans;
    }
};