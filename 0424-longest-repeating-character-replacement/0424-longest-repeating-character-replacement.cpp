class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char,int> mp;

        int maxlen=0;
        int count =0;
        int j=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            count = max(count,mp[s[i]]);

            if((i-j+1)-count >k){
                mp[s[j]]--;
                j++;
            }
            maxlen=max(maxlen, i-j+1);
            
        }
        return maxlen;
    }
};