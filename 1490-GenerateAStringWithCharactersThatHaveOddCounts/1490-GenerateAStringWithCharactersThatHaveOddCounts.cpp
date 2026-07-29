// Last updated: 7/29/2026, 2:26:39 PM
class Solution {
public:
    string generateTheString(int n) {
        if(n % 2 == 1)
            return string(n, 'a');
        return string(n-1, 'a') + "b";
    }
};