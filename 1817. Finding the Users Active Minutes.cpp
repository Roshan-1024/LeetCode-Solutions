class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int, unordered_set<int>> map;
        vector<int> ans(k);
        for(auto elem : logs)
          map[elem[0]].insert(elem[1]);
        for(const auto& pair : map)
          ans[pair.second.size()-1]++;
        return ans;
    }
};