class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0, sum2 = 0;
        for(int num : nums)
            num < 10 ? sum1+=num : sum2+=num;
        return sum1 != sum2 ? true : false;
    }
};