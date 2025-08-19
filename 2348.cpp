// 2348. Number of Zero-Filled Subarrays

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long result = 0;
        int i = 0;

        while (i < nums.size()) {
            int len = 0;

            if (nums[i] == 0) {
                while (i < nums.size() && nums[i] == 0) {
                    len++;
                    i++;
                }
                result += (long long)len * (len + 1) / 2;
            } else {
                i++;
            }
        }
        return result;
    }
};
