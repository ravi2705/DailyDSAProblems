class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int cnt = 0;

        while (!is_sorted(nums.begin(), nums.end())) {
            int x = -1, y = -1;
            int sum = INT_MAX;

            for (int i = 0; i < nums.size() - 1; i++) {
                if ((nums[i] + nums[i + 1]) < sum) {
                    x = i;
                    y = i + 1;
                    sum = nums[i] + nums[i + 1];
                }
            }

            if (x == -1 && y == -1) break;

            int num = nums[x] + nums[y];
            nums.erase(nums.begin() + y); // erase y first
            nums.erase(nums.begin() + x);
            nums.insert(nums.begin() + x, num);

            cnt++;
        }

        return cnt;
    }
};
