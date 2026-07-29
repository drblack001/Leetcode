// Last updated: 7/29/2026, 2:26:09 PM
class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            int n = nums[i];
            int r=0;
            while(n){
                r+=n%10;
                n=n/10;
            }
            nums[i]=r;
        }
        return *min_element(nums.begin(), nums.end());
    }
};