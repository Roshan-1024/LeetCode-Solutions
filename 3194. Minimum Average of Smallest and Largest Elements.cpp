class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> averages;
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0, j = size-1; i < size/2 && j >= size/2; i++, j--)
            averages.push_back(double(nums.at(i)+nums.at(j))/2);
        double min = averages.at(0);
        for(auto i = averages.begin(); i != averages.end(); i++)
            if (min > *i)   min = *i;
        return min;
    }
};