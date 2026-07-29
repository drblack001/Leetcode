// Last updated: 7/29/2026, 2:26:29 PM
class Solution {
public:
    int minPartitions(string n) {
        int max=0;
        for(char c : n){
            if(max<(c-'0')){
                max=c-'0';
            }
        }
        return max;
        
    }
};