class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eSum = 0, dSum = 0;
        for(auto num = nums.begin(); num != nums.end(); num++){
            eSum += *num;
            int copy = *num;
            while(copy != 0){
                dSum += copy % 10;
                copy /= 10;
            }
        }
        return abs(eSum - dSum);
    }
};