class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int srow = 0, erow = m-1, sclm = 0, eclm = n-1;

        vector<int>ans;

        while(srow <= erow && sclm <= eclm){
            //top
            for(int j = sclm; j <= eclm; j++){
                ans.push_back(matrix[srow][j]);
            }

            //right
            for(int i = srow+1; i <= erow; i++){
                ans.push_back(matrix[i][eclm]);    
            }

            //bottom
            for(int j = eclm-1; j >= sclm; j--){
                if(srow == erow){
                    break;
                }
                ans.push_back(matrix[erow][j]);
            }

            //left
            for(int i = erow-1; i >= srow+1; i--){
                if(sclm == eclm){
                    break;
                }
                ans.push_back(matrix[i][sclm]);
            }
            srow++;
            erow--;
            sclm++;
            eclm--;
        }
        return ans;
    }
};