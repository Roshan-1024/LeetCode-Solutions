class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> ans;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            if(nums[i] > 0) positive.push_back(nums[i]);
            else    negative.push_back(nums[i]);
        }
        for(int i = 0; i < size; i++){
            if(i % 2 == 0)  ans.push_back(positive[i/2]);
            else ans.push_back(negative[(i-1)/2]);
        }
        return ans;
    }
};

//Another Approach: using a single vector ans.
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size);

        int p = 0, n = 1;
        for(int i = 0; i < size; i++){
            if(nums[i] > 0){
                ans[p] = nums[i];
                p += 2;
            }
            else{
                ans[n] = nums[i];
                n += 2;
            }
        }
        return ans;
    }
};