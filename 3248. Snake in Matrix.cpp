class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int netX = 0;
        int netY = 0;
        for(string cmd : commands){
            if(cmd == "UP") netY--;
            else if(cmd == "DOWN")  netY++;
            else if(cmd == "RIGHT") netX++;
            else netX--;
        }
        return (netY * n) + netX;
    }
};