class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        string temp = "";

        for(char ch : s){
            if(ch == ' '){
                words.push_back(temp);
                temp = "";
            }
            else{
                temp += ch;
            }
        }
        words.push_back(temp);

        if(words.size() != pattern.size())
            return false;

        for(int i = 0; i < pattern.size(); i++){
            for(int j = 0; j < i; j++){

                if(pattern[i] == pattern[j]){
                    if(words[i] != words[j])
                        return false;
                }

                else{
                    if(words[i] == words[j])
                        return false;
                }
            }
        }

        return true;
    }
};