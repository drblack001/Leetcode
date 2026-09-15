class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        // if(n == 1) return;
        k = k % n;
        vector<int> first(nums.begin(), nums.end() - k);
        vector<int> second(nums.begin() + n - k, nums.end());
        second.insert(second.end(), first.begin(), first.end());
        nums = second;
    }
};