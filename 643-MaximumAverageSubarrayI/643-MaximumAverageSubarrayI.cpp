// Last updated: 7/29/2026, 2:26:53 PM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0;
        for(int i =0;i<k;i++){
            sum = sum +nums[i];
        }
        double maxSum = sum ;
        for(int i =k;i<nums.size();i++){
            sum = sum - nums[i-k];
            sum = sum +nums[i];
            maxSum = max(maxSum, sum);
        }
        return maxSum/k;
    }
};