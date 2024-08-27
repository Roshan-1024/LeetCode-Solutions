//Learnt the concept of bitmasking here and used negation for the first time to flip bits
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        vector<int> xor_elems;

        //find xor of all elems in nums
        int x = 0;
        for(int& e : nums)
            x ^= e;

        //store the xor of all the elems for each query
        xor_elems.push_back(x);
        for(int i = nums.size()-1; i > 0; i--){
            x ^= nums[i];
            xor_elems.push_back(x);
        }

        unsigned int mask = (1 << maximumBit) - 1;
        for(int& n : xor_elems){
            unsigned int k = ~n & mask;
            ans.push_back(k);
        }
        return ans;
    }
};

//Better solution (not by me)
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        vector<int> xor_elems;

        //find xor of all elems in nums
        int x = 0;
        for(int& e : nums)
            x ^= e;

        unsigned int mask = (1 << maximumBit) - 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            ans.push_back(x ^ mask);  // Calculate the maximum k
            x ^= nums[i];  // Remove the last element from XOR
        }
        return ans;
    }
};