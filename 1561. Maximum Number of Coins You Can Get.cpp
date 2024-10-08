class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int ans = 0;
        int size = piles.size();
        for(int i = 1; (i-1)/2 < size/3; i+=2)
            ans += piles[i];
        return ans;
    }
};