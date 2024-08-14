// O(M*N) (took hint)
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans = 0;
        int m = -1, p = -1, g = -1;
        int size = garbage.size();
        for(int i = 0; i < size; i++){
            int len = garbage.at(i).length();
            ans += len;
            for(int j = 0; j < len; j++){
                if(garbage[i][j] == 'M')    m = i-1;
                else if(garbage[i][j] == 'P')   p = i-1;
                else g = i-1;
            }
        }
        size = travel.size();
        for(int i = 0; i < size; i++){
            if(i <= m && m != -1)   ans += travel[i];
            if (i <= p && p != -1)  ans += travel[i];
            if(i <= g && g != -1)   ans += travel[i];
        }
        return ans;
    }
};