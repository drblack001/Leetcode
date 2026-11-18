class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int ans = 0;
        vector<vector<int>> a;
        int cur = 0;
        for (vector<int> t : trips) {
            a.push_back({t[1], t[0]});
            a.push_back({t[2], -t[0]});
        }
        sort(a.begin(), a.end());
        for (vector<int> x : a) {
            cur += x[1];
            ans = max(ans, cur);
        }
        return ans<=capacity?true:false;
    }
};