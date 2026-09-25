class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if (numRows <= 0) return ans;
        ans.push_back({1});
        int i=1;
        while(i<numRows){
            vector<int> temp;
            int j = 0;
            temp.push_back(1);
            while (j < i-1) {
                int n = ans[i-1][j] + ans[i-1][j + 1];
                temp.push_back(n);
                j++;
            }
            temp.push_back(1);
            ans.push_back(temp);
            i++;
        }
        // for(int i=0;i<numRows;i++){
        //     vector<int>temp(i+1,1);
        //     for(int j=1;j<i;j++){
        //         temp[j] = ans[i-1][j-1]+ans[i-1][j];
        //     }
        //     ans.push_back(temp);
        // }
        return ans;
    }
};