class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<pair<int, int>> p(n);
        for (int i = 0; i < n; i++) {
            p[i] = {intervals[i][1], intervals[i][0]};
        }

        sort(p.begin(), p.end());

        int count = 0;
        int prev_end = p[0].first;

        for (int i = 1; i < n; i++) {
            if (p[i].second < prev_end) {
                count++;
            } else {
                prev_end = p[i].first;
            }
        }

        return count;
    }
};