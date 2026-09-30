class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int>mp;
        for(auto x:allowed){
            mp[x]++;
        }
        int count =0;
        for (int i=0;i<words.size();i++){
            bool istrue = false;
            for(int j=0;j<words[i].size();j++){
                if(mp.find(words[i][j])!=mp.end())istrue=true;
                else {
                    istrue=false;
                    break;
                }
            }
            if(istrue==true)count++;
        }
        return count;
    }
};