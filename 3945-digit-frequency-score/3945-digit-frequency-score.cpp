class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<char,int>mp;
        string s = to_string(n);
        for(char x : s){
            mp[x]++;
        }
        int res=0;
        for(auto it :mp){
            res += ((it.first-'0') *it.second);
        }
        return res;
    }
};