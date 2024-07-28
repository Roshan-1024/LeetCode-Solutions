class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i = 0;
        while(i < n){
            ans.push_back(nums.at(i));
            ans.push_back(nums.at(i+n));
            i++;
        }
        return ans;
    }
};