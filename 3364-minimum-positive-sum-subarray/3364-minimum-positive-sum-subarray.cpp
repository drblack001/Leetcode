class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();

        vector<long long> pref(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + nums[i];
        }

        long long ans = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            for (int len = l; len <= r && i + len <= n; len++) {
                long long sum = pref[i + len] - pref[i];

                if (sum > 0) {
                    ans = min(ans, sum);
                }
            }
        }

        return ans == LLONG_MAX ? -1 : (int)ans;
    }
};