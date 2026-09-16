class Solution {
public:
    int fxn(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int i = 0;
        long long count = 0;
        for (int j = 0; j < nums.size(); j++) {
            mp[nums[j]]++;
            while (mp.size() > k) {
                if (mp[nums[i]] == 1)
                    mp.erase(nums[i]);
                else
                    mp[nums[i]]--;
                i++;
            }
            count += j - i + 1;
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return fxn(nums, k) - fxn(nums, k - 1);
    }
};