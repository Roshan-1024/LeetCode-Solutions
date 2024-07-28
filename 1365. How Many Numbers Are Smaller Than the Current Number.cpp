class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            int count = 0;
            for(int j = 0; j < size; j++)
                if(nums.at(i) > nums.at(j)) count++;
            ans.push_back(count);
        }
        return ans;
    }
};