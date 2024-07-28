class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for (auto i = accounts.begin(); i != accounts.end(); ++i){
            // *i denotes the vector of bank accounts' money
            vector<int> wealth = *i;
            int sum = 0;
            for (auto j = wealth.begin(); j != wealth.end(); ++j){
                // *j is individual money
                sum += *j;
            }
            // sum contains ith person's total wealth.
            if (sum > maxWealth)
                maxWealth = sum;
        }
        return maxWealth;
    }
};