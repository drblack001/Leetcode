class Solution {
public:
    int maxCoins(vector<int>& piles) {
        // int k = piles.size() - ( piles.size()/3);
        int k = 2*( piles.size()/3);
        sort(piles.rbegin(), piles.rend());
        int ans=0;
        for(int i=1;i<=k;i+=2){
            ans+=piles[i];
        }
        return ans;
    }
};