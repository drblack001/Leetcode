class Solution {
public:
    string toLowerCase(string s) {
        string s1="";
        for(int i=0;i<s.size();i++){
            if((s[i]>=65)&&(s[i]<=90)){
                s[i]+=32;
                s1+=s[i];
            }
            else{
                s1+=s[i];
            }
        }
        return s1;
    }
};