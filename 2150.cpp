// 2150. Find All Lonely Numbers in the Array

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        if (nums.size() <= 1){
            return nums;
        }
            
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i && i < n - 1) {
                if (nums[i] - nums[i - 1] > 1 && nums[i + 1] - nums[i] > 1) {
                    ans.push_back(nums[i]);
                }
            } else if (i) {
                if ((nums[i] - nums[i - 1]) > 1) {
                    ans.push_back(nums[i]);
                }
            } else {
                if ((nums[i + 1] - nums[i]) > 1) {
                    ans.push_back(nums[i]);
                }
            }
        }
        return ans;
    }
};