class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totalSum = 0;

        for (int x : nums) {
            totalSum += x;
        }

        vector<int> ans;
        int leftSum = 0;

        for (int x : nums) {
            int rightSum = totalSum - leftSum - x;

            ans.push_back(abs(leftSum - rightSum));

            leftSum += x;
        }

        return ans;
    }
};