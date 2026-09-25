class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        map<int,vector<int>> mp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                mp[j].push_back(matrix[i][j]);
            }
        }
        int i=0;
        matrix.clear();
        for(auto it:mp){
            reverse(it.second.begin(), it.second.end());
            matrix.push_back(it.second);
        }
    }
};