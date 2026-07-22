class Solution {
public:
    string reverseVowels(string s) {
        vector<int> index;
        vector<char> vowels;
        for(int i =0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                vowels.push_back(s[i]);
                index.push_back(i);
            }
        }
        reverse(vowels.begin(),vowels.end());
         for(int i = 0; i < index.size(); i++) {
            s[index[i]] = vowels[i];
        }
     return s;
    }
};