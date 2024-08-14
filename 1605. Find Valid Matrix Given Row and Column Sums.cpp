//Couldn't find the process
class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int m = rowSum.size();
        int n = colSum.size();
        vector<vector<int>> ans;
        for(int i = 0; i < m; i++){
            vector<int> row;
            for(int j = 0; j < n; j++){
                row.push_back(min(rowSum[i], colSum[j]));
                rowSum[i] = abs(rowSum[i] - row[j]);
                colSum[j] = abs(colSum[j] - row[j]);
            }
            ans.push_back(row);
        }
        return ans;
    }
    inline int min(int a, int b){
        return a < b ? a : b;
    }
};

