class Solution {
public:
    vector<int> calcSum(vector<int> nums){
        vector<int> ans ;
        int sum =0;
        for(auto x: nums){
            ans.push_back(sum);
            sum+=x;
        }
        return ans;
    }
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left = calcSum(nums);
        reverse(nums.begin(),nums.end());
        vector<int>right = calcSum(nums);
        reverse(right.begin(), right.end());
        for(int i =0;i<nums.size();i++){
            nums[i] = abs(left[i]-right[i]);
        }
        return nums;
    }
};