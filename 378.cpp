// 378. Kth Smallest Element in a Sorted Matrix
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given an n x n matrix where each of the rows and columns is sorted in ascending order, return the kth smallest element in the matrix.

// Note that it is the kth smallest element in the sorted order, not the kth distinct element.

// You must find a solution with a memory complexity better than O(n2)

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        vector<int> elements;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                elements.push_back(matrix[i][j]);
            }
        }
        if (elements.size() < k) {
            return -1;
        }
        sort(elements.begin(), elements.end());
        return elements[k-1];
    }
};