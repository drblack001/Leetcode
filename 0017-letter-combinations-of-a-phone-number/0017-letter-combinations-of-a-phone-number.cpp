class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<int, vector<char>> mp;
        char x = 'a';
        for (int i = 2; i <= 9; i++) {

            mp[i].push_back(x++);
            mp[i].push_back(x++);
            mp[i].push_back(x++);

            if (i == 7 || i == 9) {
                mp[i].push_back(x++);
            }
        }
        vector<string> ans;

        if (digits.size() == 0) {
            return ans;
        }
        int num = digits[0] - '0';
        for (char ch : mp[num]) {
            string a = "";
            a += ch;
            ans.push_back(a);
        }
        for (int i = 1; i < digits.size(); i++) {

            int num = digits[i] - '0';

            vector<string> temp;

            for (string s : ans) {

                for (char ch : mp[num]) {

                    string a = s;
                    a += ch;

                    temp.push_back(a);
                }
            }

            ans = temp;
        }

        return ans;
    }
};