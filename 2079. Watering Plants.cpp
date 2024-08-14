class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int water_left = capacity;
        int steps = 0;
        for(int i = 0; i < plants.size(); i++){
            if(water_left - plants[i] >= 0){
                water_left -= plants[i];
                steps++;
                continue;
            }
            i--;
            steps += (i+1)*2;
            water_left = capacity;
        }
        return steps;
    }
};