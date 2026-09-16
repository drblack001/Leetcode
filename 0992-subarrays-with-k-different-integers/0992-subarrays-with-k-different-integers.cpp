class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subarrayWithAtMostKDistinct(nums, k) - subarrayWithAtMostKDistinct(nums, k - 1);
    }

private:
    int subarrayWithAtMostKDistinct(vector<int>& nums, int k) {
        const int n = nums.size();
        vector<int> freq(n + 1);
        int unique_count = 0;
        int subarray_count = 0;
        for (int l = 0, r = 0; r < n; r++) {
            if (++freq[nums[r]] == 1) {
                unique_count++;
            }

            while (unique_count > k) {
                if (--freq[nums[l]] == 0) {
                    unique_count--;
                }
                l++;
            }

            subarray_count += (r - l + 1);
        }
        return subarray_count;
    }
};