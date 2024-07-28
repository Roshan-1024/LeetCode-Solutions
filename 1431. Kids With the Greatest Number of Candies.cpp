class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxCandies = 0;
        for(auto i = candies.begin(); i != candies.end(); i++)
            if(*i > maxCandies) maxCandies = *i;
        for(auto i = candies.begin(); i != candies.end(); i++)
            *i+extraCandies >= maxCandies ? ans.push_back(true) : ans.push_back(false);
        return ans;
    }
};