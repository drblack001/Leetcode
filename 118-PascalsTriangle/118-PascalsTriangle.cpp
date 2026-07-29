// Last updated: 7/29/2026, 2:27:50 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<int> a;
       a.push_back(1);
       vector<vector<int>> b;
       for(int i=0;i<numRows;i++){
        b.push_back(a);
        vector<int> next;
        next.push_back(1);
        for(int j =1;j<a.size();j++){
            next.push_back(a[j-1]+a[j]);
        }
        next.push_back(1);
        a=next;
       } 
       return b;
    } 
};