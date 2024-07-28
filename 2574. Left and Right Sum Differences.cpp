class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum, rightSum, ans;
        for(auto i = nums.begin(); i != nums.end(); i++){
            leftSum.push_back(0);
            rightSum.push_back(0);
            ans.push_back(0);
        }
        int size = nums.size();
        for(int i = 1; i < size; i++){
            leftSum.at(i) = leftSum.at(i-1) + nums.at(i-1);
        }

        for(int i = size-2; i >= 0; i--){
            rightSum.at(i) = rightSum.at(i+1) + nums.at(i+1);
        }

        for(int i = 0; i < size; i++){
            ans.at(i) = abs(leftSum.at(i) - rightSum.at(i));
        }
        return ans;
    }
};