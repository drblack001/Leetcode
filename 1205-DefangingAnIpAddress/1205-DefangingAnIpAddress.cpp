// Last updated: 7/29/2026, 2:26:42 PM
class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        for(int i=0;i< address.size();i++){
            if(address[i]=='.'){
                s+="[.]";
            }
            else{
                s+=address[i];
            }
        }
        return s;
    }
};