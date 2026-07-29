// Last updated: 7/29/2026, 2:27:39 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(), nums.end());
        int a = nums[n/2];
        return a;
    }
};