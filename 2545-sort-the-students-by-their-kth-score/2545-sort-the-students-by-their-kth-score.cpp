class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int,int>> nums;
        for(int i = 0; i < score.size(); i++) {
            nums.push_back({score[i][k], i});
        }
        sort(nums.rbegin(), nums.rend());
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size(); i++) {
            ans.push_back(score[nums[i].second]);
        }

        return ans;
    }
};