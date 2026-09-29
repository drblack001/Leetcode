class Solution {
public:
    int reverse(int num) {
        int rev = 0;

        while (num) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }

        return rev;
    }
    
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x = reverse(nums[i]);
            nums.push_back(x);
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        return mp.size();
    }
};