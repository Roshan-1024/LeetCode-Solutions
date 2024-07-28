class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> ans;
        int m = 3;
        int no_of_times = grid.at(0).size() - m + 1;
        for(int incY = 0; incY < no_of_times; incY++){
            vector<int> row;
            for(int incX = 0; incX < no_of_times; incX++){
                int max = 0;
                for(int i = 0 + incY; i < m + incY; i++)
                    for(int j = 0 + incX; j < m + incX; j++)
                        if(grid.at(i).at(j) > max)  max = grid.at(i).at(j);
                row.push_back(max);
            }
            ans.push_back(row);
        }
        return ans;
    }
};

//Time complexity: O(N^2 * M^2)
//Space complexity: O(1)