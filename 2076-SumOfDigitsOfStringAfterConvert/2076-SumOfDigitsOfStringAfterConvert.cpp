// Last updated: 7/29/2026, 2:26:23 PM
class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";

        for(char ch : s){
            int val = ch - 'a' + 1;
            num += to_string(val);
        }

        while(k--){
            int sum = 0;
            for(char c : num){
                sum += c - '0';
            }
            num = to_string(sum);
        }

        return stoi(num);
    }
};