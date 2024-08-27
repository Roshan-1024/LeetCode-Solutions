class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int ansRow = 0;
        int ansCol = 0;
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size()/2; j++)
                if(grid[i][j] != grid[i][grid[0].size()-j-1])   ansRow++;
        for(int j = 0; j < grid[0].size(); j++)
            for(int i = 0; i < grid.size()/2; i++)
                if(grid[i][j] != grid[grid.size()-i-1][j])   ansCol++;
        return min(ansRow, ansCol);
    }
};