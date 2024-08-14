//O(n) time and space
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        for(int num : nums)
            if(num < pivot) ans.push_back(num);
        for(int num : nums)
            if(num == pivot) ans.push_back(num);
        for(int num : nums)
            if(num > pivot) ans.push_back(num);
        return ans;
    }
};

//O(1) space and O(n^2) time
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int i = 0;
        int size = nums.size();
        if(size == 1)   return nums;
        for(int j = i; j < size; j++){    //smaller elems
            if(nums[j] < pivot){
                nums.insert(nums.begin()+i, nums[j]);
                nums.erase(nums.begin()+j+1);
                i++;
                j = i-1;
                continue;
            }
        }
        for(int j = i; j < size; j++){    //same elems
            if(nums[j] == pivot){
                nums.insert(nums.begin()+i, nums[j]);
                nums.erase(nums.begin()+j+1);
                i++;
                j = i-1;
                continue;
            }
        }
        return nums;
    }
};