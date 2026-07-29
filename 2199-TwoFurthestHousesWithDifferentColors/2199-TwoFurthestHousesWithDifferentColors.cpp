// Last updated: 7/29/2026, 2:26:21 PM
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int distance= 0;
        int start;
        for(int i=0;i<colors.size();i++){
            for(int j=i;j<colors.size();j++){
                if(colors[i]!=colors[j]){
                    distance = max(distance,abs(j-i));
                }
            }
        }
        return distance;
    }
};