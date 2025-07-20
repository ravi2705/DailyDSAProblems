class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    int value = 1;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (value <= n * n) {
        // Left to Right
        for (int i = left; i <= right; i++)
            matrix[top][i] = value++;
        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++)
            matrix[i][right] = value++;
        right--;

        // Right to Left
        for (int i = right; i >= left; i--)
            matrix[bottom][i] = value++;
        bottom--;

        // Bottom to Top
        for (int i = bottom; i >= top; i--)
            matrix[i][left] = value++;
        left++;
    }
    return matrix;
    }
};