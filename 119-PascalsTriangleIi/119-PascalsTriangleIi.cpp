// Last updated: 7/29/2026, 2:27:49 PM
class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> row(rowIndex+1);
        long long val = 1;

        for(int i = 0; i <= rowIndex; i++){
            row[i] = val;
            val = val * (rowIndex - i) / (i + 1);
        }

        return row;
    }
};