
// Code
// Testcase
// Test Result
// Test Result
// 386. Lexicographical Numbers
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given an integer n, return all the numbers in the range [1, n] 
// sorted in lexicographical order.

// You must write an algorithm that runs in O(n) 
// time and uses O(1) extra space. 

 

// Example 1:

// Input: n = 13
// Output: [1,10,11,12,13,2,3,4,5,6,7,8,9]
// Example 2:

// Input: n = 2
// Output: [1,2]

class Solution {
public:
    static vector<int> lexicalOrder(int n) {
        vector<int> ans(n);
        int x=1;
        for(int i=0; i<n; i++){
            ans[i]=x;
            if (x*10>n){
                if (x==n) x/=10;
                x++;
                while(x%10==0) x/=10;
            } 
            else x*=10;          
        }
        return ans;
    }
};