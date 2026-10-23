class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totalSum = 0;

        for (int x : nums) {
            totalSum += x;
        }

        int leftSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];  
            int rightSum = totalSum - leftSum - x;

            nums[i] = abs(leftSum - rightSum);

            leftSum += x;     
        }

        return nums;
    }
};