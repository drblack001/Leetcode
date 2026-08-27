class Solution {
public:
    string removeOuterParentheses(string s) {

        stack<char> s1;
        string a = "";

        for(int i = 0; i < s.size(); i++){

            if(s[i] == '('){

                if(!s1.empty()){
                    a += s[i];
                }

                s1.push(s[i]);
            }

            else{

                s1.pop();

                if(!s1.empty()){
                    a += s[i];
                }
            }
        }

        return a;
    }
};