class Solution {
public:

    string reverseParentheses(string s) {

        int close = s.find(')');
        if (close == string::npos)
            return s;
        int open = close - 1;

        while (s[open] != '(') {
            open--;
        }
        reverse(s.begin() + open + 1, s.begin() + close);

        s.erase(close, 1);
        s.erase(open, 1);

        return reverseParentheses(s);
    }
};