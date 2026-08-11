class Solution {
public:
    bool isvalid(int n) {
        int a = n;
        while (n) {
            int temp = n % 10;
            if (temp == 0 || a % temp != 0) {
                return false;
            }
            n = n / 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;

        for (int i = left; i <= right; i++) {
            if (isvalid(i)) {
                nums.push_back(i);
            }
        }

        return nums;
    }
};