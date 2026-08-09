class Solution {
public:
    vector<int> constructRectangle(int area) {
        int minDiff = INT_MAX;
        vector<int> ans(2);

        for (int W = 1; W <= sqrt(area); W++) {
            if (area % W == 0) {
                int L = area / W;

                if (L - W < minDiff) {
                    minDiff = L - W;
                    ans[0] = L;
                    ans[1] = W;
                }
            }
        }

        return ans;
    }
};