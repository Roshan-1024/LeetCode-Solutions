class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int ans = -1;
        for(int i = 0; i < size; i++)
            if((nums[i] + nums[size-i-1]) > ans)
                ans = nums[i] + nums[size-i-1];
        return ans;
    }
};