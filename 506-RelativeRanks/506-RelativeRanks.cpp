// Last updated: 7/29/2026, 2:26:57 PM
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        vector<string> ans(score.size());

        for (int i = 0; i < score.size(); i++) {

            int rank = 1;

            for (int j = 0; j < score.size(); j++) {
                if (score[j] > score[i]) {
                    rank++;
                }
            }

            if (rank == 1)
                ans[i] = "Gold Medal";
            else if (rank == 2)
                ans[i] = "Silver Medal";
            else if (rank == 3)
                ans[i] = "Bronze Medal";
            else
                ans[i] = to_string(rank);
        }

        return ans;
    }
};