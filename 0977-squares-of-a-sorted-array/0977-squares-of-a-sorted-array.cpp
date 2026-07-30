class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> num;
        for(int i=0;i<nums.size();i++){
            num.push_back(pow(nums[i],2));
        }
        sort(num.begin(),num.end());
        return num;
    }
};