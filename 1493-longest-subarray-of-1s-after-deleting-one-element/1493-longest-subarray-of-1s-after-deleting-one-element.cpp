class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int l = 0, r = 0;
        int count = 0;
        int maxlen = 0;

        while(r < nums.size()) {

            if(nums[r] == 0) {
                count++;
            }

            while(count > 1) {
                if(nums[l] == 0) {
                    count--;
                }
                l++;
            }

            maxlen = max(maxlen, r-l+1);

            r++;
        }

        return maxlen - 1;
    }
};