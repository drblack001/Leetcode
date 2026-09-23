class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int total =0;
        for(int n:nums){
            total+=n;
        }
        int target = total-x;
        if(target==0) return nums.size();

        int count=0;
        int i=0;
        int j = 0;
        int maxlen = -1;

        while(j<nums.size()){
            count+=nums[j];

            while(i<=j && count>target){
                count-=nums[i];
                i++;
            }
            if(count==target) maxlen=max(maxlen,j-i+1);

            j++;
        }
        
        if(maxlen==-1)return -1;
        return nums.size()-maxlen;
    }
};