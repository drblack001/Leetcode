class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int size = arr.size();
        vector<int> num;
        int i = 0;
        while (num.size() < size && i < size) {
            num.push_back(arr[i]);
            if (arr[i] == 0 && num.size() < size) {
                num.push_back(0); 
            }
            i++;
        }
        for (int j = 0; j < size; j++) {
            arr[j] = num[j];
        }
    }
};
