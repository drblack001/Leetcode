class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        long result = 0; 
        bool isNegative = false;
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') isNegative = true;
            i++;
        }
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            result = result * 10 + digit;
            if (!isNegative && result > INT_MAX) return INT_MAX;
            if (isNegative && -result < INT_MIN) return INT_MIN;
            i++;
        }
        return isNegative ? -result : result;
    }
};
