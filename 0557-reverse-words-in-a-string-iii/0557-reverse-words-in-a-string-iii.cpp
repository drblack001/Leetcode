class Solution {
public:
    string reverseWords(string s) {

        vector<string> s1;
        vector<string> s2;

        string temp = "";

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == ' ') {
                s1.push_back(temp);
                temp = "";
            }
            else {
                temp += s[i];
            }
        }

        s1.push_back(temp);

        for(int i = 0; i < s1.size(); i++) {
            string a = s1[i];
            reverse(a.begin(), a.end());
            s2.push_back(a);
        }

        string s3 = "";

        for(int i = 0; i < s2.size(); i++) {
            s3 += s2[i];
            if(i != s2.size() - 1)
                s3 += ' ';
        }

        return s3;
    }
};