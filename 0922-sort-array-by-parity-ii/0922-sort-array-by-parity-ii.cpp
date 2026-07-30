class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> answer(nums.size());
        int evenIndex = 0, oddIndex = 1;

        for (int num : nums) {
            if (num % 2 == 0) {
                answer[evenIndex] = num;
                evenIndex += 2;
            } else {
                answer[oddIndex] = num;
                oddIndex += 2;
            }
        }
        return answer;
    }
};
