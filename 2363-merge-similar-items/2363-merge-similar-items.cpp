class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> mp;
        vector<vector<int>> ans;

        for(int i=0;i<items1.size();i++){
            for(int j=0;j<1;j++){
                mp[items1[i][j]]+=items1[i][j+1];
            }
        }

        for(int i=0;i<items2.size();i++){
            for(int j=0;j<1;j++){
                mp[items2[i][j]]+=items2[i][j+1];
            }
        }

        for(auto X: mp){
            vector<int> temp;
            temp.push_back(X.first);
            temp.push_back(X.second);
            ans.push_back(temp);
        }

        return ans;

    }
};