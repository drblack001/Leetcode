// Last updated: 7/29/2026, 2:27:46 PM
class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

        for(char c : s) {
            if(isalnum(c)) { 
                clean.push_back(tolower(c));
            }
        }

        int left = 0, right = clean.size() - 1;
        while(left < right) {
            if(clean[left] != clean[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
