class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>> diff;
        int m = grid.size();
        int n = grid[0].size();

        for(int i = 0; i < m; i++){
            int onesRow = 0;
            for(int j = 0; j < n; j++)
                if(grid[i][j] == 1) onesRow += 1;
            vector<int>temp;
            for(int j = 0; j < n; j++)
                temp.push_back(2*onesRow-n);
            diff.push_back(temp);
        }
        
        for(int i = 0; i < n; i++){
            int onesCol = 0;
            for(int j = 0; j < m; j++)
                if(grid[j][i] == 1) onesCol += 1;
            for(int j = 0; j < m; j++)
                 diff[j][i] += (2*onesCol-m);
        }
        
        return diff;
    }
};