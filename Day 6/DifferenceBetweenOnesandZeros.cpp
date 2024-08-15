class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> rowOnes(n, 0);
        vector<int> colOnes(m, 0);
        
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                if(grid[i][j] == 1) {
                    rowOnes[i]++;
                    colOnes[j]++;
                } 
            }
        }
        
        vector<vector<int>> diff(n, vector<int>(m, 0));
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                int onesRowi = rowOnes[i];
                int onesColj = colOnes[j];
                int zerosRowi = n-onesRowi;
                int zerosColj = m-onesColj;
                
                diff[i][j] = onesRowi + onesColj - zerosRowi - zerosColj;
            }
        }
        return diff;
    }
};