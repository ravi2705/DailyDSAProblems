// You are given a sorted unique integer array nums.

// A range [a,b] is the set of all integers from a to b (inclusive).

// Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

// Each range [a,b] in the list should be output as:

// "a->b" if a != b
// "a" if a == b
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for (int i = 0; i < nums.size(); ++i) {
            const int begin = nums[i];
            while (i + 1 < nums.size() && nums[i] == nums[i + 1] - 1)
                ++i;
            const int end = nums[i];
            if (begin == end)
                ans.push_back(to_string(begin));
            else
                ans.push_back(to_string(begin) + "->" + to_string(end));
        }
        return ans;
    }
};