class Solution {
    void findSubsets(vector<int>& nums, vector<int>& subset, vector<vector<int>>& subsets, int i){
        if(i == nums.size()){
            subsets.push_back(subset);
            return;
        }
        //Exclusion
        findSubsets(nums, subset, subsets, i+1);
        //Inclusion
        subset.push_back(nums[i]);
        findSubsets(nums, subset, subsets, i+1);
        subset.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> subsets;
        findSubsets(nums, subset, subsets, 0);
        return subsets;
    }
};