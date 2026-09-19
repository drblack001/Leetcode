class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int x=0;
        int y=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                x++;
            }
            else y++;
        }
        int i=0;
        while(x--){
            nums[i]=0;
            i++;
        }
        while(y--){
            nums[i]=1;
            i++;
        }
        return nums;
    }
};