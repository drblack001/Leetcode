class Solution {
public:
    string calc(string s, int k) {
        int i = 0;
        string ans = "";

        while (i < s.size()) {
            int temp = 0;
            int j = 0;

            while (i < s.size() && j < k) {
                temp += (s[i] - '0');
                i++;
                j++;
            }

            ans += to_string(temp);
        }

        return ans;
    }

    string digitSum(string s, int k) {
        while (s.size() > k) {
            s = calc(s, k);
        }

        return s;
    }
};