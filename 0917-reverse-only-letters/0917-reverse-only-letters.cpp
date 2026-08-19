class Solution {
public:
    string reverseOnlyLetters(string s){
        string a="";
  string b="";
  for(int i=0;i<s.size();i++){
    if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
      a+=s[i];
    }
  }
  reverse(a.begin(),a.end());
  int j=0;
  for(int i=0;i<s.size();i++){
    if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
      b+=a[j];
      j++;
    }
    else{
      b+=s[i];
    }
  }
  return b;
    }
};