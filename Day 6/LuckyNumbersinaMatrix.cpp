class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int row = i, col = j;
                int rowMin = INT_MAX;
                int colMax = INT_MIN;

                for(int k=0; k<m; k++)
                    rowMin = min(rowMin, matrix[row][k]);
                for(int k=0; k<n; k++)
                    colMax = max(colMax, matrix[k][col]);

                if(matrix[i][j] == rowMin && matrix[i][j] == colMax)
                    ans.push_back(matrix[i][j]);
            }
        }
    return ans;
    }
};