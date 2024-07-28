class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (auto i = nums.begin(); i != nums.end()-1; ++i)
            for (auto j = i+1; j != nums.end(); ++j)
                if(*i == *j)    count++;
        return count;
    }
};