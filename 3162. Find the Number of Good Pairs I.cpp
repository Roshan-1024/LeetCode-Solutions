class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int count = 0;
        for(int i = 0; i < size1; i++)
            for(int j = 0; j < size2; j++)
                if(nums1.at(i) % (nums2.at(j)*k) == 0)    count++;
        return count;
    }
};