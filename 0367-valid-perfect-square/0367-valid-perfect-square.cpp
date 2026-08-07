class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low=0,high=num;
        bool issquare = false;
        while(low<=high){
            long long mid = (low+high)/2;
            if(mid*mid == num){
                issquare= true;
                break;
            }
            else if(mid*mid < num){
                low=mid+1;
            }
            else if (mid*mid > num){
                high=mid-1;
            }
        }
        return issquare;
    }
};