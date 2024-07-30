class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto circle : queries){
            int count = 0;
            for(auto point : points)
                if(pow(circle[0] - point[0], 2) + pow(circle[1] - point[1], 2) <= pow(circle[2], 2))    count++;
            ans.push_back(count);
        }
        return ans;
    }
};