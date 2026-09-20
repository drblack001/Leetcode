class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0,c2 = 0;
        int count1 = 0,count2 = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(count1 == 0 && c2 != nums[i]){
                c1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0 && c1 != nums[i]){
                c2 = nums[i];
                count2 = 1;
            }
            else if(c1 == nums[i]){
                count1++;   
            }
            else if(c2 == nums[i]){
                count2++;   
            }
            else{
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == c1){
                count1++;
            }
            if(nums[i] == c2){
                count2++;
            }
        }
        int t = (n/3)+1;
        vector <int> a;
        if(count1 >= t){
            a.push_back(c1);
        }
        if(count2 >= t && (c1 != c2)){
            a.push_back(c2);
        }
        return a;
    }
};