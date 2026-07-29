// Last updated: 7/29/2026, 2:26:18 PM
class Solution {
public:
    bool isSameAfterReversals(int x) {
        int n=x;
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            rev = rev * 10 + digit; 
        }

        int rev1 = 0;

        while (rev != 0) {
            int digit = rev % 10;
            rev /= 10;

            rev1 = rev1 * 10 + digit;
        }
        return (n==rev1);
    }
};