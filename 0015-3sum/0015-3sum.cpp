class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        set<vector<int>> st;
        
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int n = 0 - (nums[i]+nums[j]);
                if(mp.find(n)!=mp.end() && mp[n]>j){
                    vector<int> temp = {nums[i],nums[j],n};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;

    }
};