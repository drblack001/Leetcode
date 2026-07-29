// Last updated: 7/29/2026, 2:28:27 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int t = n1 + n2;

        vector<int> temp;
        int i = 0, j = 0;

        // Merge two sorted arrays
        while (i < n1 && j < n2) {
            if (nums1[i] <= nums2[j]) {
                temp.push_back(nums1[i++]);
            } else {
                temp.push_back(nums2[j++]);
            }
        }

        // Copy remaining elements
        while (i < n1) {
            temp.push_back(nums1[i++]);
        }

        while (j < n2) {
            temp.push_back(nums2[j++]);
        }

        // Find median
        if (t % 2 == 0) {
            return (temp[t/2 - 1] + temp[t/2]) / 2.0;
        } else {
            return temp[t/2];
        }
    }
};