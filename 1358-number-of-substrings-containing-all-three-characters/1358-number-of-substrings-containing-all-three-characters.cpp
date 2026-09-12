class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        unordered_map<char,int> mp;
        int j=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp['a']>0 && mp['b']>0 && mp['c']>0){
                mp[s[j]]--;
                j++;
            }count+=j;
        }
        return count;
    }
};