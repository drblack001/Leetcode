// Last updated: 7/29/2026, 2:26:08 PM
class Solution {
public:
    bool isBalanced(string num) {
        const int n=num.size();

        int even=0;
        int odd=0;

        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                even+=(num[i]-'0');
            }
            else
            {
                odd+=(num[i]-'0');
            }
        }
        return even==odd;
        
    }
};