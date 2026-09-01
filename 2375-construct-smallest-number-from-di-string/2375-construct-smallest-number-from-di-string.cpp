class Solution {
public:
    string smallestNumber(string pattern) {
        vector<int> nums;
        for(int i=1;i<=pattern.size()+1;i++){
            nums.push_back(i);
        }

        for(int i=0;i<pattern.size();i++){
            if(pattern[i]=='D'){
                int start =i;
                while(i<pattern.size()  && pattern[i]=='D' ) i++;
                reverse(nums.begin()+start , nums.begin()+i+1);
            }
        }
        string ans="";
        for(int x : nums){
            ans+=to_string(x);
        }
        return ans;
    }
};