// Last updated: 7/29/2026, 2:27:02 PM
class Solution {
public:
    int thirdMax(vector<int>& nums) {
    int n = *max_element(nums.begin(), nums.end());
    if(nums.size()<3){
        return n;
    }
    sort(nums.begin(), nums.end());
    int count = 1;
    int prev = nums[nums.size()-1];

    for(int i = nums.size()-2; i >= 0; i--){
        if(nums[i] != prev){
            count++;
            prev = nums[i];
        }
        if(count == 3){
            return nums[i];
        }
        }
    return n;
    }
};