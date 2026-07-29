// Last updated: 7/29/2026, 2:27:20 PM
#include <vector>
#include <algorithm> // For std::swap

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        
        int insertPos = 0;

        for (int i = 0; i < nums.size(); ++i) {
            
            if (nums[i] != 0) {
                
                swap(nums[insertPos], nums[i]);
                
                insertPos++;
            }
        }
        
    }
};