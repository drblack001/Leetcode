class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<int, int> mp;
        for(auto X : s){
            mp[X]++;
        }
        return mp.size();
    }
};