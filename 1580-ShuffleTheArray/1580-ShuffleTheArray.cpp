// Last updated: 7/29/2026, 2:26:38 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;

        for(int i = 0; i < n; i++){
            result.push_back(nums[i]);       
            result.push_back(nums[i + n]);   
        }

        return result;
    }
};