// Last updated: 7/29/2026, 2:28:06 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= target)
                return i;  // return index where target fits or matches
        }
        return nums.size(); // if target > all elements
    }
};
