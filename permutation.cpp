// Given an array nums of distinct integers, return 
// all the possible permutations. You can return
//  the answer in any order.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// Example 2:

// Input: nums = [0,1]
// Output: [[0,1],[1,0]]
// Example 3:

// Input: nums = [1]
// Output: [[1]]
class Solution {
public:
    void getPermutation(vector<int> &nums, int indx, vector<vector<int>> &ans){
        if(indx == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = indx; i<nums.size(); i++){
            swap(nums[i], nums[indx]);
            getPermutation(nums, indx+1, ans);

            swap(nums[i], nums[indx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        getPermutation(nums, 0, ans);
        return ans;
    }
};