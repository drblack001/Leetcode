class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // int sum =0;
        // int i=0;
        // int count=0;
        // int j=0;
        // while(j<nums.size()){
        //     sum+=nums[j];
        //     while(sum>goal){
        //         sum-=nums[i];
        //         i++;
        //     }
        //     count += (j-i+1);
        //     j++;
        // }
        // return count;

        unordered_map<int , int> mp;
        mp[0]=1;
        int currsum = 0;
        int count=0;

        for(int num :nums){
            currsum+=num;
            if(mp.find(currsum-goal)!=mp.end()){
                count+=mp[currsum-goal];
            }
            mp[currsum]++;
        }
        return count;
    }
};