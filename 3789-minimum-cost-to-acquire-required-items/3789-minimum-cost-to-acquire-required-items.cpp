
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long ans = LLONG_MAX;

        long long cost = 1LL * need1 * cost1 + 1LL * need2 * cost2;
        ans = min(ans, cost);

        int x = min(need1, need2);

        cost = 1LL * x * costBoth
             + 1LL * (need1 - x) * cost1
             + 1LL * (need2 - x) * cost2;

        ans = min(ans, cost);

        x = max(need1, need2);

        cost = 1LL * x * costBoth;

        ans = min(ans, cost);

        return ans;
    }
};
