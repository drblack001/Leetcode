class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minm = *min_element(nums.begin(), nums.end());
        int maxm = *max_element(nums.begin(), nums.end());

        unordered_set<int> mp(nums.begin(), nums.end());
       
        vector<int> ans;

        for(int i=minm ; i<maxm;i++){
            if(!mp.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};