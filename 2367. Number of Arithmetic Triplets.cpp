class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        int first, second, third;
        bool found;
        int size = nums.size();
        for (int i = 0; i < size-2; i++){
            found = false;
            for(int j = i+1; j < size-1; j++){
                if(nums[i] + diff == nums[j]) {
                    for(int k = j+1; k < size; k++){
                        if(nums[j] + diff == nums[k]){
                            count++;
                            found = true;
                            break;
                        }
                    }
                }
                if(found)   break;
            }
        }
        return count;
    }
};