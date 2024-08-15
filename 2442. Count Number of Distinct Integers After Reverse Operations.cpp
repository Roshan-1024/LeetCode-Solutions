//First solution in 5 mins (Direct submit!)
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums1) {
        vector<int> nums2;
        for(int num : nums1){
            int reversed = 0;
            while(num > 0){
                reversed = reversed*10 + num%10;
                num /= 10;
            }
            nums2.push_back(reversed);
        }
        unordered_set<int> container;
        for(int i = 0; i < nums1.size(); i++){
            container.insert(nums1[i]);
            container.insert(nums2[i]);
        }
        return container.size();
    }
};

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums1) {
        unordered_set<int> container;
        for(int& num : nums1){
            int original = num;
            int reversed = 0;
            while(num > 0){
                reversed = reversed*10 + num%10;
                num /= 10;
            }
            container.insert(original);
            container.insert(reversed);
        }
        return container.size();
    }
};