// Last updated: 7/29/2026, 2:27:12 PM
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<bool> used(nums2.size(), false);

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (!used[j] && nums1[i] == nums2[j]) {
                    ans.push_back(nums1[i]);
                    used[j] = true;
                    break;
                }
            }
        }

        return ans;
    }
};