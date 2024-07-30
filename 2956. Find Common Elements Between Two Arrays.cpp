class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int ans1 = 0, ans2 = 0;
        int size1 = nums1.size();
        int size2 = nums2.size();
        for(int i = 0; i < size1; i++)
            for(int j = 0; j < size2; j++)
                if(nums1[i] == nums2[j]){
                    ans1++;
                    break;
                }
        for(int i = 0; i < size2; i++)
            for(int j = 0; j < size1; j++)
                if(nums2[i] == nums1[j]){
                    ans2++;
                    break;
                }
        return {ans1, ans2};
    }
};