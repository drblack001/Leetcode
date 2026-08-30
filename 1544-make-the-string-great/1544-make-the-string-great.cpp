class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!st.empty() && abs(st.top()-s[i])==32){
                st.pop();
            }
            else st.push(s[i]);
        }
        string a="";
        while(!st.empty()){
            a+=st.top();
            st.pop();
        }
        reverse(a.begin(), a.end());
        return a;
    }
};