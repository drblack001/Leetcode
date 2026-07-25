class Solution {
public:
    string generateTheString(int n) {
        string s="";
        int n1=n;
        if(n%2==0){
            int i=0;
            while(n--){
                if(i==n1-1){
                    s+="b";
                }
                else{
                s+="a";
                }
                i++;
            }
        }
        else{
            int i=0;
            while(n--){
                s+="a";
                i++;
            }
        }
        return s;
    }
};