// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n,1);
        int prefix = 1,suffix = 1;

        for(int i=1;i<n;i++){
            answer[i] *= prefix * nums[i-1];
            answer[n-i-1] *= suffix * nums[n-i];

            prefix *= nums[i-1];
            suffix *= nums[n-i];
        }

        return answer;      
    }
};