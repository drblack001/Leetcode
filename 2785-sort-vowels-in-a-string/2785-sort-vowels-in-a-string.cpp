class Solution {
public:
    string sortVowels(string s) {
        map<char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
                s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                mp[s[i]]++;
            }
        }

        string t = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
            s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                auto it = mp.begin();
                t += it->first;
                it->second--; 
                if (it->second == 0)mp.erase(it);
            } else {
                t += s[i];
            }
        }

        return t;
    }
};