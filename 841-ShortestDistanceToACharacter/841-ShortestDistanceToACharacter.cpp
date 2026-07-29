// Last updated: 7/29/2026, 2:26:47 PM
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>answer (s.size(),INT_MAX);
        vector<int> nums;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                nums.push_back(i);
            }
        }
        for(int j=0;j<=nums.size()-1;j++){
            for(int i=0;i<s.size();i++){
                answer[i]=min(answer[i],abs(nums[j]-i));
            }
        }
        return answer;
    }
};