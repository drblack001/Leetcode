class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp;
        for(auto x:s)mp[x]++;
        

        for(auto c:t){
            // if(mp.find(c)!=mp.end()){
            //     istrue=true;
            //     mp[c]--;
            //     if(mp[c]==1)mp.erase(c);
            // }else istrue=false;
            mp[c]--;
            if(mp[c]==0) mp.erase(c);
        }
        return !(mp.size()!=0);
    }
};