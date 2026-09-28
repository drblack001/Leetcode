class Solution {
public:
    int maxDepth(string s) {
        stack <char> st;
        int maxm=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
            }
            else if(s[i]==')'){
                maxm= max (maxm,(int)st.size());
                st.pop();
            }
        }
        return maxm;
    }
};