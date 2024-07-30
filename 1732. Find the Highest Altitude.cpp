class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAlt = 0, highestAlt = 0;
        for(auto g : gain){
            currentAlt += g;
            highestAlt = currentAlt > highestAlt ? currentAlt : highestAlt;
        }
        return highestAlt;
    }
};