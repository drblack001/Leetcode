class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> nums(n);

        nums[0] = 1;

        int i2 = 0;
        int i3 = 0;
        int i5 = 0;

        for (int i = 1; i < n; i++) {

            int next2 = nums[i2] * 2;
            int next3 = nums[i3] * 3;
            int next5 = nums[i5] * 5;

            int next = min(next2, min(next3, next5));

            nums[i] = next;

            if (next == next2) {
                i2++;
            }

            if (next == next3) {
                i3++;
            }

            if (next == next5) {
                i5++;
            }
        }

        return nums[n - 1];
    }
};