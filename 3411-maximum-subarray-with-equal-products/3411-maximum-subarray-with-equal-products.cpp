class Solution {
public:
    int maxLength(vector<int>& nums) {
        int maxm = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {

                bool valid = true;

                if (j - i + 1 >= 3) {

                    for (int k = i; k < j; k++) {
                        if (__gcd(nums[k], nums[j]) != 1) {
                            valid = false;
                            break;
                        }
                    }

                    if (__gcd(nums[i], nums[i + 1]) != 1) {
                        valid = false;
                    }
                }

                if (!valid) break;

                maxm = max(maxm, j - i + 1);
            }
        }

        return maxm;
    }
};