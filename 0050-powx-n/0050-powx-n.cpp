class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        double ans1 = 1;
        long long a = n;

        if(x == 1 || x == -1 && n % 2 == 0)
            return 1;

        if(n > 0){
            while(a > 0){
                if(a % 2 == 1){
                    ans = ans * x;
                }

                x = x * x;
                a = a / 2;
            }
            return ans;
        }
        else if(n == 0){
            return 1;
        }
        else{
            a = -a;
            x = 1 / x;

            while(a > 0){
                if(a % 2 == 1){
                    ans1 = ans1 * x;
                }

                x = x * x;
                a = a / 2;
            }

            return ans1;
        }
    }
};