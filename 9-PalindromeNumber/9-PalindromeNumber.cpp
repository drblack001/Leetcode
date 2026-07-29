// Last updated: 7/29/2026, 2:28:24 PM
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        vector<int> a;
        int temp=0;
        while(x){
            temp=x%10;
            x=x/10;
            a.push_back(temp);
        } 
        vector<int> b = a;
        reverse(b.begin(), b.end());
        return a==b;
    }
}; 