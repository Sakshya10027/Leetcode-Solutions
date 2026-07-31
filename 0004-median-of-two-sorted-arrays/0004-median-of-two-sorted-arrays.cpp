class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        int k = 0, j = 0;
        vector<int> nums3;

        while (k < n && j < m) {
            if (nums1[k] <= nums2[j]) {
                nums3.push_back(nums1[k]);
                k++;
            } else {
                nums3.push_back(nums2[j]);
                j++;
            }
        }

        while (k < n) {
            nums3.push_back(nums1[k]);
            k++;
        }

        while (j < m) {
            nums3.push_back(nums2[j]);
            j++;
        }

        int sz = nums3.size();

        if (sz % 2 != 0) {
            return nums3[sz / 2];
        }

        return (nums3[sz / 2] + nums3[sz / 2 - 1]) / 2.0;
    }
};