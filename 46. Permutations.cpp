class Solution {
public:
void permutations(vector<int> nums, vector<vector<int>>& ans, int i, int j){
    if(i == nums.size()-1){
        ans.push_back(nums);
        return;
    }
    if(j >= nums.size())    return;
    swap(nums[i], nums[j]);
    permutations(nums, ans, i+1, i+1);
    permutations(nums, ans, i, j+1);
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutations(nums, ans, 0, 0);
        return ans;
    }
};