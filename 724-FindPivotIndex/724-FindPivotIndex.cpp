// Last updated: 7/29/2026, 2:26:50 PM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += nums[i];  
        }

        int sumleft = 0;
        for (int i = 0; i < n; i++) {
            int sumright = total - sumleft - nums[i];
            
            if (sumleft == sumright)
                return i; 

            sumleft += nums[i]; 
        }

        return -1; 
    }
};
