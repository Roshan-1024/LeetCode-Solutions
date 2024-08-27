class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> row(n + 1);
        row[0] = 1;
        
        for (int i = 1; i <= n; ++i) {
            size_t prev = row[i - 1];
            size_t x = prev * (n - i + 1) / i;
            row[i] = x;
        }
        return row;
    }
};