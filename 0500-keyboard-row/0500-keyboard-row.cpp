class Solution { 
public: 
    vector<string> findWords(vector<string>& words) { 
        vector<string> ans; 
        unordered_map<char, int> mp; 

        string s1 = "qwertyuiop"; 
        string s2 = "asdfghjkl"; 
        string s3 = "zxcvbnm"; 

        for(char ch : s1) { 
            mp[ch] = 1; 
        } 
        for(char ch : s2) { 
            mp[ch] = 2; 
        } 
        for(char ch : s3) { 
            mp[ch] = 3; 
        } 
        
        for(int i = 0; i < words.size(); i++) { 
            bool isvalid = true;
            int row = mp[tolower(words[i][0])];
            for(int j = 0; j < words[i].size(); j++) { 
                if(mp[tolower(words[i][j])] != row) {
                    isvalid = false;
                    break;
                }
            }
            if(isvalid) {
                ans.push_back(words[i]);
            }
        }
        return ans;
    } 
};