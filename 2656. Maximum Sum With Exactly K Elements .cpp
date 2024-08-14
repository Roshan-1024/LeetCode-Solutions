class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
      int max = nums[0];
      for(int e : nums)
        if(e > max)
          max = e;
      return max*k + (k-1)*k/2;
    }
};

//Using std::max_element() ->O(n) solution too
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
      auto max_it = max_element(nums.begin(), nums.end());
      return *max_it*k + (k-1)*k/2;
    }
};