class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        int size = nums.size();
        for(int i = 0; i < size; i++)
            ans.insert(ans.begin() + index.at(i), nums.at(i));
        return ans;
    }
};