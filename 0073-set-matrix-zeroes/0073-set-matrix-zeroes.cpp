class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,bool> row;
        unordered_map<int,bool> cols;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    row[i]=true;
                    cols[j]=true;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(row[i] || cols[j]){
                    matrix[i][j]=0;
                }
            }
        }

    }
};