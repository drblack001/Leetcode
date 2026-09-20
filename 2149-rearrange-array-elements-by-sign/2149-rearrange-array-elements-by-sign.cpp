class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int x = nums.size();
        vector<int> p;
        vector<int> n;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                n.push_back(nums[i]);
            }
            else p.push_back(nums[i]);
        }
        nums.clear();
        int i=0;
        while(i<x/2){
            nums.push_back(p[i]);
            nums.push_back(n[i]);
            i++;
        }
        return nums;
    }
};