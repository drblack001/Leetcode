
class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1)
            return s;

        int n = s.size();

        vector<vector<char>> mat(numRows, vector<char>(n, ' '));

        int row = 0, col = 0;
        int i = 0;

        while(i < n) {
            while(row < numRows && i < n) {
                mat[row][col] = s[i];
                row++;
                i++;
            }

            row -= 2;
            col++;

            while(row >= 0 && i < n) {
                mat[row][col] = s[i];
                row--;
                col++;
                i++;
            }

            row += 2;
        }

        string ans = "";

        for(int i = 0; i < numRows; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] != ' ') {
                    ans += mat[i][j];
                }
            }
        }

        return ans;
    }
};
