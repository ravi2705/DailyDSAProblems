// 137. Single Number II
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

 

// Example 1:

// Input: nums = [2,2,3,2]
// Output: 3
// Example 2:

// Input: nums = [0,1,0,1,0,1,99]
// Output: 99

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        // Iterate through every bit position
        for (int i = 0; i < 32; ++i) {
            int bitSum = 0;
            for (int num : nums) {
                // Accumulate the i-th bit of all numbers
                bitSum += (num >> i) & 1;
            }
            // Set the i-th bit of result if bitSum % 3 != 0
            if (bitSum % 3 != 0) {
                result |= (1 << i);
            }
        }

        return result;
    }
};
