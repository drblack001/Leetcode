class Solution {
public:
    int maxPower(string s) {
        int count=1;
        char ch=s[0];
        int maxlen=0;
        if(s.size()==1)return 1;
        for(int i=1;i<s.size();i++){
            if(s[i]==ch){
                count++;
            }
            else{
                ch=s[i];
                count=1;
            }
            
            maxlen=max(count, maxlen);
        }
        return maxlen;
    }
};