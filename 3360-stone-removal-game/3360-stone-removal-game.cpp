class Solution {
public:
    bool canAliceWin(int n) {
        int i = 0;
        int x = 10;
        while (n >= x) {
            n -= x;
            x--;
            i++;
        }
        return i % 2 != 0;
    }
};