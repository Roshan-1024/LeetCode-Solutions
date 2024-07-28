class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums.at(0));
        int size = nums.size();
        for(int i = 1; i < size; i++){
            ans.push_back(ans.at(i-1) + nums.at(i));
        }
        return ans;
    }
};