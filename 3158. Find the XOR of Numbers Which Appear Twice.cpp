class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> map;
        int ans = 0;
        for(int num : nums)
            map[num]++;
        for(auto pair : map)
            if(pair.second == 2)
                ans ^= pair.first;
        return ans;
    }
};