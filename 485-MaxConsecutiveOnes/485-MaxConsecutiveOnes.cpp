// Last updated: 7/29/2026, 2:26:59 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int count = 0;
        int maxCount = 0;

        for(int i = 0; i < a.size(); i++){
            if(a[i] == 1){
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }

        return maxCount;
    }
};