// Last updated: 7/29/2026, 2:26:17 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int> a;
        for(int i =0;i<n;i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==x){
                    a.push_back(i);
                    break;
                }
            }
        }
        return a;
    }
};