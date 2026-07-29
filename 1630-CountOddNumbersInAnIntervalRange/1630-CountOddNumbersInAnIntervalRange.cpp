// Last updated: 7/29/2026, 2:26:37 PM
class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        // for(int i =low ;i<=high;i++){
        //     if(i%2!=0)
        //     count++;
        // }
        // return count;
        int i =low;
        while(i<=high){
            if(i%2!=0){
             count++;
             i+=2;
            }
            else
             i++;
        }
        
        return count;
    
    }
};