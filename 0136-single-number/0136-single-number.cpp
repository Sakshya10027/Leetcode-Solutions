class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int x : nums) {
            count[x]++;
        }
        for (auto& pair : count) {
            if (pair.second == 1) {
                return pair.first;
            }
        }

        return -1;
    }
};