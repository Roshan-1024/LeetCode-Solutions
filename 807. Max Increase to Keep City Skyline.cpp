class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> westMax, northMax;
        int len = grid.size();
        
        for(int i = 0; i < len; i++){
            int maxL = grid[i][0];
            int maxT = grid[0][i];
            for(int j = 0; j < len; j++){
                if(grid[i][j] > maxL)    maxL = grid[i][j];
                if(grid[j][i] > maxT)    maxT = grid[j][i];
            }
            westMax.push_back(maxL);
            northMax.push_back(maxT);
        }

        int floors = 0;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(grid[i][j] < westMax[i] && grid[i][j] < northMax[j]){
                    int smallest = westMax[i] <=  northMax[j] ? westMax[i] : northMax[j];
                    floors += (smallest - grid[i][j]);
                }
            }
        }
        return floors;
    }
};