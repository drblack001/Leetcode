class Solution {
public:
    string minWindow(string s, string t) {
        long long n = s.size(), m = t.size();
        if (n < m)return "";
        unordered_map<char, long long> mp;
        for (int i = 0; i < m; i++) {
            mp[t[i]]++;
        }

        unordered_map<char, long long> temp;

        long long i = 0, j = 0, count = 0, minlen = INT_MAX,index=-1;
        string a = "";

        while (j < n) {
            temp[s[j]]++;
            if (mp.find(s[j]) != mp.end() && temp[s[j]] == mp[s[j]]) {
                count++;
            }
            while (count == mp.size()) {
                if (j - i + 1 < minlen) {
                    minlen = j - i + 1;
                    index=i;
                }
                temp[s[i]]--;
                if (mp.find(s[i]) != mp.end() && temp[s[i]] < mp[s[i]]) {
                    count--;
                }
                i++;
            }
            j++;
        }

        if(index==-1){
            return "";
        }else return s.substr(index,minlen);
    }
};