// Last updated: 7/29/2026, 2:26:35 PM
class Solution {
public:
    double average(vector<int>& salary) {
        int minSal = INT_MAX;
        int maxSal = INT_MIN;
        double sum = 0;
        
        for(int s : salary){
            sum += s;
            minSal = min(minSal, s);
            maxSal = max(maxSal, s);
        }
        
        return (sum - minSal - maxSal) / (salary.size() - 2);
    }
};