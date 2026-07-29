// Last updated: 7/29/2026, 2:27:10 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> um;

        for (int i = 0; i < ransomNote.size(); i++) {
            um[ransomNote[i]]++;
        }
        for (int i = 0; i < magazine.size(); i++) {
            char ch = magazine[i];

            if (um.count(ch)) {     
                um[ch]--;           

                if (um[ch] == 0)    
                    um.erase(ch);
            }
        }
        return um.empty();
    }
};
