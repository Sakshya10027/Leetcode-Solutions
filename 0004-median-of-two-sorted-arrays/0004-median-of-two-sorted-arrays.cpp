class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int pos1 = -1, pos2 = -1;
        if ((n1 + n2) % 2 == 0){
            pos1 = (n1 + n2)/2 - 1;
            pos2 = pos1 + 1;
        } else {
            pos1 = (n1 + n2 + 1)/2 - 1;
            pos2 = pos1;
        }
        int curr = -1, i = -1, j = -1;
        double val = 0.0;
        double currVal = 0.0;
        while (curr <= pos2){
            curr += 1;
            if (i+1 < n1 and j+1 < n2){
                if (nums1[i+1] < nums2[j+1]){
                    i+=1;
                    currVal = nums1[i];
                } else {
                    j+=1;
                    currVal = nums2[j];
                }
            } else if (i+1 < n1) {
                    i+=1;
                    currVal = nums1[i];
            } else if (j+1 < n2) {
                    j+=1;
                    currVal = nums2[j];
            }
            
            if (curr == pos1 or curr == pos2){
                val += currVal;
            }
        }
        if (pos2 == pos1){
            return val;
        }
        return val/2;
    }
};