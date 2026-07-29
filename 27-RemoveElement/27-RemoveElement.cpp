// Last updated: 7/29/2026, 2:28:10 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
        
    }
};