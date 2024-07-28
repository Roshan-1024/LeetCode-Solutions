class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        int encSize = encoded.size();
        for(int i = 0; i < encSize; i++)
            ans.push_back(ans.at(i) ^ encoded.at(i));
        return ans;
    }
};