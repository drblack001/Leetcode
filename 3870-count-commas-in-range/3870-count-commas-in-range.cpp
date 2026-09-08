class Solution {
public:
    int countCommas(int n) {
        int ans = 0;

        for (long long power = 1000; power <= n; power *= 1000) {
            ans += n - power + 1;
        }

        return ans;
    }
};