class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();

        if(n <= 2) return n;

        int left = 0;
        int maxm = 2;

        for(int right = 0; right < n; right++) {

            int newLeft = left;

            for(int k = left; k < right; k++) {
                if(__gcd(nums[k], nums[right]) != 1) {
                    newLeft = max(newLeft, k + 1);
                }
            }

            left = newLeft;

            maxm = max(maxm, right - left + 1);
        }

        return maxm;
    }
};