class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int i=0;
        vector<int> ans;
        unordered_map<int,int> mp;
        while(i<A.size()){
            mp[A[i]]++;
            mp[B[i]]++;
            int count=0;
            for(auto it:mp){
                if(it.second>=2){
                    count++;
                }
            }
            ans.push_back(count);
            i++;
        }
        return ans;
    }
};