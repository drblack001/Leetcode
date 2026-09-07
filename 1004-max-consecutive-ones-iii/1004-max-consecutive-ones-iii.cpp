class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0, j=0;
        int max1 = INT_MIN;
        int temp = k;
        while(j<nums.size()){

            if(nums[j]==0){
                temp--;
            }

            while(temp<0){
                if(nums[i]==0){
                    temp++;
                }
                i++;
            }

            max1=max(max1 , j-i+1);

            j++;

        }
        return max1;
    }
};