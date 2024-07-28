class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(auto i = nums.begin(); i != nums.end(); i++)
            for(auto j = i + 1; j != nums.end(); j++)
                if(*i + *j < target)    count++;
        return count;
    }
};