// Last updated: 7/29/2026, 2:27:45 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size();
        int a=0;
        int i=0;
        for(int i=0; i<n;i++){
            a=a^nums[i];
        }
        return a;
    }
};