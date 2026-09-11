class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i=0,j=2;
        int count=0;
        while(j<nums.size()){
            
            if(nums[i]==0){

                if(nums[i]==0)nums[i]=1;
                else nums[i]=0;

                if(nums[i+1]==0)nums[i+1]=1;
                else nums[i+1]=0;

                if(nums[j]==0) nums[j]=1;
                else nums[j]=0;

                count++;

            }
            i++;j++;
        }
        for(int x: nums){
            if(x==0){
                return -1;
            }
        }
        return count;
    }
};