class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<pair<int,int> >ans;

        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto X: mp){
            ans.push_back({X.second , X.first});
        }
        
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());

        vector<int> res;

        for(int i=0;i<k;i++){
            res.push_back(ans[i].second);
        }

        return res;



    }
};