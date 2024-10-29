class Solution {
public:
    int rows, cols;
    vector<int> directions = {-1, 0, 1};
    vector<vector<int>> memo;
    int process(int row, int col, vector<vector<int>>& grid) {
        if (memo[row][col] != -1) 
            return memo[row][col];
        int moves = 0;
        for (int &dir : directions) {
            int newRow = row + dir;
            int newCol = col + 1;
            if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols) {
                if (grid[newRow][newCol] > grid[row][col])
                    moves = max(moves, 1 + process(newRow, newCol, grid));
            }
        }
        return memo[row][col] = moves;
    }
    int maxMoves(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();
        memo = vector<vector<int>>(rows, vector<int>(cols, -1));
        int ans = 0;
        for (int i = 0; i < rows; i++)
            ans = max(ans, process(i, 0, grid));
        return ans;
    }
};
