class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        unordered_map<int , int> mp;
        for(int i=0;i<target.size();i++){
            mp[target[i]]=i;
        }
        for(int i=1;i<=target.back();i++){
            if(mp.find(i)!=mp.end()){
                ans.push_back("Push");
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;

    }
};