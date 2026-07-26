class Solution {
public:
    string reorderSpaces(string text) {
        vector<string> s;
        int count = 0;
        string s1 = "";
        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ') {
                count++;
                if (!s1.empty()) {
                    s.push_back(s1);
                    s1 = "";
                }
            } else {
                s1 += text[i];
            }
        }
        if (!s1.empty())
            s.push_back(s1);

        string ans = "";

        if (s.size() == 1) {
            ans = s[0];
            while (count--) {
                ans += ' ';
            }
            return ans;
        }
        int spaces = count / (s.size() - 1);
        int extra_space = count % (s.size() - 1);

        for (int i = 0; i < s.size(); i++) {
            ans += s[i];

            if (i != s.size() - 1) {
                int num = spaces;
                while (num--) {
                    ans += ' ';
                }
            }
        }

        while (extra_space--) {
            ans += ' ';
        }

        return ans;
    }
};