class Solution {
private:
    unordered_map<int, int> map;
public:
    void findSubsets(vector<int>& nums, vector<int>& subset, int i){
        if(i >= nums.size()){
            int netOR = 0;
            for(int elem : subset)
                netOR |= elem;
            map[netOR]++;
            return;
        }
        //Exclusion
        findSubsets(nums, subset, i+1);
        //Inclusion
        subset.push_back(nums[i]);
        findSubsets(nums, subset, i+1);
        subset.pop_back();
    }
    int countMaxOrSubsets(vector<int>& nums) {
        vector<int> subset;
        findSubsets(nums, subset, 0);
        int max = 0;
        for(const auto& pair : map)
            if (pair.second > max)
                max = pair.second;
        return max;
    }
};