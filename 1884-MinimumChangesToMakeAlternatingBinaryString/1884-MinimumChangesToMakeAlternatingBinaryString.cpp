// Last updated: 7/29/2026, 2:26:26 PM
class Solution {
public:
    int minOperations(string s) {
        vector<char> zero;
        vector<char> one;
        
        int count0 = 0;
        int count1 = 0;

        for(int i = 0; i < s.size(); i++){
            if(i % 2 == 0){
                zero.push_back('0');
                one.push_back('1');
            }
            else{
                zero.push_back('1');
                one.push_back('0');
            }
        }

        for(int i = 0; i < s.size(); i++){
            if(s[i] != zero[i]) count0++;
            if(s[i] != one[i]) count1++;
        }

        return min(count0, count1);
    }
};