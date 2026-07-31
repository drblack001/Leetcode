class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
       string s1="";
       if(words.size()==1){
        return true;
       }
       for(int i=0;i<words.size();i++) {
        if(s1==s  && s1.size()==s.size()){
            return true;
            break;
        }else
        s1+=words[i];
       }
       return false;
    }
};