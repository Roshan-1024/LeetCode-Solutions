class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for(int i = 0; i < size-1; i+=2){
            swap(nums[i], nums[i+1]);
        }
        return nums;
    }
};