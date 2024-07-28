class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int order = mat.at(0).size();
        int ans = 0;
        for(int i = 0, j = 0; i < order && j < order; i++, j++)
            ans += mat.at(i).at(j);
        for(int i = 0, j = order-1; i < order && j >= 0; i++, j--)
            ans += mat.at(i).at(j);
        if(order % 2 == 1)
            return ans - mat.at((order-1)/2).at((order-1)/2);
        return ans;
    }
};