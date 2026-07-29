// Last updated: 7/29/2026, 2:26:11 PM
class Solution {
public:
    int totalWaviness(int num1, int num2) {
        long long total = 0;

        for (int num = num1; num <= num2; num++) {
            string s = to_string(num);

            if (s.size() < 3) continue;

            for (int i = 1; i < s.size() - 1; i++) {
                if ((s[i] > s[i - 1] && s[i] > s[i + 1]) ||
                    (s[i] < s[i - 1] && s[i] < s[i + 1])) {
                    total++;
                }
            }
        }

        return total;
    }
};