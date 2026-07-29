// Last updated: 7/29/2026, 2:27:31 PM
class Solution {
public:
    int robLinear(vector<int>& nums) {
        int prev1 = 0, prev2 = 0;

        for (int num : nums) {
            int take = num + prev2;
            int skip = prev1;

            int curr = max(take, skip);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);

        vector<int> case1(nums.begin() + 1, nums.end());

        vector<int> case2(nums.begin(), nums.end() - 1);

        return max(robLinear(case1), robLinear(case2));
    }
};