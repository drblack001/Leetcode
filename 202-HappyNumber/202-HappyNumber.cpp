// Last updated: 7/29/2026, 2:27:37 PM
class Solution {
public:
    int Sum1(int n){
        int sum = 0;
        while(n){
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = Sum1(n);

        while(fast != 1 && slow != fast){
            slow = Sum1(slow);
            fast = Sum1(Sum1(fast));
        }

        return fast == 1;
    }
};