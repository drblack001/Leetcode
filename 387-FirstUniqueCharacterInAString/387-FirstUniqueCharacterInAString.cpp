// Last updated: 7/29/2026, 2:27:09 PM
class Solution {
public:
    int firstUniqChar(string s) {
        for (int i = 0; i < s.size(); i++) {
            bool unique = true;

            for (int j = 0; j < s.size(); j++) {
                if (i != j && s[i] == s[j]) {
                    unique = false;
                    break;
                }
            }

            if (unique)
                return i;
        }

        return -1;
    }
};